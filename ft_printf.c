/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtammi <rtammi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 18:13:56 by rtammi            #+#    #+#             */
/*   Updated: 2024/05/07 14:04:24 by rtammi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	formats(va_list args, const char format)
{
	int	print_count;

	print_count = 0;
	if (format == 'c')
		print_count += print_char(va_arg(args, int));
	else if (format == 's')
		print_count += print_str(va_arg(args, char *));
	else if (format == 'p')
		print_count += print_ptr(va_arg(args, void *), format);
	else if (format == 'd' || format == 'i')
		print_count += print_nbr(va_arg(args, int));
	else if (format == 'u')
		print_count += print_uint(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		print_count += print_hex(va_arg(args, unsigned int), format);
	else if (format == '%')
	{
		print_count += 1;
		ft_putchar_fd('%', 1);
	}
	return (print_count);
}

static int	error_return(va_list args)
{
	va_end(args);
	return (-1);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		temp;
	int		print_count;

	print_count = 0;
	va_start(args, str);
	while (*str != '\0')
	{
		if (*str == '%')
		{
			str++;
			if (ft_strchr("cspdiuxX%", *str))
				temp = formats(args, *str);
		}
		else
		{
			ft_putchar_fd(*str, 1);
			print_count++;
		}
		if (temp == -1)
			return (error_return(args));
		temp += print_count;
		str++;
	}
	va_end(args);
	return (print_count);
}
