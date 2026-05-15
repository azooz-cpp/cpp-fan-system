# cpp-fan-system:

Smart Fan Control System

Options:
1- Normal Mode
2- Medium Mode
3- Fast Mode
4- Very Fast Mode
0- Fan Off

Implementation Steps:

1- Variables:

- Two variables of type int:(Fan_speed, Result) were created and initialized with a value of 0.

2- Input:

- Use cin to receive the input value.

3- Output:

- Use cout to display the options message to the user.

4- Input Type Verification or Input Protection:

- Use while(cin.fail()) to verify that the input is a number and not a character.

If the user enters a character, it gets stuck in memory and causes an infinite loop (I always try to remember this because I often forget it or don't feel I understand it well).

Solution: Use `cin.clear()` to fix the error, and `cin.ignore()` to clear the stuck character from memory.

5- Conditions:

Checking for Negative Values:

Use `while(Fan_speed < 0)` to block negative numbers.

When I was testing the code, I noticed a strange error at the beginning. When I entered a negative value, it printed an error and asked me to enter a value again. However, when I entered a character, it caused an infinite loop!

I didn't know the reason at first, but I tried and thought it might be because the character was stuck in memory. So I tried using `cin.clear` and `cin.ignore` to prepare `cin` to receive a new value.

6- Handling Options:

Use `switch` to check the entered number.

Each case calls a function that returns a specific value. Initially, I used a void function, but I decided to use a function that returns a specific value for practice.

- The final number and message are printed inside the main box.
