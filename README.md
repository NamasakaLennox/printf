# 0x11. C - printf
## printf()
The printf project is a collaboration between Lennox Namasaka and Fredrick Kyeki, students of the ALX Software Engineering program.The project is named "_printf", and imitates the actual "printf" command located in the stdio.h library in the c - programming language. It contains some of the basic features and functions found in the manual 3 of "printf".

**_printf()** is a function that performs formatted output conversion and print data. This is it's prototype:

	int _printf(const char *format, ...)

Where **format** contains the string that is printed. As _printf() is variadic function, it can receives n arguments that replace by n tags written inside the string.

The format tags prototype is the following:

	%[flags][length]specifier
	
If the program runs successfully, the **return value** is the amount of chars printed.
| Specifier | Output |
| ------------- | ------------- |
| c  | Character  |
| d or i | Signed decimal integer |
| s  | String of characters  |
| b  | Signed binary  |
| o  | Signed octal  |
| u  | Unsigned integer  |
| x  | Unsigned hexadecimal  |
| X  | Unsigned hexadecimal (uppercase)  |
| p  | Pointer address  |
| r  | Reverse string of characters |
| R  | ROT13 translation of string |
| S  | String with special chars replaced by their ASCII value  |
| %  | Character  |