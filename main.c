#include "ft_printf.h"
#include "libft/libft.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
	int	d;
	int	e;
	int	*test;

	*test = 5;
	//d = ft_printf("HELLO %p\n", test);
	e = printf("HELLO %p\n", test);
	printf("%d and %d", d, e);
	return (0);
}