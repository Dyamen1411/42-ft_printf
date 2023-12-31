/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex_prefix.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amassias <amassias@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 04:35:32 by amassias          #+#    #+#             */
/*   Updated: 2023/10/20 04:36:03 by amassias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int	fmt__hex_prefix(t_format *fmt)
{
	return ((fmt->flags & FMT_FLAG__HEX_PREFIX) != 0);
}
