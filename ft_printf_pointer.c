/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_pointer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djagusch <djagusch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 13:27:30 by djagusch          #+#    #+#             */
/*   Updated: 2022/11/15 13:29:15 by djagusch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr_c(void *ptr)
{
	uintptr_t	add;
	char		*hex_add;
	int			length;

	add = (uintptr_t) ptr;
	if (!add)
		return (return_null());
	hex_add = ft_dec_hexstr(add);
	if (!hex_add)
		return (return_null());
	length = ft_putstr_c(hex_add);
	free(hex_add);
	return (length);
}
