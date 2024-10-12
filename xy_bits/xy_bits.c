#include <stdio.h>
#define SEVEN_DIGIT 7
#define THIRTEEN_DIGIT 13
#define BOOL_MSG_TRUE "YES"
#define BOOL_MSG_FALSE "NO"

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
    int i;
    unsigned long x;
    printf("Please insert two unsigned numbers.\n");
    scanf("%lu", &x);
    /*scanf("%lu", &y); */
    printf("x = %d\n", x);
    print_binary_with_mask(x);
    for (i = 0; i < 32; i++)
    {
        printf("bit %2d is = %2d\n", i, get_bit_value_by_index(x, i));
    }
    /* printf("y = %d\n", print_binary_with_mask(y));
     printf("%s", BOOL_MSG_TRUE);*/
    scanf("%lu");
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
 * This function takes an unsigned long integer and prints an index's bit
 * @param num The unsigned long integer.
 * @param index The index to look for
 * Example usage:
 * @code
 *    print_binary_with_mask(5,0);  returns 1
 * @endcode
 */
int get_bit_value_by_index(unsigned long num, int index)
{
    int bits_number = sizeof(num) * 8, i = 0;
    if (index < 0 || index > bits_number)
    {
        return -1;
    }
    return (num & generate_mask_by_shift(index)) ? 1 : 0;
}
