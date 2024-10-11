#include <stdio.h>
#include "char_helper.h"

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
    int current_char, is_in_quote = 0, is_first_letter = 1;
    printf("Please insert a text to manipulate.\n\n\n");
    while ((current_char = getchar()) != EOF)
    {
        if (isDigit(current_char))
        {
            continue;
        }
        else if (current_char == QUOTE)
        {
            is_in_quote = is_in_quote ? 0 : 1;
        }
        else if (!is_in_quote && current_char == DOT)
        {
            is_first_letter = 1;
        }
        else if (is_in_quote)
        {
            current_char = capitalize(current_char);
        }
        else if (isCharacter(current_char) && is_first_letter)
        {
            current_char = capitalize(current_char);
            is_first_letter = 0;
        }
        else
        {
            current_char = uncapitalize(current_char);
        }
        printf("%c", current_char);
    }
    return 1;
}