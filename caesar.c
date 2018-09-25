/*
 * Program: Caesar
 * Description: Program will get a key (integer) from the user and rotate each character of a plaintext
 *              message by that amount, wrapping around. Capitals should remain, as lowercase remains
 *              and punctuation.
 *
 * Usage Instructions:
 *
 *
 * Usage Examples:
 *
 *
 * @version 1.0
 * @author Michael Cazad <michaelcazad@gmail.com>
*/

#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

int main(int argc, string argv[])

{
    if (argc == 2)  // make sure there is a command line argument.
    {
        int k = atoi(argv[1]);      // turn string into an int using a standard c library
        eprintf("key is: %i\n", k);  // debug code - remove later
    }
    else
    {
        printf("No command argument, or too many given.\nPlease enter 1 command argument as an positive integer");     // user gave no command line arguments or gave too many
        return 1;
    }
    eprintf("out of if statement\n");  //debug code - remove later
    // get user's plaintext here.

}