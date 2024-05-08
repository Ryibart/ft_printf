/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FT_PRINTF.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtammi <rtammi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 16:52:42 by rtammi            #+#    #+#             */
/*   Updated: 2024/05/06 19:11:34 by rtammi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft.h"

int		ft_printf(const char *str, ...);
char	*util_uitoa(unsigned int n);
int		hexlen(unsigned long n);

int		print_char(char c);
int		print_hex(unsigned long nbr, const char format);
int		print_nbr(int long nbr);
int		print_ptr(void *pointer, const char format);
int		print_str(char *str);
int		print_uint(unsigned int nbr);

#endif