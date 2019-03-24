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

```c

raceStart.hour = 12;
raceStart.minute = 30;
raceStart.seconds = 26;

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
