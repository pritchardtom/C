# Pointers - Notes

In C, pointers provide an indirect method of accessing the value stored by various different data structures/types.

## Defining a Pointer

Defining pointers is simple:

```c

int   *int_pointer;
char  *char_pointer;
float *float_pointer;

```

## Assigning a Pointer

The address operator (&) is used to point a pointer at an object in C:

```c

int_pointer  = &day; // assuming an int var 'day' already exists.

```

The address operator does not assign the value of `day` to `int_pointer`.  It merely assigns a pointer to the variable `day`.


To reference the contents through a pointer, use the indirection operator (\*):

```c

tmp = *int_pointer;

```

This would assign the indirect value that `int_pointer` is pointing to `tmp`.

However, if the following syntax was used:

```c

*int_pointer = tmp;

```

This would assign the value of `tmp` to whatever `int_pointer` is pointing to.  In this example, the value of `day` would be updated to the value of `tmp`.

## Using Pointers in Expressions

The values referenced by pointers can be used in arithmetic expressions.  Take the following (simple) example:

```c

int num = 100;
int ans;
int *ptr;

ptr = &num;
ans = *ptr / 2;

```

A `printf` statement to reveal the integer value stored in `ans` would return: 50.

*Remember:* using \*ptr in above script is the exact same thing as if we had written `ans = num / 2;`.  The two are the same.

## Working with Pointers and Structures

A simple structure can be defined as follows:

```c

struct date
{
        int month;
        int day;
        int year;
};

```

Just as it is permissible to declare variables of this structure (`struct date todaysDate`), it's also possible to create a pointer to a struct:

```c

struct date *datePtr;

```

And assign it to point at structs:

```c

datePtr = &todaysDate;

```

### Accessing Members of Structures

It is possible to indirectly access any of the members of the `date` structure pointed to by `datePtr` in the following way:

```c

(\*datePtr).day = 21;

```

That is: whatever structure is pointed to by `datePtr`, set the day value to 21.

The parentheses are required because the structure member operator (.) has a higher precedence than indirection operator (\*).

It would become quite tedious to constantly use these parentheses, for example:

```c

(\*datePtr).day = 21;
(\*datePtr).month = 4;
(\*datePtr).year = 1999;

if ( (\*datePtr).day == 21  &&  (\*datePtr).month == 4 )
        printf ("It's your birthday\n");

```

Because of the frequency with which pointers and structures are used, C has a special _pointer operator_ which means we can get rid of this current method of (indirectly) access values contained within a structure.

The _pointer operator_ is denoted as follows: `->` and can be used thus:

```c

datePtr -> day = 21;
datePtr -> month = 4;
datePtr -> year = 1999;

if ( datePtr -> day == 21  &&  datePtr -> month == 4 )
        printf ("It's your birthday\n");

```

## Structures Containing Pointers

C also allows pointers to be members of a structure:

```c

struct intPtrs
{
        int \*p1;
        int \*p2;
};

struct intPtrs pointers;

int num1 = 20, num2;

pointers.p1  = &num1;
pointers.p2  = &num2;
*pointers.p2 = 40;    // sets num2 to 40;

```

One of the most common forms of structures containing a pointer is the linked list.  These will be explored below.


### Linked Lists

Suppose you define a structure as follows:

```c

struct entry
{
        int value;
        struct entry \*next;
};

```

The second member of this structure `struct entry *next;` is a pointer to an entry structure.

Now suppose you define two variables to be of type `struct entry` as follows:

```c

struct entry n1, n2;

```

You can set the `next` pointer of `n1` to point to `n2` by executing:

```c

n1.next = &n2;

```

This creates a link between `n1` and `n2`, something you can replicate for `n` structures.  The chain of these linked entries is called a linked list.

Linked lists greatly simplify operations such as the insertion and removal of entries from large lists of sorted items.

#### Removal of Entry from Linked List

It is trivial to remove an item from a linked list.  All you have to do is ignore it, by altering any pointer pointing to it.

