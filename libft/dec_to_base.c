#include "../include/libft.h"

static int	ft_lenbase(int n, int base)
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

void dec_to_base(unsigned long long nbr, int base)
{
	int	len;
	

	if (nbr >= base)
	{
		dec_to_base(nbr / base, base);
		dec_to_base(nbr % base, base);
	}
	if (nbr <= 9 && nbr < base)
		ft_putnbr(nbr);
	else
		ft_putchar(nbr + 'a' - 10);
}