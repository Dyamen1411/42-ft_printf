/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_printer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amassias <amassias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 04:15:03 by amassias          #+#    #+#             */
/*   Updated: 2023/10/20 04:18:48 by amassias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

static void	putnstr(const char *str, size_t len)
{
	while (len--)
		ft_putchar_fd(*str++, 1);
}

int	__print_string(t_format *fmt, char *str)
{
	size_t	slen;
	size_t	len;

	slen = ft_strlen(str);
	if (FMT__PRECISION(*fmt))
		slen = min(fmt->precision, slen);
	fmt->width = max(0, fmt->width - slen);
	len = slen + fmt->width;
	if (FMT__LEFT_JUSTIFY(*fmt))
		putnstr(str, slen);
	while (fmt->width-- > 0)
		ft_putchar_fd(' ', 1);
	if (!FMT__LEFT_JUSTIFY(*fmt))
		putnstr(str, slen);
	return (len);
}