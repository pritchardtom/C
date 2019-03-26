/*
 *      Exercise 9.4 from Kochan's "Programming in C"
 *
 *      I used a different method in ex02... but this version will still give you the correct day
 *
 */

 #include <stdio.h>

 struct date
 {
         int day;
         int month;
         int year;
 };

 struct date getDate (void)
 {
         struct date d;
         printf ("Enter a date (d/m/yyyy): \n");
         scanf ("%i/%i/%i", &d.day, &d.month, &d.year);

         return d;
 }

 long int calcJDN (struct date d)
 {
         long int jdn;

         jdn = (1461 * (d.year + 4800 + (d.month - 14) / 12)) / 4 + (367 * (d.month - 2 - 12 * ((d.month - 14) / 12))) / 12 - \
               (3 * ((d.year + 4900 + (d.month - 14) / 12) / 100)) / 4 + d.day - 32075;

         jdn = (jdn + 1) % 7;

         return jdn;
 }

void printDay (int n)
{
        switch (n)
        {
                case 0:
                        printf ("Sunday\n");
                        break;
                case 1:
                        printf ("Monday\n");
                        break;
                case 2:
                        printf ("Tuesday\n");
                        break;
                case 3:
                        printf ("Wednesday\n");
                        break;
                case 4:
                        printf ("Thursday\n");
                        break;
                case 5:
                        printf ("Friday\n");
                        break;
                case 6:
                        printf ("Saturday\n");
                        break;
                default:
                        break;
        }
}

int main (void)
{
        struct date date = getDate();
        long int dateJDN = calcJDN(date);
        printDay(dateJDN);

        return 0;
}
