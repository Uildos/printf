# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}

int printxt (const char **c)
{
	ft_putchar(**c);
	(*c)++;
	return(1);
}

int	main(void)
{
	
	const	char	*str="Hello World";
	const	char	*str2="\n";
	printf("Testando SEM ZERO,sem WIDTH ECISION %-d \n", 5000);
	printf("Testando ZERO sem WIDTH e PRECISION %4d \n", 50);
	printf("Str está em %c \n", *str);
	printxt(&str);
	printxt(&str2);
	printf("\nStr está em %c \n", *str);
	return(0);
}
