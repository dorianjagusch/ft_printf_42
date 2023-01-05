/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djagusch <djagusch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:15:42 by djagusch          #+#    #+#             */
/*   Updated: 2022/12/24 05:08:55 by djagusch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*b_cpy;

	i = 0;
	b_cpy = (unsigned char *)b;
	while (i < len)
	{
		b_cpy[i++] = (unsigned char) c;
	}
	return (b);
}
