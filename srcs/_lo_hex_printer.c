/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _lo_hex_printer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amassias <amassias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 06:55:10 by amassias          #+#    #+#             */
/*   Updated: 2023/10/19 07:34:22 by amassias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include "libft.h"

int	_lo_hex_printer(va_list *args, t_format *fmt)
{
	unsigned int	x;

	x = va_arg(*args, unsigned int);
	fmt->flags &= ~(FMT_FLAG__ALIGN_SIGN | FMT_FLAG__FORCE_SIGN);
	return (__hex_printer(fmt, (size_t) x, 0));
}
