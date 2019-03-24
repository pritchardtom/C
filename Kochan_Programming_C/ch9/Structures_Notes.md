# Structures - Notes

Structures allow the grouping of logically-related variables.


### Example

```c

struct time
{
        int hour;
        int minutes;
        int seconds;
};

```

### Declaration

```c

struct time raceStart;

```

### Initialisation

There are a few different ways, demonstrated below:

#### Method 1

```c

raceStart.hour = 12;
raceStart.minute = 30;
raceStart.seconds = 26;

```

#### Method 2 (Declaration & Initialisation)

```c

struct time raceStart = { 12, 30, 26 };

```

#### Method 3 (Declaration & Partial Initialisation)

```c

/*
 *      This only sets the hour.  The minutes and seconds
 *      will be left undefined by default.
 *
 */

struct time raceStart = { 12 };

```

#### Method 4 (Declaration & Specify Member Names)

```c

struct time raceStart = { .hour = 12, .minutes = 30 };

```

#### Method 5 (Compound Literals)

```c

meeting = (struct time) { 12, 30, 26 };

```

#### Method 6 (Compound Literals - Chaos)

```c

// you can specify values in any order (why?):

meeting = (struct time) { .seconds = 26, .hour = 12, .minutes = 30 };

```

### Use in Expressions

```c

if ( raceStart.seconds == 60 ) {
        raceStart.seconds = 0;
        ++raceStart.minutes;
}

```

### Use with Functions

```c

// not very useful, but just a demo:

struct time time_zone_change (struct time t)
{
        ++t.hour;
        return t;
}

// this adds an hour to the new time struct UTC_P1:

struct time UTC_P1 = time_zone_change(raceStart);

```

### Arrays of Structures

```c

// not familiar with races requiring hour splits, but just a demo:

struct time lapTimes[200];

lapTimes[0].hour = 0;
lapTimes[0].minutes = 2;
lapTimes[0].seconds = 26;

```

There are various methods to declare and initialise arrays.  Here are a few examples:

```c

// sets first two lapTimes in the array:

struct time lapTimes[200] = { { 0, 2, 26 }, { 0, 2, 25 } };

```

```c

// sets seventh element in array:

struct time lapTimes[200] = { [8] = { 0, 2, 29 } };

```

```c

// sets seventh element in array (minutes and seconds):

struct time lapTimes[200] = { [8].minutes = 2, [8].seconds = 29 };

```
