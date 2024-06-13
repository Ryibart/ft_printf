/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_tester.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtammi <rtammi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 20:02:19 by rtammi            #+#    #+#             */
/*   Updated: 2024/06/13 14:43:33 by rtammi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*══| test_main |══════════════════════════════════════════════════════════════*
    
    Purpose:    Executes a series of test functions to verify the
                functionality of the `ft_printf` implementation
                by comparing its output and return values to the 
                standard `printf` function.
                
    Functions:
                test_char -- Tests the printing of a single character.
                test_string -- Tests the printing of a string.
                test_pointer -- Tests the printing of a pointer address.
                test_decimal -- Tests the printing of a decimal integer.
                test_integer -- Tests the printing of an integer.
                test_unsigned -- Tests the printing of an unsigned integer.
                test_hex_lowercase -- Tests the printing of a hexadecimal 
                                      number in lowercase.
                test_hex_uppercase -- Tests the printing of a hexadecimal 
                                      number in uppercase.
                test_percent -- Tests the printing of a percent sign.
                test_empty_string -- Tests the printing of an empty string.
                test_null_string -- Tests the printing of a null string.
                test_large_unsigned -- Tests the printing of a
                                       large unsigned integer.
                test_large_hex -- Tests the printing of a
                                  large hexadecimal number.
                test_mixed -- Tests the printing of mixed format specifiers.
                test_no_format_specifiers -- Tests the printing of a string
                                             with no format specifiers.
                test_only_format_specifiers -- Tests the printing of a string
                                                with only format specifiers.
                test_multiple_format_specifiers -- Tests the printing of a
                                        string with multiple format specifiers.
                test_ending_percent -- Tests the printing of a string ending 
                                      with a percent character.
                my_test -- Tests the printing of evaluators edge cases.
                
    Returns:    
                0 -- Indicates successful execution of all tests.
                
*═════════════════════════════════════════════════════════════════════════════*/

#include <stdio.h>
#include "ft_printf.h"

void test_char() {
    int len1, len2;
    printf("Character: \n");
    len1 = ft_printf("ft_printf:     %c\n", 'A');
    len2 = printf("printf:        %c\n", 'A');
    printf("ft_printf len: %d\n", len1);
    printf("printf len:    %d\n\n", len2);
}

void test_string() {
    int len1, len2;
    printf("String: \n");
    len1 = ft_printf("ft_printf:     %s\n", "Hello, World!");
    len2 = printf("printf:        %s\n", "Hello, World!");
    printf("ft_printf len: %d\n", len1);
    printf("printf len:    %d\n\n", len2);
}

void test_pointer() {
    int a = 42;
    int len1, len2;
    printf("Pointer: \n");
    len1 = ft_printf("ft_printf:     %p\n", (void *)&a);
    len2 = printf("printf:        %p\n", (void *)&a);
    printf("ft_printf len: %d\n", len1);
    printf("printf len:    %d\n\n", len2);
}

void test_decimal() {
    int len1, len2;
    printf("Decimal: \n");
    len1 = ft_printf("ft_printf:     %d\n", -123);
    len2 = printf("printf:        %d\n", -123);
    printf("ft_printf len: %d\n", len1);
    printf("printf len:    %d\n\n", len2);
}

void test_integer() {
    int len1, len2;
    printf("Integer: \n");
    len1 = ft_printf("ft_printf:     %i\n", -4560000000);
    len2 = printf("printf:        %i\n", -4560000000);
    printf("ft_printf len: %d\n", len1);
    printf("printf len:    %d\n\n", len2);
}

void test_unsigned() {
    int len1, len2;
    printf("Unsigned: \n");
    len1 = ft_printf("ft_printf:     %u\n", -1234567890);
    len2 = printf("printf:        %u\n", -1234567890);
    printf("ft_printf len: %d\n", len1);
    printf("printf len:    %d\n\n", len2);
}

void test_hex_lowercase() {
    int len1, len2;
    printf("Hex (lowercase): \n");
    len1 = ft_printf("ft_printf:     %x\n", 0xabcdef);
    len2 = printf("printf:        %x\n", 0xabcdef);
    printf("ft_printf len: %d\n", len1);
    printf("printf len:    %d\n\n", len2);
}

void test_hex_uppercase() {
    int len1, len2;
    printf("Hex (uppercase): \n");
    len1 = ft_printf("ft_printf:     %X\n", 0xABCDEF);
    len2 = printf("printf:        %X\n", 0xABCDEF);
    printf("ft_printf len: %d\n", len1);
    printf("printf len:    %d\n\n", len2);
}

