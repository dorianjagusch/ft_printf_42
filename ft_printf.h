/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djagusch <djagusch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 13:23:15 by djagusch          #+#    #+#             */
/*   Updated: 2022/11/15 13:28:58 by djagusch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdint.h>
# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>
# include "libft/libft.h"

int		ft_printf(const char *input, ...);
int		ft_putchar_c(int c);;
int		ft_putstr_c(char *s);
int		ft_putnbr_c(int n);
int		ft_putunbr_c(unsigned int n);
void	ft_strrev(char *str);
size_t	ft_len16(unsigned long long n);
char	*ft_dec_hexstr(unsigned long long n);
int		ft_puthex_c(unsigned long n, int c);
int		ft_putptr_c(unsigned long ptr);
int		return_null(void);

#endif
