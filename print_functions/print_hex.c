/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtammi <rtammi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 14:04:24 by rtammi            #+#    #+#             */
/*   Updated: 2024/05/07 14:41:29 by rtammi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	print_hex(unsigned int nbr, const char format)
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
			if (print_char(hex[digit]) == -1)
				return(-1);
			zero_check = 0;
		}
		shift -= 4;
	}
	if (zero_check)
		if (print_char('0') == -1)
			return(-1);
	return(hexlen(nbr));
}
