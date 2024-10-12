#include <stdio.h>
#define SIX_DIGIT 6
#define TWELVE_DIGIT 12
#define BOOL_MSG_TRUE "YES"
#define BOOL_MSG_FALSE "NO"

int print_binary_with_mask(unsigned long toPrint);

void print_is_bit_on(unsigned long num, int index);

int get_bit_value_by_index(unsigned long num, int index);

unsigned long generate_mask_by_shift(int index);

/**
 * @brief Entry point for the program
 * This function prompts the user for two unsigned long numbers x anf y.
 * The x 13 bits shall become 1 and print it manipulation
 * and than it shall print wether Y seventh bit is on , TRUE if not else FALSE
 * *
 * Example usage:
 * @code
 *     Input: 5 (for x), 128 (for y)
 *     Output: "Manipulated x: 8193"
 *             "The 7th bit of y is: TRUE"
 * @endcode
 */
int main()
{
    unsigned long x, y;
    printf("Please insert two unsigned numbers.\n");
    scanf("%lu %lu", &x, &y);
    printf("x = ");
    print_binary_with_mask(x);
    x += generate_mask_by_shift(SIX_DIGIT);
    printf("Turned on the %d (counted from zero) bit.\n", SIX_DIGIT);
    printf("x = ");
    print_binary_with_mask(x);
    printf("y = ", y);
    print_binary_with_mask(y);
    printf("Check if the %d (counted from zero) bit is on.\n", TWELVE_DIGIT);
    print_is_bit_on(y, TWELVE_DIGIT);
    scanf("%lu", x);
    return 1;
}

/**
 * @brief Prints the binary representation of an unsigned integer, bit by bit via stdout.
 *
 * This function takes an unsigned long integer and prints its binary representation
 * directly, bit by bit. It uses a mask starting at the most significant bit (MSB)
 * and shifts the mask right on each iteration to check each bit. For each bit,
 * it prints either '1' or '0' depending on whether the bit is set.
 *
 * @param toPrint The unsigned long integer whose binary representation will be printed.
 *
 * Example usage:
 * @code
 *    print_binary_with_mask(5); // prints "00000000000000000000000000000101"
 * @endcode
 */
int print_binary_with_mask(unsigned long toPrint)
{
    int bits_number = sizeof(toPrint) * 8;
    int i = 0;
    unsigned int mask = 1 << (bits_number - 1);
    while (i < bits_number)
    {
        printf("%c", (mask & toPrint) ? '1' : '0');
        mask >>= 1;
        i++;
    }
    printf("\n");
    return 1;
}

/**
 * @brief Generate a bitmask by shifting a bit to the specified index.
 * @param index The index to which the bit will be shifted.
 * @return The generated bitmask (1 shifted to the specified index).
 */
unsigned long generate_mask_by_shift(int index)
{
    if (index < 0 || index >= sizeof(unsigned long) * 8)
    {
        return 0;
    }
    return 1UL << index;
}

/**
 * @brief Identify a bit value by position.
 * This function takes an unsigned long integer returns the index's bit
 * @param num The unsigned long integer.
 * @param index The index to look for
 * Example usage:
 * @code
 *    print_binary_with_mask(5,0);  returns 1
 * @endcode
 */
int get_bit_value_by_index(unsigned long num, int index)
{
    int bits_number = sizeof(num) * 8;
    if (index < 0 || index > bits_number)
    {
        return -1;
    }
    return (num & generate_mask_by_shift(index)) ? 1 : 0;
}

/**
 * @brief Prints "YES" if the bit at the specified index of the given number is 1,
 *        or "NO" if it is 0.
 * This function uses the index parameter to check the corresponding bit value
 * in the unsigned long integer 'num'. The result is printed as a string.
 * @param num The unsigned long integer to check it's bit.
 * @param index The index of the bit to check (0 based counting)
 * Example usage:
 * @code
 *    print_is_bit_on(5,0);  returns YES
 * @endcode
 */
void print_is_bit_on(unsigned long num, int index)
{
    printf("%s", get_bit_value_by_index(num, index) ? BOOL_MSG_TRUE : BOOL_MSG_FALSE);
}
