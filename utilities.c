/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtammi <rtammi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 14:05:55 by rtammi            #+#    #+#             */
/*   Updated: 2024/05/06 20:53:07 by rtammi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	digit_count(int long long n)
{
	int	count;

	count = 1;
	while (n / 10 != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*util_uitoa(unsigned int n)
{
	int		len;
	char	*str;

	len = digit_count(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	len--;
	while (len >= 0)
	{
		str[len] = (n % 10) + '0';
		n /= 10;
		len--;
	}
	return (str);
}

void	puthex(unsigned long nbr, const char format)
{
	char			*hex;
	int long long	digit;
	int				shift;
	int				zero_check;

	if (format == 'X')
		hex = "0123456789ABCDEF";
	else
		hex = "0123456789abcdef";
	shift = (sizeof(nbr) * 8) - 4;
	zero_check = 1;
	while (shift >= 0)
	{
		digit = (nbr >> shift) & 0xf;
		if (digit != 0 || !zero_check)
		{
			ft_putchar_fd(hex[digit], 1);
			zero_check = 0;
		}
		shift -= 4;
	}
	if (zero_check)
		ft_putchar_fd('0', 1);
}

int	hexlen(unsigned long n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		len++;
		n = n / 16;
	}
	return (len);
}
