/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_uint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtammi <rtammi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 14:01:16 by rtammi            #+#    #+#             */
/*   Updated: 2024/05/07 14:42:46 by rtammi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include <limits.h>

int	print_uint(unsigned int nbr)
{
	char	*str;
	int		len;

	str = util_uitoa(nbr);
	if (!str)
		return (0);
	len = ft_strlen(str);
	if (print_str(str) == -1)
		return(-1);
	free(str);
	if (nbr == 0)
		return (1);
	return (len);
}
