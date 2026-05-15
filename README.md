Fan Control System
Options:

    Normal Mode
    Medium Mode
    Fast Mode
    Very Fast Mode
    Turn Off Fan

Application Steps:
1. Variables:

    Two int variables were created: Fan_speed and Result, both initialized to 0.

2. Input:

    Used cin to receive the user's input value.

3. Output:

    Used cout to display the menu options to the user.

4. Input Validation & Protection:

    Used while(cin.fail()) to verify that the input is a number and not a character.
    The Issue: If the user enters a character, it gets stuck in the memory buffer, causing an infinite loop. (I always try to remember this concept because I tend to forget it or feel I haven't fully grasped it yet).
    The Solution: Used cin.clear() to reset the error state, and cin.ignore() to remove the stuck character from the memory buffer.

5. Conditions (Negative Value Check):

    Used while(Fan_speed < 0) to prevent negative numbers.

    Observation & Debugging:
    While testing the code, I noticed a strange bug initially: entering a negative number correctly printed an error and asked for input again. However, when I entered a character at that stage, it triggered an infinite loop!
    At first, I didn't know the cause. But after experimentation, I hypothesized that the character was stuck in the memory buffer. Therefore, I applied cin.clear() and cin.ignore() to reset cin and allow it to accept new valid input.

6. Option Processing:

    Used a switch statement to check the entered number.
    Each case calls a function that returns a specific value.
    Note: Initially, I used void functions, but I decided to switch to functions that return a value specifically to practice and master this concept.
    The final number and message are printed inside the main function.
