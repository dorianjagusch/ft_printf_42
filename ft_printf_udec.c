/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_udec.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djagusch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 13:26:39 by djagusch          #+#    #+#             */
/*   Updated: 2022/11/15 13:26:42 by djagusch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr_c(unsigned int n)
{
	size_t	i;
	int		count;

	i = 0;
	count = 0;
	if (n > 9)
	{
		count += ft_putnbr_c(n / 10);
		n %= 10;
	}
	if (n <= 9)
		count += ft_putchar_c(n + '0');
	return (count);
}
