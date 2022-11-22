/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_util.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djagusch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 13:22:19 by djagusch          #+#    #+#             */
/*   Updated: 2022/11/15 13:22:21 by djagusch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_strrev(char *str)
{
	size_t	i;
	size_t	j;
	char	tmp;

	if (!str || ft_strlen(str) < 2)
		return ;
	i = 0;
	j = ft_strlen(str) - 1;
	while (i < j)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j++] = str[i++];
	}
}

int	ft_len16(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		len++;
		n /= 16;
	}
	return (len);
}

char	*ft_dec_hexstr(int n)
{
	char	*hex;
	size_t	i;
	int		remainder;
	int		quotient;

	i = 0;
	hex = (char *)malloc(sizeof(char) * ft_len16(n) + 1);
	if (!hex)
		return (NULL);
	quotient = n;
	while (quotient)
	{
		remainder = quotient % 16;
		if (remainder <= 9)
			hex[i++] = remainder + '0';
		else
			hex[i++] = (remainder % 10) + 'A';
		quotient /= 16;
	}
	hex[i] = '\0';
	ft_strrev(hex);
	return (hex);
}
