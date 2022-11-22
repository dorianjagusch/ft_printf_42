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
#include "libft/libft.h"

int	ft_puthexlo_c(int n)
{
	char	*hex;

	ft_putchar('0');
	ft_putchar('x');
	hex = ft_dec_hexstr(n);
	ft_strlower(hex);
	return (ft_putstr_c(hex) + 2);
}

int	ft_puthexup_c(int n)
{
	char	*hex;

	ft_putchar('0');
	ft_putchar('X');
	hex = ft_dec_hexstr(n);
	return (ft_putstr_c(hex) + 2);
}
