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

<details>
<summary>
	<strong><a href="./0-positive_or_negative.c">0.Positive anything is better than negative nothing:</a></strong>
	C program that prints whether a randomly generated number is positive or negative, followed by a new line.
</summary>
<br/>

- Completion of <a href="https://github.com/holbertonschool/0x01.c/blob/master/0-positive_or_negative_c">this source code</a>.</li>
- Stores a different random number every time the program is run.</li>
- Prints the number followed by `is positive` if the number is greater than 0,
  `is zero` if the number is zero, or `is negative` if the number is less than 0.

**Test Cases:**
```sh
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

<details>
<summary>
	<strong><a href="./1-last_digit.c">1.The last digit:</a></strong>
	C program that prints the last digit of a randomly generated number, followed by a new line
</summary>
<br>
	
- Completion of [this source code](https://github.com/holbertonschool/0x01.c/blob/master/1-last_digit_c).
- Stores a different value every time the program is run.
- Prints the string `Last digit of` [number] `is` [last_digit] `and is` followed by `greater than 5` if the digit is greater than 5, `0` if the digit is 0, or `less than 6 and not 0` if the digit is less than 6 and not 0.

**Test Cases**
```sh
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-last_digit.c -o 1-last_digit
$ ./1-last_digit
Last digit of 629438752 is 2 and is less than 6 and not 0
$ ./1-last_digit
Last digit of -748255693 is -3 and is less than 6 and not 0
```
</details>

<details>
<summary>
	<strong><a href="./2-print_alphabet.c">2. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game:</a></strong>
	C program that prints the alphabet in lowercase, followed by a new line, using only the <code>putchar</code> function exactly twice.
</summary>
<br>

**Test Cases**
```sh
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-print_alphabet.c -o 2-print_alphabet
$ ./2-print_alphabet
abcdefghijklmnopqrstuvwxyz
```
</details>

<details>
<summary>
	<strong><a href="./3-print_alphabets.c">3. When I was having that alphabet soup, I never thought that it would pay off:</a></strong>
	C program that prints the alphabet in lowercase, then in uppercase, followed by a new line, using only the <code>putchar</code> function exactly three times.
</summary>
<br>

**Test Cases**
```sh
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-print_alphabets.c -o 3-print_alphabets
$ ./3-print_alphabets | cat -e
abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ$
```
</details>

<details>
<summary>
	<strong><a href="./4-print_alphabt.c">4. alphABET:</a></strong>
	C program that prints the alphabet in lowercase except for the letters <code>q</code> and <code>e</code>, followed by a new line, using only the <code>putchar</code> function exactly twice.
</summary>
<br>

**Test Cases**
```sh
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-print_alphabt.c -o 4-print_alphabt
$ ./4-print_alphabt
abcdfghijklmnoprstuvwxyz
$ ./4-print_alphabt | grep [eq]
```
</details>

5. <strong>Numbers</strong>:
	<details>
	<summary><strong><a href="./5-print_numbers.c">5-print_numbers.c</a></strong> - C program that prints all single-digit numbers of base 10 starting from 0, followed by a new line.</summary>
	<br>
	<strong>Test Cases:</strong>
	<pre>
	$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-print_numbers.c -o 5-print_numbers
	$ ./5-print_numbers
	0123456789
	</pre>
	</details>

6. <strong>Numberz</strong>:
	<details>
	<summary><strong><a href="./6-print_numberz.c">6-print_numberz.c</a></strong> - C program that prints all single-digit numbers of base 10 starting from 0, followed by a new line, using only the <code>putchar</code> function exactly twice without any variables of type char.</summary>
	<br>
	<strong>Test Cases:</strong>
	<pre>
	$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 6-print_numberz.c -o 6-print_numberz
	$ ./6-print_numberz
	0123456789
	</pre>
	</details>

7. <h3><strong>Smile in the mirror</strong>:</h3>
	<details>
	<summary><strong><a href="./7-print_tebahpla.c">7-print_tebahpla.c</a></strong> - C program that prints the lowercase alphabet in reverse, followed by a new line, using only the <code>putchar</code> function exactly twice.</summary>
	<br>
	<strong>Test Cases:</strong>
	<pre>
	$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 7-print_tebahpla.c -o 7-print_tebahpla
	$ ./7-print_tebahpla
	zyxwvutsrqponmlkjihgfedcba
	</pre>
	</details>

8. <strong>Hexadecimal</strong>:
	<details>
	<summary><strong><a href="./8-print_base16.c">8-print_base16.c</a></strong> - C program that prints all the numbers of base 16 in lowercase, followed by a new line, using only the <code>putchar</code> function exactly three times.</summary>
	<br>
	<strong>Test Cases:</strong>
	<pre>
	$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-print_base16.c -o 8-print_base16
	$ ./8-print_base16
	0123456789abcdef
	</pre>
</details>

9. <strong>Patience, persistence and perspiration make an unbeatable combination for success</strong>:
	<details>
	<summary><strong><a href="./9-print_comb.c">9-print_comb.c</a></strong> - C program that prints all possible combinations of single-digit numbers, using only the <code>putchar</code> function exactly four times without any variables of type char:<br>Numbers are separated by <code>,</code>, followed by a space.<br>Numbers are printed in ascending order.</summary>
	<br>
	<strong>Test Cases:</strong>
	<pre>
	$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-print_comb.c -o 9-print_comb
	$ ./9-print_comb | cat -e
	0, 1, 2, 3, 4, 5, 6, 7, 8, 9$
	</pre>
	</details>

10. <strong>100-print_comb3.c</strong>:
	<details>
	<summary><strong><a href="./100-print_comb3.c">100-print_comb3.c</a></strong> - C program that prints all possible combinations of two digits, avoiding repetition and certain patterns.</summary>
	<br>
	<strong>Test Cases:</strong>
	<pre>
	$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-print_comb3.c -o 100-print_comb3
	$ ./100-print_comb3
	01, 02, 03, 04, 05, 06, 07, 08, 09, 12, 13, 14, 15, 16, 17, 18, 19, 23, 24, 25, 26, 27, 28, 29, 34, 35, 36, 37, 38, 39, 45, 46, 47, 48, 49, 56, 57, 58, 59, 67, 68, 69, 78, 79, 89
	</pre>
	</details>

11. <strong>101-print_comb4.c</strong>:
	<details>
	<summary><strong><a href="./101-print_comb4.c">101-print_comb4.c</a></strong> - C program that prints all possible combinations of three digits, avoiding repetition and certain patterns.</summary>
	<br>
	<strong>Test Cases:</strong>
	<pre>
	$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 101-print_comb4.c -o 101-print_comb4
	$ ./101-print_comb4
	012, 013, 014, 015, 016, 017, 018, 019, 023, 024, 025, 026, 027, 028, 029, 034, 035, 036, 037, 038, 039, 045, 046, 047, 048, 049, 056, 057, 058, 059, 067, 068, 069, 078, 079, 089, 123, 124, 125, 126, 127, 128, 129, 134, 135, 136, 137, 138, 139, 145, 146, 147, 148, 149, 156, 157, 158, 159, 167, 168, 169, 178, 179, 189, 234, 235, 236, 237, 238, 239, 245, 246, 247, 248, 249, 256, 257, 258, 259, 267, 268, 269, 278, 279, 289, 345, 346, 347, 348, 349, 356, 357, 358, 359, 367, 368, 369, 378, 379, 389, 456, 457, 458, 459, 467, 468, 469, 478, 479, 489, 567, 568, 569, 578, 579, 589, 678, 679, 689, 789
	</pre>
	</details>

12. <strong>102-print_comb5.c</strong>:
	<details>
	<summary><strong><a href="./102-print_comb5.c">102-print_comb5.c</a></strong> - C program that prints all possible combinations of two two-digit numbers.</summary>
	<br>
	<strong>Test Cases:</strong>
	<pre>
	$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 102-print_comb5.c -o 102-print_comb5
	$ ./102-print_comb5
	00 01, 00 02, 00 03, ..., 98 99
	</pre>
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
