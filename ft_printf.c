/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djagusch <djagusch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 13:20:48 by djagusch          #+#    #+#             */
/*   Updated: 2022/11/15 14:20:26 by djagusch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static int	ft_select_call(char c, va_list args)
{
	int	count;

	count = 0;
	if (c == 'c')
		count = ft_putchar_c(va_arg(args, int));
	else if (c == 's')
		count = ft_putstr_c(va_arg(args, char *));
	else if (c == 'p')
		count = ft_putptr_c(va_arg(args, void *));
	else if (c == 'd' || c == 'i')
		count = ft_putnbr_c(va_arg(args, int));
	else if (c == 'u')
		count = ft_putunbr_c(va_arg(args, unsigned int));
	else if (c == 'x')
		count = ft_puthexlo_c(va_arg(args, int));
	else if (c == 'X')
		count = ft_puthexup_c(va_arg(args, int));
	else if (c == '%')
		count = ft_putchar_c('%');
	return (count);
}

static int	ft_count_args(const char *input)
{
	int		n_args;
	size_t	i;

	n_args = 0;
	i = 0;
	while (input[i])
	{
		if (input[i] == '%' && input[i + 1] != '%')
			n_args++;
		i++;
	}
	return (n_args);
}

int	ft_printf(const char *input, ...)
{
	int		i;
	int		count;
	int		n_args;
	va_list	args;

	if (!input || input[0] == '\0')
	{
		ft_putstr_c("(null)");
		return (6);
	}
	i = 0;
	count = 0;
	n_args = ft_count_args(input);
	va_start(args, (char *)input);
	while (input[i++])
	{
		while (input[i] != '%')
		{
			count += ft_putchar_c(input[i++]);
		}
		if (input[i++] == '%')
			count += ft_select_call(input[i++], args);
	}
	va_end(args);
	return (count);
}

int main(void)
{
	//char *str = "Hello";

	ft_printf("HELLO\n");
	printf("HELLO\n");

	return (0);
}