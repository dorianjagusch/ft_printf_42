/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_string.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djagusch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 13:22:19 by djagusch          #+#    #+#             */
/*   Updated: 2022/11/15 13:22:21 by djagusch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_c(char *s)
{
	if (!s)
		return (return_null());
	return ( write(1, s, ft_strlen(s)) );
}
