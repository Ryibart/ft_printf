/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtammi <rtammi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 13:49:09 by rtammi            #+#    #+#             */
/*   Updated: 2024/05/20 13:20:00 by rtammi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include <limits.h>

int	print_nbr(int long nbr)
{
	char	*str;
	int		len;

	if (nbr > INT_MAX || nbr < INT_MIN)
		return (-1);
	str = ft_itoa(nbr);
	if (!str)
	{
		free(str);
		return (-1);
	}
	len = ft_strlen(str);
	if (print_str(str) == -1)
	{
		free(str);
		return (-1);
	}
	free(str);
	return (len);
}
