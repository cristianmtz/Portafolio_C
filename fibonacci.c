/*---------------------------------------------------------------------------------
-   Heading: The first comment should contain the name of the program. Also       -
-    include a short description of what the program does. You may have the       -
-   most amazing program, one that slices, dices, and solves all the world's      -
-    problems, but the program is useless if no one knows what it is.             -
-                                                                                 -
-    Author: Cristian Martinez                                                    -
-                                                                                 -
-    file name: Fibonacci                                                                  -
-                                                                                 -
-   Propuse: Why did you write this program? What does it do?                     -
-                                                                                 -
-    Usage: Why did you write this program? What does it do?                      -
-    · Usage. In this section, give a short explanation of how to run the program.-
-    In an ideal world, every program would come with a set of documents          -
-    describing how to use it. T                                                  -
----------------------------------------------------------------------------------*/

/*-----------------------------------------------------------------*\
    * Include section  *
\*-----------------------------------------------------------------*/

#include <stdio.h>

/*-----------------------------------------------------------------*\
    * DEFINE AND MACROS (use ALL_CAPS separated by underscore)  *
\*-----------------------------------------------------------------*/

#define MAX_NUMBER 10

/*-----------------------------------------------------------------*\
    * Typedef Section  *
\*-----------------------------------------------------------------*/

/*-----------------------------------------------------------------*\
    * Prototipe functions
\*-----------------------------------------------------------------*/

void fibonacci(int current_number, int old_number);

/*------------------------------------------------------------------*\
    * Global variables
\*------------------------------------------------------------------*/

/*>>>>>>>>>>>>>>>>>>>>>>> Major section header <<<<<<<<<<<<<<<<<<<<<*/

int main(void)
{

    int current_number = 1; /*Initialize serie fibonacci*/
    int old_number = 1;     /*Initialize serie fibonacci*/

    fibonacci(current_number, old_number);

    return 0;
}

void fibonacci(int current_number, int old_number)
{

    int next_number = 0;

    printf("1\n"); /*Print Fisrt number */

    while (next_number < MAX_NUMBER)
    {
        printf("%d\n", current_number);

        next_number = current_number + old_number;

        old_number = current_number;

        current_number = next_number;
    }
}

/*-------------------------------------------------------
---------------------------------------------------------
----------- WARNING: This is an example of a ------------
 -------- warning message that grabs the ----------------
 -------- attention of the programmer. ------------------
 --------------------------------------------------------*/

/*
 - A medium-level comment explaining the next
 - dozen (or so) lines of code. Even though we don't have
 - the bold typeface, we can **emphasize** words.
 */

/* A simple comment explaining the next line */