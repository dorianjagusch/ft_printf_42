/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djagusch <djagusch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:04:15 by djagusch          #+#    #+#             */
/*   Updated: 2022/12/24 05:08:57 by djagusch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int	ft_tolower(int c)
{
	if ('A' <= c && c <= 'Z')
		return (c + 32);
	return (c);
}

void	ft_tolower2(char *c)
{
	if ('A' <= *c && *c <= 'Z')
		*c = *c + 32;
}

void	ft_strlower(char *s)
{
	if (!s)
		return ;
	while (*s)
		ft_tolower2(s++);
}