void test_percent() {
    int len1, len2;
    printf("Percent: \n");
    len1 = ft_printf("ft_printf:     %%\n");
    len2 = printf("printf:        %%\n");
    printf("ft_printf len: %d\n", len1);
    printf("printf len:    %d\n\n", len2);
}

void test_empty_string() {
    int len1, len2;
    printf("Empty string: \n");
    len1 = ft_printf("ft_printf:     %s\n", "");
    len2 = printf("printf:        %s\n", "");
    printf("ft_printf len: %d\n", len1);
    printf("printf len:    %d\n\n", len2);
}

void test_null_string() {
    int len1, len2;
    printf("Null string: \n");
    len1 = ft_printf("ft_printf:     %s\n", (char *)NULL);
    len2 = printf("printf:        %s\n", (char *)NULL);
    printf("ft_printf len: %d\n", len1);
    printf("printf len:    %d\n\n", len2);
}

void test_large_unsigned() {
    int len1, len2;
    printf("Large unsigned: \n");
    len1 = ft_printf("ft_printf:     %u\n", 4294967295u);
    len2 = printf("printf:        %u\n", 4294967295u);
    printf("ft_printf len: %d\n", len1);
    printf("printf len:    %d\n\n", len2);
}

void test_large_hex() {
    int len1, len2;
    printf("Large hex: \n");
    len1 = ft_printf("ft_printf:     %x\n", 0xFFFFFFFF);
    len2 = printf("printf:        %x\n", 0xFFFFFFFF);
    printf("ft_printf len: %d\n", len1);
    printf("printf len:    %d\n\n", len2);
}

void test_mixed() {
    int a = 42;
    int len1, len2;
    printf("Mix: \n");
    len1 = ft_printf("ft_printf:     %d, %s, %c, %p\n", 123, "test", 'A', (void *)&a);
    len2 = printf("printf:        %d, %s, %c, %p\n", 123, "test", 'A', (void *)&a);
    printf("ft_printf len: %d\n", len1);
    printf("printf len:    %d\n\n", len2);
}

void test_no_format_specifiers() {
    int len1, len2;
    printf("No format specifiers: \n");
    len1 = ft_printf("ft_printf:     Hello, World!\n");
    len2 = printf("printf:        Hello, World!\n");
    printf("ft_printf len: %d\n", len1);
    printf("printf len:    %d\n\n", len2);
}

void test_only_format_specifiers() {
    int a = 42;
    int len1, len2;
    printf("Only format specifiers: \n");
    len1 = ft_printf("ft_printf:     %d %s %c %p\n", 123, "test", 'A', (void *)&a);
    len2 = printf("printf:        %d %s %c %p\n", 123, "test", 'A', (void *)&a);
    printf("ft_printf len: %d\n", len1);
    printf("printf len:    %d\n\n", len2);
}

void test_multiple_format_specifiers() {
    int a = 42;
    int len1, len2;
    printf("Multiple format specifiers: \n");
    len1 = ft_printf("ft_printf:     %d %s %c %p %d %s %c %p\n", 123, "test", 'A', (void *)&a, 456, "test", 'B', (void *)&a);
    len2 = printf("printf:        %d %s %c %p %d %s %c %p\n", 123, "test", 'A', (void *)&a, 456, "test", 'B', (void *)&a);
    printf("ft_printf len: %d\n", len1);
    printf("printf len:    %d\n\n", len2);
}

void test_ending_percent() {
    int len1, len2;
    printf("Ending with one %% character: \n");
    len1 = ft_printf("ft_printf:     Hello World!%");
    printf("\n");
    len2 = printf("printf:        Hello World!%");
    printf("\n");
    printf("ft_printf len: %d\n", len1);
    printf("printf len:    %d\n\n", len2);
}

void my_test() {
    int len1, len2;
    printf("My modifiable test: \n");
    len1 = ft_printf("ft_printf:     %s", 123);
    printf("\n");
    len2 = printf("printf:        %s", 123);
    printf("\n");
    printf("ft_printf len: %d\n", len1);
    printf("printf len:    %d\n\n", len2);
}


int main(void) {
    test_char();
    test_string();
    test_pointer();
    test_decimal();
    test_integer();
    test_unsigned();
    test_hex_lowercase();
    test_hex_uppercase();
    test_percent();
    test_empty_string();
    test_null_string();
    test_large_unsigned();
    test_large_hex();
    test_mixed();
    test_no_format_specifiers();
    test_only_format_specifiers();
    test_multiple_format_specifiers();
    test_ending_percent();
    my_test();

    return (0);
}
