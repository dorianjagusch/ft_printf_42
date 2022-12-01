#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
	int	d;
	int e;

	d = ft_printf("myfun: %p\n", (void *)ULONG_MAX);
	e = printf("orig.: %p\n", (void *)ULONG_MAX);
	printf("%d and %d", d, e);
	return (0);
}