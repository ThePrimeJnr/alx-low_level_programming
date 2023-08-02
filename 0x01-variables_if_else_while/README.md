# 0x01. C - Variables, if, else, while 🔁

![While-do-whie meme](https://github.com/DestinedCodes/alx-low_level_programming/assets/84413505/292552ec-22f3-48c7-8ef1-df3c85cbbd7c)

## Welcome to the 0x01. C - Variables, if, else, while directory! 🌟

This project delves deeper into the world of C programming, covering essential topics such as variables, conditional statements, and loops. The objective is for the learner to have a solid foundation to build more complex programs and logic.

## Learning Objectives 🧠

By the end of this project, I have developed the ability to explain the following concepts without external assistance:

- Applying arithmetic operators effectively in C.
- Utilizing logical and relational operators to make informed decisions.
- Grasping and utilizing the concepts of if and if...else statements for effective branching.
- Declaring and assigning values to variables of different data types.
- Displaying variable values using the `printf` function.
- Implementing the while loop for iterative processes and efficient control flow.
- Working with ASCII characters and understanding their role.
- Recognizing the significance of compiler flags like `-m32` and `-m64`.


## Project Overview 📚

This directory contains a collection of files, each serving a unique purpose:

1. **0-positive_or_negative.c**:
   <details>
   <summary>This program assigns a random number to the variable `n` and displays whether it is positive, negative, or zero.</summary>

   **Test Cases:**
   ```
   $ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-positive_or_negative.c -o 0-positive_or_negative
   $ ./0-positive_or_negative
   -520693284 is negative
   $ ./0-positive_or_negative
   -973398895 is negative
   $ ./0-positive_or_negative
   -199220452 is negative
   $ ./0-positive_or_negative
   561319348 is positive
   $ ./0-positive_or_negative
   561319348 is positive
   $ ./0-positive_or_negative
   266853958 is positive
   $ ./0-positive_or_negative
   -48147767 is negative
   $ ./0-positive_or_negative
   0 is zero
   ```
   </details>

2. **1-last_digit.c**:
   <details>
   <summary>This program assigns a random number to the variable `n` and prints the last digit of the number, along with its characteristics.</summary>

   **Test Cases:**
   ```
   $ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-last_digit.c -o 1-last_digit
   $ ./1-last_digit
   Last digit of 629438752 is 2 and is less than 6 and not 0
   $ ./1-last_digit
   Last digit of -748255693 is -3 and is less than 6 and not 0
   ...
   ```
   </details>

3. **2-print_alphabet.c**:
   <details>
   <summary>A program that prints the lowercase alphabet.</summary>

   **Test Cases:**
   ```
   $ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-print_alphabet.c -o 2-print_alphabet
   $ ./2-print_alphabet
   abcdefghijklmnopqrstuvwxyz
   ```
   </details>

4. **3-print_alphabets.c**:
   <details>
   <summary>A program that prints both the lowercase and uppercase alphabets.</summary>

   **Test Cases:**
   ```
   $ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-print_alphabets.c -o 3-print_alphabets
   $ ./3-print_alphabets | cat -e
   abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ$
   ```
   </details>

5. **4-print_alphabt.c**:
   <details>
   <summary>A program that prints the lowercase alphabet while excluding the letters 'q' and 'e'.</summary>

   **Test Cases:**
   ```
   $ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-print_alphabt.c -o 4-print_alphabt
   $ ./4-print_alphabt
   abcdfghijklmnoprstuvwxyz
   $ ./4-print_alphabt | grep [eq]
   $
   ```
   </details>

6. **5-print_numbers.c**:
   <details>
   <summary>A program that prints single-digit numbers from 0 to 9.</summary>

   **Test Cases:**
   ```
   $ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-print_numbers.c -o 5-print_numbers
   $ ./5-print_numbers
   0123456789
   ```
   </details>

7. **6-print_numberz.c**:
   <details>
   <summary>A program that prints single-digit numbers from 0 to 9, using the `putchar` function only.</summary>

   **Test Cases:**
   ```
   $ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 6-print_numberz.c -o 6-print_numberz
   $ ./6-print_numberz
   0123456789
   ```
   </details>

8. **7-print_tebahpla.c**:
   <details>
   <summary>A program that prints the lowercase alphabet in reverse.</summary>

   **Test Cases:**
   ```
   $ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 7-print_tebahpla.c -o 7-print_tebahpla
   $ ./7-print_tebahpla
   zyxwvutsrqponmlkjihgfedcba
   ```
   </details>

9. **8-print_base16.c**:
   <details>
   <summary>A program that prints all numbers of base 16 (hexadecimal) in lowercase.</summary>

   **Test Cases:**
   ```
   $ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-print_base16.c -o 8-print_base16
   $ ./8-print_base16
   0123456789abcdef
   ```
   </details>

10. **9-print_comb.c**:
    <details>
    <summary>A program that prints all possible single-digit combinations, separated by commas.</summary>

    **Test Cases:**
    ```
    $ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-print_comb.c -o 9-print_comb
    $ ./9-print_comb | cat -e
    0, 1, 2, 3, 4, 5, 6, 7, 8, 9$
    ```
    </details>

11. **100-print_comb3.c**:
    <details>
    <summary>A program that prints all possible combinations of two digits, avoiding repetition and certain patterns.</summary>

    **Test Cases:**
    ```
    $ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-print_comb3.c -o 100-print_comb3
    $ ./100-print_comb3
    01, 02, 03, 04, 05, 06, 07, 08, 09, 12, 13, 14, 15, 16, 17, 18, 19, 23, 24, 25, 26, 27, 28, 29, 34, 35, 36, 37, 38, 39, 45, 46, 47, 48, 49, 56, 57, 58, 59, 67, 68, 69, 78, 79, 89
    ```
    </details>

12. **101-print_comb4.c**:
    <details>
    <summary>A program that prints all possible combinations of three digits, avoiding repetition and certain patterns.</summary>

    **Test Cases:**
    ```
    $ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 101-print_comb4.c -o 101-print_comb4
    $ ./101-print_comb4
    012, 013, 014, 015, 016, 017, 018, 019, 023, 024, 025, 026, 027, 028, 029, 034, 035, 036, 037, 038, 039, 045, 046, 047, 048, 049, 056, 057, 058, 059, 067, 068, 069, 078, 079, 089, 123, 124, 125, 126, 127, 128, 129, 134, 135, 136, 137, 138, 139, 145, 146, 147, 148, 149, 156, 157, 158, 159, 167, 168, 169, 178, 179, 189, 234, 235, 236, 237, 238, 239, 245, 246, 247, 248, 249, 256, 257, 258, 259, 267, 268, 269, 278, 279, 289, 345, 346, 347, 348, 349, 356, 357, 358, 359, 367, 368, 369, 378, 379, 389, 456, 457, 458, 459, 467, 468, 469, 478, 479, 489, 567, 568, 569, 578, 579, 589, 678, 679, 689, 789
    ```
    </details>

13. **102-print_comb5.c**:
    <details>
    <summary>A program that prints all possible combinations of two two-digit numbers.</summary>

    **Test Cases:**
    ```
    $ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 102-print_comb5.c -o 102-print_comb5
    $ ./102-print_comb5
    00 01, 00 02, 00 03, ..., 98 99
    ```
    </details>

## Compilation and Execution 🛠️🔧

To compile and run the C programs in this directory, follow these steps:

1. Ensure you have a C compiler (such as gcc) installed on your computer.

2. Open your terminal and navigate to the [0x01-variables_if_else_while](./) directory.

3. Choose the file you want to compile:

   - Use the following command to compile a C file (replace `<filename.c>` with the name of the C file you want to compile):
     ```
     gcc <filename.c> -o <output_file>
     ```

   - Use the following command to run the compiled program (replace `<output_file>` with the name of the compiled output file):
     ```
     ./<output_file>
     ```

4. After successful compilation and execution, you will see the output of the program.

## Copyright - Plagiarism ©

Remember, success comes from genuine effort. You must avoid plagiarism and adhere to the academic integrity standards. Plagiarism is strictly forbidden and will lead to severe consequences, including removal from the program.

## About the Author 👨‍💻🖊

👤 [**Destiny Saturday (DestinedCodes)**](https://github.com/DestinedCodes/)**

📧 **Email:** yiradesat@gmail.com

## Additional Resources 📖

For more in-depth insights and comprehensive details about C variables, conditions, and loops, I've prepared a compelling blog post that explores these fundamental concepts. In the blog post, you'll uncover practical examples, tips, and real-world applications of these programming essentials. Whether you're a beginner seeking a deeper understanding or an experienced programmer looking for valuable insights, this blog post has something for you.

Explore the [C Programming 101 Blog Post](https://blog.destinedcodes.me/c-programming-101) now and unlock the keys to mastering these crucial concepts in C programming!

---

**Note:** *This project advances your understanding of C programming by exploring variables, conditional statements, and loops. Remember, practice is key to mastering programming concepts. Enjoy your learning journey! 🚀*