For example: if `n1`, `n2`, and `n3` are all types of `struct entry`, it is trivial to remove `n2` from the list.   Simply set the `next` field of `n1` to point to whatever `n2.next` is pointing to:

```c

n1.next = n2.next; // copy pointer in n2.next to n1.next

```

As a result, `n2` is effectively removed from the list.

It is possible to point directly to `n3` with the statement:

```c

n1.next = &n3;

```

However, this method is clumsy, and requires foreknowledge of what `n2` was pointing to.  In this small example, we know it was `n3`.  In a larger list, this may be impractical.

#### Inserting an Entry into a Linked List

This process is just as straightforward.  Imagine you want to insert a new `struct entry` into the linked list, between entries `n2` and `n3`, which we will call `n2_a`.

Simply set `n2_a.next` to point to whatever `n2.next` was pointing to, and set `n2.next` to point to `n2_a`:

```c

n2_a.next = n2.next;
n2.next = &n2_a;

```

This will insert n2_a into the list, immediately after `n2`.  

*Remember* Entries of a list do not have to be stored sequentially in memory, as in the case with elements in an array.

#### Pointing to Start of Linked List

It is often useful, when writing functions to manipulate linked lists, to have a pointer to the start of the list.

To continue with the examples above, this could be done by:

```c

struct entry *list_start = &n1;

```

Or, if we wanted a more generic list pointer, in order to traverse the list, for example, rename accordingly:

```c

struct entry *list_pointer = &n1;

```

#### Pointing to End of Linked List

It is similarly useful to identify the end of the list.  This is particularly important when searching through a list.

Conventionally this is denoted by using a _null pointer_, which is represented as a 0.  Again, in our examples, this would look like this:

```c

n3.next = (struct entry \*) 0;

```

Here we always cast the `0` to be of the appropriate type.  In this example, it's a pointer to a `struct entry` type.  This is not required, but makes the code more readable.

*The chapter on C's Preprocessor will show how to make this declaration more readable.*

#### Traversing a Linked List

This is abridged, but the missing code is obvious (and viewable in examples folder):

```c

struct entry n1, n2, n3;
struct entry *list_pointer = &n1;

n1.value = 100;
n1.next  = &n2;

n2.value = 200;
n2.next  = &n3;

n3.value = 300;
n3.next  = (struct entry \*) 0;

while ( list_pointer != (struct entry \*) 0 ) {
        printf ("%i\n", list_pointer -> value);
        list_pointer = list_pointer -> next;
}

```

These examples have been trivial, and it is not typical to explicitly link list entries as in the above.  To do this, we need dynamic memory allocation, which is covered in Chapter 17.

## `const` Pointers

There are two questions to ask when considering using `const` with pointers:

1. Will the pointer change; or
2. Will the value the pointer points to change?

### An Example to Illustrate `const` and Pointers

```c

int x = 100;
int *intPtr = &x;

```

If the pointer variable `intPtr` is always set pointing to `x`, it is acceptable to declare it as a const pointer:

```c

int * const intPtr = &x; // intPtr is a constant pointer to an integer.

```

Similarly, if the pointer variable `intPtr` points to a variable that will never change its value through `intPtr`:

```c

const int *intPtr = &x; // intPtr points to a constant integer.

```

*This does not mean the value of x cannot change*.  It simply means that `intPtr` cannot alter its value by a statement such as: `*intPtr = 1000;`

If both the pointer variable and the location it points to will not be changed through the pointer, this declaration can be used:

```c

const int * const *intPtr = &x;

```

The first `const` declares that the contents of the location the pointer references will never change.

The second `const` says the pointer itself will not be changed.

## Pointers and Functions

In C it is possible to:

1. Pass a pointer as an argument to a function; and
2. Have a function return a pointer as a result.

*Very Important*

When pointers are sent to functions as arguments, the value of the pointer is copied into formal parameter when function is called.

This means that any change made to the formal parameter by the function does not affect the pointer passed to it.

