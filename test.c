#include <stdio.h>
#include "ft_printf.h"

int main() {
    // Test case 1: Printing a string
    ft_printf("Hello, world!\n");

    // Test case 2: Printing a character
    char ch = 'A';
    int i = 1234567890;
    ft_printf("The character is %c and int is %d\n", ch, i);

    // Test case 3: Printing a pointer
    int num = 42;
    ft_printf("The pointer to num is %p\n", &num);

    // Test case 4: Printing a decimal number
    ft_printf("The decimal number is %d\n", num);
    int num2 = -42;
    // Test case 5: Printing an integer
    ft_printf("The integer is %i\n", num2);

    // Test case 6: Printing an unsigned decimal number
    unsigned int u_num = 42;
    ft_printf("The unsigned decimal number is %u\n", u_num);

    // Test case 7: Printing a number in hexadecimal (lowercase)
    ft_printf("The hexadecimal number (lowercase) is %x\n", num);

    // Test case 8: Printing a number in hexadecimal (uppercase)
    ft_printf("The hexadecimal number (uppercase) is %X\n", num);

    // Test case 9: Printing a percent sign
    ft_printf("The percent sign is %%\n");

    int     in = -1234567;
    unsigned int    un = 1234567;
    char    *str = "Hello, world!";
    ft_printf("Yo! %s %u %d %% \n", str, un, in);

    return 0;
}