# ft_printf
The 1st project of the algorithms branch at 42 Silicon Valley

### --Project Description--

The goal of ft_printf is to recreate the full formatted string functionality of printf. Specifically, my ft_printf:

    • Manages conversions sSpdDioOuUxXcCn and %% (including multibyte characters)
    • Manages flags #0-+*' and space
    • Manages minimum field-width
    • Manages precision
    • Manages flags hh, h, l, ll, j, & z
    • Reproduces undefined behavior of printf
    • Manages an additional %b conversion to print binary

Functions allowed: ```write, malloc, free, exit, & the functions of man 3 stdarg```.

The project is written in C and in accordance with "The Norm".

#### --The Norm--

    • Functions must not exceed 25 lines
    • No more than 5 function-definitions in a .c file
    • One instruction per line
    • One single variable declaration per line; cannot stick declaration and initialisation on the same line
    • No more than 5 variables per bloc
    • No more than 4 parameters per function
    • Forbidden keywords are: [for] [do ... while] [switch] [case] [goto]
