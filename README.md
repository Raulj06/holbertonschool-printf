Written by Raul J. Acosta and Gerardo Bassat as part of our printf Holberton School Project.
## Proyect Requirements
- All files will be compiled on Ubuntu 14.04 LTS
- Programs and functions will be compiled with gcc 4.8.4 using flags -Wall -Werror -Wextra and -pedantic
- Code must follow the Betty style
- Global variables are not allowed
- Authorized functions and macros:

```write``` (man 2 write)

```malloc``` (man 3 malloc)

```free``` (man 3 free)

```va_start``` (man 3 va_start)

```va_end``` (man 3 va_end)

```va_copy``` (man 3 va_copy)

```va_arg``` (man 3 va_arg)

# Files
- main.h:
   - Contains libraries, prototypes and header files.
- printf.c:
  - contains the fucntion _printf wich uses the prototype int _printf(const char *format, ...);
- _putchar.c:
  -  contains the function _putchar, which writes a character to stdout.
- spec_conv.c:
  - contains the functions ```conv_spec```,```valid_conversions```,```function_call```,
- types_conv.c:
  - contains the functions ```print_char```, ```print_string```, ```print_percent```, ```print_digit```,```print_int```,  which handle the conversion specifiers ```c```,```s```,```%```,```d```,```i```.
- man_3_printf:
  - manual page for the custom ```_printf function```.
- main.c
  - this file was used for test
  