However, although the pointer cannot be changed by the function, the data values that the pointer reference can be altered.

### Example: Passing Pointer to Function

Take the following function:

```c

void alterValue (int *intPtr)
{
        \*intPtr = 20;
}

```

The data in this function's stack will usually be kept separated from `main`'s stack, via copies of variables.  However, this function will overwrite any value of an int variable declared in `main`.

For example:

```c

int main (void)
{
        int x = 1, y = 200;
        int \*p1 = &x;
        int \*p2 = &y;

        alterValue(p1);
        alterValue(p2);

        printf ("x: \n", x);  // Will print 20;
        printf ("y: \n", x);  // Will print 20;

        return 0;
}

```

This is an extremely powerful ability of pointers.

## Pointers and Arrays

Pointers to arrays in C are very common, and often result in producing code that uses less memory and executes faster.

### Declare a 'Pointer to an Array'

An array pointer is not a special type, and only needs to point to the same type of data that is contained within the array.

For example:

```c

int nums[10];
int *numsPtr;

```

If `nums` was defined as an array of _floats_, the pointer would need to be defined as `float *numsPtr;`

### Set Pointer to First Element in Array

To set our `numsPtr` to the first element in the array `nums`, simply execute:

```c

numsPtr = nums;

```

The address operator (&) is not used in this case (recall that if nums was a structure, this execution would be written as `numsPtr = &nums`).

C automatically treats the appearance of an array name without a subscript as a pointer to the array.

Another method of achieving this would be as follows:

```c

numsPtr = &nums[0];

```

### Use Pointer to Sequence Through Array (Manually)

Continuing with above example, the expression `*numsPtr` can be used to access the value stored in `nums[0]`.

If we wanted to reference `nums[8]`, we would only have to add 8 to `numsPtr` and then use the indirection operator (\*):

```c

*(numsPtr + 8);

```

If `numsPtr` is pointing to `nums[0]` (or any other index value), you can set it to point to the next index by:

```c

numsPtr += 1;

```

You could also use increments/decrements:

```c

++numsPtr;

```

### Use Pointer to Set Values in Array

The normal method to assign a value to an array member would appear as follows: `nums[3] = 42;`

Using a pointer, it would look like this: `*(numsPtr + 3) = 11;`

To set `numsPtr` to point to the fourth element of `nums` array, it is possible to apply the address operator to `nums[3]` and assign the result to `numsPtr`:

```c

numsPtr = &nums[3];

```

### Comparing Pointer Variables

C allows comparisons between pointer variables, which is very useful when dealing with arrays.  For example:

```c

for ( idxPtr = array; idxPtr < arrayEnd; ++idxPtr )
        ...

```

First `idxPtr` is set to `array[0]` (i.e., the first element), which is followed by a comparison between two different pointers: `idx < arrayEnd`.

This for loop will allow us to traverse the entire array.

#### A Note on Optimisation

In general, indexing an array with a variable `i` (as seen in all previous examples and exercises) is slower than using pointers to achieve the same traversal of the array.

### Pointers to Character Strings

Character strings are just arrays, so it is common to use a pointer to character strings.

Take the following `copyString` function, written without pointers:

```c

void copyString (char to[], char from[])
{
        for ( int i = 0; from[i] != '\0'; ++i )
                to[i] = from[i];

        to[i] = '\0';
}

```

Now compare the same function, written with pointers:

```c

void copyString (char *to, char *from)
{
        for ( ; *from != '\0'; ++from, ++to )
                \*to = \*from;

        \*to = '\0';
}

```

## Operations on Pointers

In addition to comparing pointers, we could also perform addition and so on with pointers.

### Obtaining Length of String with Pointers

A handy operation is the subtraction of two pointers to obtain the length of a character array/string.  

If you have a pointer pointing at the start of a string, for example called: `startPtr`, and a pointer called `endPtr`, which lists through the array until the end item is found, you can find the length of the string by:

```c

length = endPtr - startPtr;

```

## Pointers to Functions

Will be updated.
