<br/>
<p align="center">
  <h3 align="center">Creating or own printf function</h3>

  <p align="center">
    The program is a pseudo- recreation of the C standard library function, printf.

  </p>
</p>


## About The Project

> This is a replica of the standard printf function in C, which is a function capable of printing with specifiers `%i`, `%d`, `%c`, `%s`, and `%%` to standard output. printf returns the number of characters printed (excluding the null byte at the end of strings). We were not asked to handle flag characters, field width, precision, or length.

### Prerequisites
```
- Allowed editors: `vi, vim, emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line.
- A `README.md` file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl 
- You are not allowed to use global variables
- No more than 5 functions per file In the following examples, the `main.c` files are shown as examples.
You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account).
- We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
- The prototypes of all your functions should be included in your header file called `main.h` Don’t forget to push your header file
- All your header files should be include guarded.
- Note that we will not provide the `_putchar` function for this project.
```

## Built With
> This project was created using C language.

* [UBUNTU]()
* [GitHub](https://github.com/)
* [C]()

## Content of the repository

We were charged to deal with several format specifiers, with many more on the table as optional advanced tasks.

The main files of this repository are the next ones:
- `main.h`: Header file 
- `_printf.c`: Contains the `_printf` function
- `call_f.c`: This file contains the function in charge of compare the symbols and return their associated function.
- `functions.c`: This one contains the definition of the conversion specifier functions.
- `_putchar.c`: Contains a replication of the `putchar` function. 
# Usage

### Prototype

> The prototype of the function is `int _printf(const char *format, ...)`
 
To use the core function _printf, you can call it like the original printf, see man printf for more information.

```
#include "main.h"

void main(void)
{
char c = 'a';
char b = 'd';
char *str = "Holberton"

  _printf("My first char is %c, and my second char is %b\n"), c, b);
  _printf("The string is: %s\n", str);
  }
```
OUTPUT:
```
- My first char a, my second char d
- The string is: Holberton.
```

## Convertion specifiers:
> if `format` finds a percentage (%), it will check the following character to know what to do:

* __s__: The `char *` argument will be printed, excluding the `'\0'` byte.
* __c__: The `char` argument will be printed as a character.
* __%__: It will print a percentage (usage: `'%%'`).
* __d__: The `int` argument will be printed as an integer.
* __i__: The same as `'d'` example.


## Flowchart

![Flowchart of the _printf function](https://raw.githubusercontent.com/Gabr1el20/holbertonschool-printf/master/printfv2.png)




## License

This project is licensed under the Holberton School Software Engineering Program.

## Authors

* **Nicolás Valles** - *Holberton student* - [Nicolás Valles](https://github.com/NicoV00/) - *Built our own printf*
* **Gabriel Delgado** - *Holberton student* - [Gabriel Delgado](https://github.com/Gabr1el20/) - *Built our own printf*
