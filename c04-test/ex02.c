#include <stdio.h>

int	main(void)
{
	int	num1 = 1234;
	int	num2 = 567890;
	int	num3 = 00002;
	int	num4 = 2147483647;
	int	num5 = -2147483647;
	int	num6 = -2147483648;

	printf("Esperado: 1234\n");
	ft_putnbr(num1);
	printf("\n");
	printf("Esperado: 567890\n");
	ft_putnbr(num2);
	printf("\n");
	printf("Esperado: 2\n");
	ft_putnbr(num3);
	printf("\n");
	printf("Esperado: 2147483647\n");
	ft_putnbr(num4);
	printf("\n");
	printf("Esperado: -2147483647\n");
	ft_putnbr(num5);
	printf("\n");
	printf("Esperado: -2147483648\n");
	ft_putnbr(num6);
	printf("\n");
}
