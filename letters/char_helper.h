#ifndef CHAR_VALUES_H
#define CHAR_VALUES_H

#define ZERO_DIGIT 48
#define NINE_DIGIT 57
#define SMALL_A 97
#define CAPITAL_A 65
#define SMALL_Z 122
#define CAPITAL_Z 90
#define QUOTE 34
#define DOT 46

/**
 * @brief Checks if the given character is a capital letter (A-Z).
 *
 * This function returns wether character is within the ASCII
 * range of capital letters. The function returns a non-zero value
 * (true) if the character is a capital letter; otherwise, it returns
 * zero (false).
 *
 * @param c The character to check.
 * @return int Non-zero if the character is a capital letter,
 *             zero otherwise.
 */
int isCapital(char c);

/**
 * @brief Checks if the given character is a lowercase letter (a-z).
 *
 * This function returns wether character is within the ASCII
 * range of lowercase letters. The function returns a non-zero value
 * (true) if the character is a lowercase letter; otherwise, it returns
 * zero (false).
 *
 * @param c The character to check.
 * @return int Non-zero if the character is a lowercase letter,
 *             zero otherwise.
 */
int isLowerCase(char c);

/**
 * @brief Checks if the given character is a digit (0-9).
 *
 * This function returns wether character is within the ASCII
 * range of digits. The function returns a non-zero value (true) if
 * the character is a digit; otherwise, it returns zero (false).
 *
 * @param c The character to check.
 * @return int Non-zero if the character is a digit,
 *             zero otherwise.
 */
int isDigit(char c);

/**
 * @brief Converts a lowercase letter to uppercase.
 * @param c The character to convert.
 * @return char The uppercase version of the character if it's lowercase;
 *              otherwise, it returns the character unchanged.
 */
char capitalize(char c);

/**
 * @brief Converts an uppercase letter to lowercase.
 * @param c The character to convert.
 * @return char The lowercase version of the character if it's uppercase;
 *              otherwise, it returns the character unchanged.
 */
char uncapitalize(char c);

/**
 * @brief Checks if the given character is a letter (A-Z or a-z).
 * @param c The character to check.
 * @return int Non-zero if the character is a letter, zero otherwise.
 */
int isCharacter(char c);

#endif
