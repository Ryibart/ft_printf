/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtammi <rtammi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 13:13:40 by rtammi            #+#    #+#             */
/*   Updated: 2024/05/07 16:44:53 by rtammi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	print_ptr(void *pointer, const char format)
{
	int	temp;

	if (!pointer)
	{
		if (print_str("0x0") == -1)
			return (-1);
		return (3);
	}
	if (print_str("0x") == -1)
		return (-1);
	temp = print_hex((unsigned long)pointer, format);
	if (temp == -1)
		return (-1);
	return (temp + 2);
}
