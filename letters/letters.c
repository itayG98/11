#include <stdio.h>
#include "char_values.h"

/**
 * @brief Entry point for letter program.
 *
 * This function prompts the user for inserting text via stdin (could be file or console) and than manipulate it
 * Capitalize first letter and quted texts , uncapitlize other letters and remove digits.
 * *
 * Example usage:
 * @code
 *    // Input:
 *  I Am young. You are young. All of us are young.
 * "I think we  need    some help.  please" HELP. NO,   NO  NO,
 * I DO NOT
 *      NEED HELP
 *
 * WHATSOEVER.
 * "Todays date is
 *      15/2/2021"...
 * I am 18  years old, are you 20 years old? Maybe      30 years?
 *
 *   // Output:
 *  *  I Am young. You are young. All of us are young.
 * "I THINK WE  NEED    SOME HELP.  PLEASE" help. NO,   no  no,
 * i do not
 *      need help
 *
 * whatsoever.
 * "TODAY'S DATE IS
 *      //"...
 * I am   years old, are you  years old? maybe      30 years?
 * @endcode
 */
int main()
{
    int current_char;
    /* is_in_quote = 0, is_first_letter = 1; */
    printf("Please insert a text to manipulate.\n\n\n");
    while ((current_char = getchar()) != EOF)
    {
        if (current_char >= ZERO_DIGIT && current_char <= NINE_DIGIT)
        {
            continue;
        }

        printf("%c", current_char);
    }
    return 1;
}