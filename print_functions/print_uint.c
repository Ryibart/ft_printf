/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_uint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtammi <rtammi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 14:01:16 by rtammi            #+#    #+#             */
/*   Updated: 2024/05/07 16:32:36 by rtammi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	print_uint(unsigned int nbr)
{
	char	*str;
	int		len;

	if (nbr == 0)
	{
		if (print_str("0") == -1)
			return (-1);
		return (1);
	}
	str = util_uitoa(nbr);
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
