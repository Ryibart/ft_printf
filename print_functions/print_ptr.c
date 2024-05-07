/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtammi <rtammi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 13:13:40 by rtammi            #+#    #+#             */
/*   Updated: 2024/05/06 21:06:18 by rtammi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	print_ptr(void *pointer, const char format)
{
	print_str("0x");
	puthex((unsigned long)pointer, format);
	return (2 + hexlen((unsigned long)pointer));
}
