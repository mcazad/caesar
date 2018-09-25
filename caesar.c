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
    if (argc == 2)
    {
        int k = atoi(argv[1]);
        printf("key is: %i\n", k);
    }
    else
    {
        printf("No command argument given.\n");
        return 1;
    }
    eprintf("out of if statement\n");
}