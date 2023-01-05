/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djagusch <djagusch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 18:32:39 by djagusch          #+#    #+#             */
/*   Updated: 2022/10/27 18:32:39 by djagusch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	ft_putnbr(int n)
{
	size_t	i;

	if (!n)
		return ;
	i = 0;
	if (n == MY_INT_MIN)
	{
		ft_putstr("-2147483648");
		return ;
	}
	if (n < 0)
	{
		ft_putchar('-');
		n = -1 * n;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
		n %= 10;
	}
	if (n <= 9)
		ft_putchar(n + '0');
}
