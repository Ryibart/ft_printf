/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtammi <rtammi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 13:49:09 by rtammi            #+#    #+#             */
/*   Updated: 2024/05/06 21:12:38 by rtammi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	print_nbr(int nbr)
{
	char	*str;
	int		len;

	str = ft_itoa(nbr);
	if (!str)
		return (0);
	len = ft_strlen(str);
	print_str(str);
	free(str);
	if (nbr == 0)
		return (1);
	return (len);
}
