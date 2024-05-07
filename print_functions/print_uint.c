/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_uint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtammi <rtammi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 14:01:16 by rtammi            #+#    #+#             */
/*   Updated: 2024/05/06 21:10:55 by rtammi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	print_uint(unsigned int nbr)
{
	char	*str;
	int		len;

	str = util_uitoa(nbr);
	if (!str)
		return (0);
	len = ft_strlen(str);
	print_str(str);
	free(str);
	if (nbr == 0)
		return (1);
	return (len);
}
