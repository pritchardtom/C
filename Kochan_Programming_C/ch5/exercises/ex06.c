/*
 * 	A minus sign placed in front of a field width specification causes the field to be displayed left-justified. 
 *	Substitute the following printf statement for the corresponding statement in Program 5.2, run the program, 
 * 	and compare the outputs produced by both programs.
 * 		- printf ("%-2i %i\n", n, triangularNumber);
 *
 *	Think they mean 5.3 not 5.2
 *
 *  n       Sum from 1 to n
 * ----     ---------------
 *   1            1
 *   2            3
 *   3            6
 *   4            10
 *   5            15
 *   6            21
 *   7            28
 *   8            36
 *   9            45
 *  10            55
 *
 * AFTER ADDING %-2i:
 * 
 *  n       Sum from 1 to n
 * ----     ---------------
 *  1             1
 *  2             3
 *  3             6
 *  4             10
 *  5             15
 *  6             21
 *  7             28
 *  8             36
 *  9             45
 *  10            55
 *
 * Conclusion: it wasn't worth doing.
 */
