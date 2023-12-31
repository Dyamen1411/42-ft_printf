/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   force_sign.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amassias <amassias@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 04:37:12 by amassias          #+#    #+#             */
/*   Updated: 2023/10/20 04:39:28 by amassias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int	fmt__force_sign(t_format *fmt)
{
	return ((fmt->flags & FMT_FLAG__FORCE_SIGN) != 0);
}
