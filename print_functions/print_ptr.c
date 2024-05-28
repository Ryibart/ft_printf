/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtammi <rtammi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 13:13:40 by rtammi            #+#    #+#             */
/*   Updated: 2024/05/28 15:53:38 by rtammi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	print_ptr(void *pointer, const char format)
{
	if (!pointer)
		return (write(1, "0x0", 3));
	if (write(1, "0x", 2) == -1)
		return (-1);
	return (print_hex((unsigned long)pointer, format) + 2);
}
