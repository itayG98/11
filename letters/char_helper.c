#include "char_helper.h"

int isCapital(char c)
{
    return (c >= CAPITAL_A && c <= CAPITAL_Z);
}

int isLowerCase(char c)
{
    return (c >= SMALL_A && c <= SMALL_Z);
}

int isDigit(char c)
{
    return (c >= ZERO_DIGIT && c <= NINE_DIGIT);
}

char capitalize(char c)
{
    if (isLowerCase(c))
    {
        return c - (SMALL_A - CAPITAL_A);
    }
    return c;
}

char uncapitalize(char c)
{
    if (isCapital(c))
    {
        return c + (SMALL_A - CAPITAL_A);
    }
    return c;
}

int isCharacter(char c)
{
    return (c >= CAPITAL_A && c <= SMALL_Z);
}