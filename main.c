
#include "ft_printf.h"
int main()
{
	printf("\n------*P*------\n");
	int a = 2;
	char c = 'a';
	printf("what should be return = %d \n",printf("%p \n", (void *)-14523));
	printf("myreturn = %d \n",ft_printf("%p \n", (void *)-14523));

	// printf("\n------*percent*------\n");
	// printf("what should be return = %d \n",printf("%% \n"));
	// printf("myreturn = %d \n",ft_printf("%% \n"));

	// printf("\n------*X*------\n");
	// printf("what should be return = %d \n",printf("%X \n", 0));
	// printf("myreturn = %d \n",ft_printf("%X \n", 0));

	// printf("\n------*c*------\n");
	// printf("what should be return = %d \n",printf("%c \n", 'C'));
	// printf("myreturn = %d \n",ft_printf("%c \n", 'C'));
	// printf("\n");
	// printf("what should be return = %d \n",printf("%c \n", '/200'));
	// printf("myreturn = %d \n",ft_printf("%c \n", '/200'));

	// printf("\n------*S*------\n");
	// char *str  = NULL;
	// printf("what should be return = %d \n",printf("str: %s \n", str));
	// printf("myreturn = %d \n",ft_printf("str: %s \n", str));
	// printf("what should be return = %d \n",printf("str: %s \n", "hello"));
	// printf("myreturn = %d \n",ft_printf("str: %s \n", "hello"));

	// printf("\n------*U*------\n");
	// printf("what should be return = %d \n",printf("%u \n", 0));
	// printf("myreturn = %d \n",ft_printf("%u \n", 0));

	printf("\n------*D*------\n");
	long int i = -2147483665;
	printf("what should be return = %d \n",printf("%d", -10));
	printf("myreturn = %d \n",ft_printf("%d", -10));

	// printf("\n------*I*------\n");
	// printf("what should be return = %d \n",printf("%i \n", 3000));
	// printf("myreturn = %d \n",ft_printf("%i \n", 3000));

	// printf("\n------*no format*------\n");
	// printf("what should be return = %d \n",printf("hello \n"));
	// printf("myreturn = %d \n",ft_printf("%w hello \n"));
	// printf("\n------*wtf*------\n");
	// printf("what should be return = %d \n",printf("\001\002\007\v\010\f\r\n"));
	// printf("myreturn = %d \n",ft_printf("\001\002\007\v\010\f\r\n"));
	// printf("\n------------------\n");
	// printf("what should be return = %d \n",printf("%c"));
	// printf("myreturn = %d \n",ft_printf("%c"));
	// printf("\n------------------\n");
	// printf("what should be return = %d \n",printf("%%c \n"));
	// printf("myreturn = %d \n",ft_printf("%%c \n"));
	printf("\n------------------\n");
	// printf("myreturn: %d\n", ft_printf("hello %c %x\n", 'C'));
	// printf("what should be return: %d\n", printf("hello %c %x\n", 'C'));
	return 0;
}