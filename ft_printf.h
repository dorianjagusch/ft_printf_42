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
# include <unistd.h>
# include <stdlib.h>
# include "libft.h"

int		return_null(void);
char	*ft_dec_hexstr(unsigned long n);
int		ft_putunbr_c(unsigned int n);
int		ft_putstr_c(char *s);
int		ft_putptr_c(unsigned long long ptr);
int		ft_putnbr_c(int n);
int		ft_puthex_c(unsigned int n, int c);
int		ft_putchar_c(int c);

#endif
