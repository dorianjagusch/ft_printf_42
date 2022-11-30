/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djagusch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 13:24:34 by djagusch          #+#    #+#             */
/*   Updated: 2022/11/15 13:24:35 by djagusch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexlo_c(int n)
{
	char	*hex;
	int		length;

	if (!n)
		length = write(1, (void *)'0', 1);
	else 
	{
		hex = ft_dec_hexstr(n);
		if (!hex)
			return (return_null());
		ft_strlower(hex);
		length = ft_putstr_c(hex);
		free(hex);
	}
	return (length);
}

int	ft_puthexup_c(int n)
{
	char	*hex;
	int		length;

	if (!n)
		length = write(1, (void *)'0', 1);
	else 
	{
		hex = ft_dec_hexstr(n);
		if (!hex)
			return (return_null());
		length = ft_putstr_c(hex);
		free(hex);
	}
	return (length);
}
