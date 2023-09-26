/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dectobase_str.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djagusch <djagusch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 10:49:23 by djagusch          #+#    #+#             */
/*   Updated: 2023/09/26 06:32:59 by djagusch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

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
		str[j--] = str[i++];
	}
}

int	ft_lenbase(int n, int base)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		len++;
		n /= base;
	}
	return (len);
}

char	*ft_dectobase_str(int n, int base)
{
	char	*num;
	size_t	i;
	int		remainder;
	int		quotient;

	i = 0;
	num = (char *)malloc(sizeof(char) * ft_lenbase(n, base) + 1);
	if (!num)
		return (NULL);
	quotient = n;
	while (quotient)
	{
		remainder = quotient % base;
		if (remainder <= 9)
			num[i++] = remainder + '0';
		else
			num[i++] = (remainder % 10) + 'A';
		quotient /= base;
	}
	num[i] = '\0';
	ft_strrev(num);
	return (num);
}
