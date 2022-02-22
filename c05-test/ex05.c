#include <stdio.h>

int	main(void)
{
	int result = ft_sqrt(4);
	int result1 = ft_sqrt(9);
	int result2 = ft_sqrt(16);
	int result3 = ft_sqrt(81);
	int result4 = ft_sqrt(625);
	int result5 = ft_sqrt(12345690);
	int result6 = ft_sqrt(2147395600);
	int result7 = ft_sqrt(2147395601);

	printf("Esperado: 2\nResultado: %d\n\n", result);
	printf("Esperado: 3\nResultado: %d\n\n", result1);
	printf("Esperado: 4\nResultado: %d\n\n", result2);
	printf("Esperado: 9\nResultado: %d\n\n", result3);
	printf("Esperado: 25\nResultado: %d\n\n", result4);
	printf("Esperado: 0\nResultado: %d\n", result5);
	printf("Esperado: 46340\nResultado: %d\n", result6);
	printf("Esperado: 0\nResultado: %d\n", result7);
}
