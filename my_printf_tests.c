#include <stdio.h>
#include <limits.h>

int main(void)
{
	int	ret_1;
	int ret_2;

	setvbuf(stdout, NULL, _IONBF, 0);

	printf("#################################\n");
	printf("########     INTEGER     ########\n");
	printf("#################################\n\n");

	ret_1 = printf("Integer 5: \t %b\n");
	ret_2 = ft_printf("Integer 5: \t %b\n");
	printf("printf:\t\t%i\nft_printf:\t%i\n\n", ret_1, ret_2);

	ret_1 = printf("Integer -5: \t %i\n", -5);
	ret_2 = ft_printf("Integer -5: \t %i\n", -5);
	printf("printf:\t\t%i \nft_printf:\t%i\n\n", ret_1, ret_2);

	ret_1 = printf("Integer 0: \t %i\n", 0);
	ret_2 = ft_printf("Integer 0: \t %i\n", 0);
	printf("printf:\t\t%i \nft_printf:\t%i\n\n", ret_1, ret_2);

	ret_1 = printf("Integer INT_MAX: \t %i\n",INT_MAX);
	ret_2 = ft_printf("Integer INT_MAX: \t %i\n",INT_MAX);
	printf("printf:\t\t%i \nft_printf:\t%i\n\n", ret_1, ret_2);
	
	ret_1 = printf("Integer INT_MIN: \t %i\n",INT_MIN);
	ret_2 = ft_printf("Integer INT_MIN: \t %i\n",INT_MIN);
	printf("printf:\t\t%i \nft_printf:\t%i\n\n", ret_1, ret_2);

	printf("#################################\n");
	printf("########     DECIMAL     ########\n");
	printf("#################################\n\n");

	ret_1 = printf("Integer 5: \t %d\n", 5);
	ret_2 = ft_printf("Integer 5: \t %d\n", 5);
	printf("printf:\t\t%d\nft_printf:\t%d\n\n", ret_1, ret_2);

	ret_1 = printf("Integer -5: \t %d\n", -5);
	ret_2 = ft_printf("Integer -5: \t %d\n", -5);
	printf("printf:\t\t%d\nft_printf:\t%d\n\n", ret_1, ret_2);

	ret_1 = printf("Integer 0: \t %d\n", 0);
	ret_2 = ft_printf("Integer 0: \t %d\n", 0);
	printf("printf:\t\t%d\nft_printf:\t%d\n\n", ret_1, ret_2);

	ret_1 = printf("Integer INT_MAX: \t %d\n",INT_MAX);
	ret_2 = ft_printf("Integer INT_MAX: \t %d\n",INT_MAX);
	printf("printf:\t\t%d\nft_printf:\t%d\n\n", ret_1, ret_2);
	
	ret_1 = printf("Integer INT_MIN: \t %d\n",INT_MIN);
	ret_2 = ft_printf("Integer INT_MIN: \t %d\n",INT_MIN);
	printf("printf:\t\t%d\nft_printf:\t%d\n\n", ret_1, ret_2);
	
	// ret_1 = printf("Integer LONG_MAX: \t %d\n",LONG_MAX);
	// ret_2 = ft_printf("Integer LONG_MAX: \t %d\n",LONG_MAX);
	// printf("printf:\t\t%d\nft_printf:\t%d\n\n", ret_1, ret_2);
	
	// ret_1 = printf("Integer LONG_MIN: \t %d\n",LONG_MIN);
	// ret_2 = ft_printf("Integer LONG_MIN: \t %d\n",LONG_MIN);
	// printf("printf:\t\t%d\nft_printf:\t%d\n\n", ret_1, ret_2);

	printf("#################################\n");
	printf("#######     CHARACTER     #######\n");
	printf("#################################\n\n");

	ret_1 = printf("Character c: \t %c\n",'c');
	ret_2 = ft_printf("Character c: \t %c\n",'c');
	printf("printf:\t\t%d\nft_printf:\t%d\n\n", ret_1, ret_2);

	ret_1 = printf("Character \\0 \t %c\n",'\0');
	ret_2 = ft_printf("Character \\0 \t %c\n",'\0');
	printf("printf:\t\t%d\nft_printf:\t%d\n\n", ret_1, ret_2);

	ret_1 = printf("Character nl: \t %c",'\n');
	ret_2 = ft_printf("Character nl: \t %c",'\n');
	printf("printf:\t\t%d\nft_printf:\t%d\n\n", ret_1, ret_2);

	ret_1 = printf("Character 200: \t %c\n", 200);
	ret_2 = ft_printf("Character 200: \t %c\n", 200);
	printf("printf:\t\t%d\nft_printf:\t%d\n\n", ret_1, ret_2);

	printf("##################################\n");
	printf("#######       STRING       #######\n");
	printf("##################################\n\n");

	ret_1 = printf("String HELLO: \t %s\n", "HELLO");
	ret_2 = ft_printf("String HELLO: \t %s\n", "HELLO");
	printf("printf:\t\t%d\nft_printf:\t%d\n\n", ret_1, ret_2);

	ret_1 = printf("String hello \t %s\n", "hello");
	ret_2 = ft_printf("String hello \t %s\n", "hello");
	printf("printf:\t\t%d\nft_printf:\t%d\n\n", ret_1, ret_2);

	ret_1 = printf("String EMPTY: \t %s\n", "");
	ret_2 = ft_printf("String EMPTY: \t %s\n", "");
	printf("printf:\t\t%d\nft_printf:\t%d\n\n", ret_1, ret_2);

	ret_1 = printf("String NULL: \t %s\n", NULL);
	ret_2 = ft_printf("String NULL: \t %s\n", NULL);
	printf("printf:\t\t%d\nft_printf:\t%d\n\n", ret_1, ret_2);

	ret_1 = printf("String \"200\": \t %s\n", "200");
	ret_2 = ft_printf("String \"200\": \t %s\n", "200");
	printf("printf:\t\t%d\nft_printf:\t%d\n\n", ret_1, ret_2);

	ret_1 = printf("");
	ret_2 = ft_printf("");
	printf("printf:\t\t%d\nft_printf:\t%d\n\n", ret_1, ret_2);

	ret_1 = printf("No arguments\n");
	ret_2 = ft_printf("No arguments\n");
	printf("printf:\t\t%d\nft_printf:\t%d\n\n", ret_1, ret_2);
	
	printf("#################################\n");
	printf("########     HEX_low     ########\n");
	printf("#################################\n\n");

	ret_1 = printf("Integer 5: \t %x\n", 5);
	ret_2 = ft_printf("Integer 5: \t %x\n", 5);
	printf("printf:\t\t%d\nft_printf:\t%d\n\n", ret_1, ret_2);

	ret_1 = printf("Integer -5: \t %x\n", -5);
	ret_2 = ft_printf("Integer -5: \t %x\n", -5);
	printf("printf:\t\t%d\nft_printf:\t%d\n\n", ret_1, ret_2);

	ret_1 = printf("Integer 113847: \t %x\n",  113847);
	ret_2 = ft_printf("Integer 113847: \t %x\n", 113847);
	printf("printf:\t\t%d\nft_printf:\t%d\n\n", ret_1, ret_2);

	ret_1 = printf("Integer INT_MAX: \t %x\n",INT_MAX);
	ret_2 = ft_printf("Integer INT_MAX: \t %x\n",INT_MAX);
	printf("printf:\t\t%d\nft_printf:\t%d\n\n", ret_1, ret_2);
	
	ret_1 = printf("Integer INT_MIN: \t %x\n",INT_MIN);
	ret_2 = ft_printf("Integer INT_MIN: \t %x\n",INT_MIN);
	printf("printf:\t\t%d\nft_printf:\t%d\n\n", ret_1, ret_2);
	
	// ret_1 = printf("Integer LONG_MAX: \t %x\n",LONG_MAX);
	// ret_2 = ft_printf("Integer LONG_MAX: \t %x\n",LONG_MAX);
	// printf("printf:\t\t%d\nft_printf:\t%d\n\n", ret_1, ret_2);
	
	// ret_1 = printf("Integer LONG_MIN: \t %x\n",LONG_MIN);
	// ret_2 = ft_printf("Integer LONG_MIN: \t %x\n",LONG_MIN);
	// printf("printf:\t\t%d\nft_printf:\t%d\n\n", ret_1, ret_2);

	printf("#################################\n");
	printf("########     HEX_upp     ########\n");
	printf("#################################\n\n");

	ret_1 = printf("Integer 5: \t %X\n", 5);
	ret_2 = ft_printf("Integer 5: \t %X\n", 5);
	printf("printf:\t\t%d\nft_printf:\t%d\n\n", ret_1, ret_2);

	ret_1 = printf("Integer -5: \t %X\n", -5);
	ret_2 = ft_printf("Integer -5: \t %X\n", -5);
	printf("printf:\t\t%d\nft_printf:\t%d\n\n", ret_1, ret_2);

	ret_1 = printf("Integer 113847: \t %X\n",  113847);
	ret_2 = ft_printf("Integer 113847: \t %X\n", 113847);
	printf("printf:\t\t%d\nft_printf:\t%d\n\n", ret_1, ret_2);

	ret_1 = printf("Integer INT_MAX: \t %X\n",INT_MAX);
	ret_2 = ft_printf("Integer INT_MAX: \t %X\n",INT_MAX);
	printf("printf:\t\t%d\nft_printf:\t%d\n\n", ret_1, ret_2);
	
	ret_1 = printf("Integer INT_MIN: \t %X\n",INT_MIN);
	ret_2 = ft_printf("Integer INT_MIN: \t %X\n",INT_MIN);
	printf("printf:\t\t%d\nft_printf:\t%d\n\n", ret_1, ret_2);
	
	// ret_1 = printf("Integer LONG_MAX: \t %X\n",LONG_MAX);
	// ret_2 = ft_printf("Integer LONG_MAX: \t %X\n",LONG_MAX);
	// printf("printf:\t\t%d\nft_printf:\t%d\n\n", ret_1, ret_2);
	
	// ret_1 = printf("Integer LONG_MIN: \t %X\n",LONG_MIN);
	// ret_2 = ft_printf("Integer LONG_MIN: \t %X\n",LONG_MIN);
	// printf("printf:\t\t%d\nft_printf:\t%d\n\n", ret_1, ret_2);


	printf("#################################\n");
	printf("########     pointer     ########\n");
	printf("#################################\n\n");

	int		d = 19;
	char	c = 'f';
	char	*str = "hello";
	void	*ptr;
	unsigned char	uc = 230;
	unsigned int	unsigned_int = -450;
	long			lint = LONG_MAX;
	unsigned long	luint = ULLONG_MAX;
	size_t			t = 7263874634;


	ret_1 = printf("Integer 19: \t %p\n", &d);
	ret_2 = ft_printf("Integer 19: \t %p\n", &d);
	printf("printf:\t\t%d\nft_printf:\t%d\n\n", ret_1, ret_2);

	ret_1 = printf("Character c: \t %p\n", &c);
	ret_2 = ft_printf("Character c: \t %p\n", &c);
	printf("printf:\t\t%d\nft_printf:\t%d\n\n", ret_1, ret_2);

	ret_1 = printf("Integer \"hello\": \t %p\n",  str);
	ret_2 = ft_printf("Integer \"hello\": \t %p\n", str);
	printf("printf:\t\t%d\nft_printf:\t%d\n\n", ret_1, ret_2);

	ret_1 = printf("Integer void *: \t %p\n",  ptr);
	ret_2 = ft_printf("Integer void *: \t %p\n", ptr);
	printf("printf:\t\t%d\nft_printf:\t%d\n\n", ret_1, ret_2);
	
	ret_1 = printf("Integer NULL: \t %p\n", NULL);
	ret_2 = ft_printf("Integer NULL: \t %p\n", NULL);
	printf("printf:\t\t%d\nft_printf:\t%d\n\n", ret_1, ret_2);
	
	ret_1 = printf("unsigned char 230: \t %p\n", &uc);
	ret_2 = ft_printf("unsigned char 230: \t %p\n", &uc);
	printf("printf:\t\t%d\nft_printf:\t%d\n\n", ret_1, ret_2);
	
	ret_1 = printf("unsigned int -450: \t %p\n", &unsigned_int);
	ret_2 = ft_printf("unsigned int -450: \t %p\n", &unsigned_int);
	printf("printf:\t\t%d\nft_printf:\t%d\n\n", ret_1, ret_2);

	ret_1 = printf("unsigned long ULLONG_MAX: \t %p\n", &luint);
	ret_2 = ft_printf("unsigned long ULLONG_MAX: \t %p\n", &luint);
	printf("printf:\t\t%d\nft_printf:\t%d\n\n", ret_1, ret_2);

	ret_1 = printf("long LONG_MAX: \t %p\n", &lint);
	ret_2 = ft_printf("long LONG_MAX: \t %p\n", &lint);
	printf("printf:\t\t%d\n ft_printf:\t%d\n\n", ret_1, ret_2);

	ret_1 = printf("size_t 7263874634: \t %p\n", &t);
	ret_2 = ft_printf("size_t 7263874634: \t %p\n", &t);
	printf("printf:\t\t%d\nft_printf:\t%d\n\n", ret_1, ret_2);


	printf("#################################\n");
	printf("##########      %%      ##########\n");
	printf("#################################\n\n");

	char tripple[] = "Tripple Percentage %%%\n";

	ret_1 = printf("Percentage %%\n");
	ret_2 = ft_printf("Percentage %%\n");
	printf("printf:\t\t%d\nft_printf:\t%d\n\n", ret_1, ret_2);

	ret_1 = printf("Double percentage %%%%\n");
	ret_2 = ft_printf("Double percentage %%%%\n");
	printf("printf:\t\t%d\nft_printf:\t%d\n\n", ret_1, ret_2);

	ret_1 = printf(tripple);
	ret_2 = ft_printf(tripple);
	printf("printf:\t\t%d\nft_printf:\t%d\n\n", ret_1, ret_2);

	// str = "Oh look --> %";

	// ret_1 = printf("single %s", str);
	// ret_2 = ft_printf("single %s", str);
	// printf("printf:\t\t%d\nft_printf:\t%d\n\n", ret_1, ret_2);

	printf("#################################\n");
	printf("##########     MIX     ##########\n");
	printf("#################################\n");

	char	*str2 = "String";
	char	c2 = 'C';
	int		integer = 2365;
	char	*p = &c2;

	ret_1 = printf("This is a %s and a char %c, a decimal %d and integer %i, and address of a char %p, \
	and the hexadicmal representation of the same number as before in lower %x and upper case %X and a percentage %%\n\n", 
	str, c2, integer, integer, p, integer, integer);
	ret_2 = ft_printf("This is a %s and a char %c, a decimal %d and integer %i, and address of a char %p, \
	and the hexadicmal representation of the same number as before in lower %x and upper case %X and a percentage %%\n\n", 
	str, c2, integer, integer, p, integer, integer);
	printf("printf:\t\t%d\nft_printf:\t%d\n\n", ret_1, ret_2);

	return (0);
}
