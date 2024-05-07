/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtammi <rtammi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 13:13:40 by rtammi            #+#    #+#             */
/*   Updated: 2024/05/07 14:38:22 by rtammi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	print_ptr(void *pointer, const char format)
{
	int	temp;

	print_str("0x");
	temp = print_hex((unsigned long)pointer, format);
	if (temp == -1)
		return(-1);
	return(temp);
}
