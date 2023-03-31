<br/>
<p align="center">
  <h3 align="center">Creating or own printf function</h3>

  <p align="center">
    The program is a pseudo- recreation of the C standard library function, printf.

  </p>
</p>



## Table Of Contents

* [About the Project](#about-the-project)
* [Built With](#built-with)
* [Getting Started](#getting-started)
* [Prerequisites](#prerequisites)
* [Usage](#usage)
* [Roadmap](#roadmap)
* [License](#license)
* [Authors](#authors)

## About The Project

(https://github.com/Gabr1el20/holbertonschool-printf)

This is a rebuild of the standard printf function in C, which required a function capable of printing with the %i, %d, %c, %s, and %% specifiers to standard output. printf returns the number of characters printed (excluding the null byte at the end of strings). We were not asked to handle flag characters, field width, precision, or length.

## Built With

This section should list any major frameworks that you built your project using. Leave any add-ons/plugins for the acknowledgements section. Here are a few examples.

* [UBUNTU]()
* [GitHub](https://github.com/)
* [VI]()

## Getting Started

We were charged to deal with several format specifiers, with many more on the table as optional advanced tasks.

### Prerequisites

*Allowed editors: vi, vim, emacs
*All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
*All your files should end with a new line A README.md file, at the root of the folder of the project is mandatory
*Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl 
*You are not allowed to use global variables
*No more than 5 functions per file In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account).
*We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
*The prototypes of all your functions should be included in your header file called main.h Don’t forget to push your header file
*All your header files should be include guarded Note that we will not provide the _putchar function for this project.

## Usage

To use the core function _printf, you can call it like the original printf, see man printf for more information.

char c = 'a';

char b = 'd';

_printf("My first string %c, my second string %c"), c, b);

OUTPUT : My first char a, my second char d

## Roadmap

See the [open issues](https://github.com/NicoV00/holbertonschool-printf/issues) for a list of proposed features (and known issues).




## License

This project is licensed under the Holberton School Software Engineering Program.

## Authors

* **Nicolás Valles** - *Holberton student* - [Nicolás Valles](https://github.com/NicoV00/) - *Built our own printf*
* **Gabriel Delgado** - *Holberton student* - [Gabriel Delgado](https://github.com/Gabr1el20/) - *Built our own printf*

