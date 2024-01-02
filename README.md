#Printf 
#bout the project

this project using C programming language implementing the functionality of printf function.
in this project I've used the va_list to handle the unkonwn number of argimunts that could the user pass to the function.
the va_start function : initialize the va_list.
the va_arg function : get the element from va_list every time I call va_list it return the next element.
the va_end function : cleanup the va_list values.

#The flags impelemented in the function 

• %c Prints a single character.

• %s Prints a string (as defined by the common C convention).

• %p The void * pointer argument has to be printed in hexadecimal format.

• %d Prints a decimal (base 10) number.

• %i Prints an integer in base 10.

• %u Prints an unsigned decimal (base 10) number.

• %x Prints a number in hexadecimal (base 16) lowercase format.

• %X Prints a number in hexadecimal (base 16) uppercase format.

• %% Prints a percent sign.
