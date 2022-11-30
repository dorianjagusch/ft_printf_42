#include "ft_printf.h"
#include "libft/libft.h"
#include <stdio.h>

int main(void)
{
	int d;
	int e;

	d = ft_printf("HELLO %X\n", 32);
	e = printf("HELLO %X\n", 32);
	printf("%d and %d", d, e);
	return (0);
}