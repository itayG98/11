
# README

## Assignment 1: Letter Manipulation Program

### Overview
The Letter Manipulation Program reads text input from the user (either from the console or a file) and performs several transformations on the text. The transformations include:

- Capitalizing the first letter of each sentence and quoted text.
- Uncapitalizing other letters outside of quotes.
- Removing any digits from the text.
- sentence is start withing dot '.' only.

### Example Usage
To run the program, compile it with the following command:
```bash
gcc -o letter_program letter_program.c char_helper.c
```

Then execute the program:
```bash
./letter_program
```

#### Input Example
```
  I Am young. You are young. all of us are young.
 "I think we  need    some help.  please" HELP. NO,   NO  NO,
 I DO NOT
      NEED HELP
 
  WHATSOEVER.
  "Todays date is
       15/2/2021"...
  I am 18  years old, are you 20 years old? Maybe      30 years?
```

#### Output Example
```
  I am young. You are young. All of us are young.
 "I THINK WE  NEED    SOME HELP.  PLEASE" Help. No,   no  no,
 i do not
      need help
 
  whatsoever.
  "TODAYS DATE IS
       //"...
  I am   years old, are you  years old? maybe       years?
```

---

## Assignment 2: Bit Manipulation Program

### Overview
The Bit Manipulation Program takes two unsigned long integers as input and performs bitwise operations to manipulate and display the values. It specifically:

- Prints the binary representation of the first number.
- Turns on the 6th bit of the first number and displays the result.
- Checks if the 12th bit of the second number is set and prints "YES" or "NO".

### Example Usage
To run the program, compile it with the following command:
```bash
gcc -o bit_program bit_program.c
```

Then execute the program:
```bash
./bit_program
```

#### Input Example
```
5 128
```

#### Output Example
```
x = 00000000000000000000000000000101
Turned on the 12 (counted from zero) bit.
x = 00000000000000000001000000000101
y = 00000000000000000000000010000000
Check if the 6 (counted from zero) bit is on.
NO

```

### Functions Overview
- `print_binary_with_mask(unsigned long toPrint)`: Prints the binary representation of an unsigned integer.
- `print_is_bit_on(unsigned long num, int index)`: Prints "YES" if the specified bit is set, otherwise prints "NO".
- `get_bit_value_by_index(unsigned long num, int index)`: Returns the value of the specified bit.
- `generate_mask_by_shift(int index)`: Generates a bitmask by shifting 1 to the specified index.

---

### Compilation Instructions
Make sure to have a C compiler installed (e.g., GCC). Use the following command to compile both programs:

```bash
gcc -o letter_program letter_program.c char_helper.c
gcc -o bit_program bit_program.c
```

---

### Notes
- Ensure that the helper functions defined in `char_helper.c` and `bit_helper.c` are correctly included in your project.
- Modify the program files as needed for your specific requirements.
