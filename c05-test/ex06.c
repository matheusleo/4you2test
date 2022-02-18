#include <stdio.h>

int	main(void)
{
	int result1 = ft_is_prime(3);
	int result2 = ft_is_prime(9);
	int result3 = ft_is_prime(13);
	int result4 = ft_is_prime(100);
	int result5 = ft_is_prime(169);
	int result6 = ft_is_prime(271);

	printf("Número: 3\nEsperado: 1\nResultado: %d\n\n", result1);
	printf("Número: 9\nEsperado: 0\nResultado: %d\n\n", result2);
	printf("Número: 13\nEsperado: 1\nResultado: %d\n\n", result3);
	printf("Número: 100\nEsperado: 0\nResultado: %d\n\n", result4);
	printf("Número: 169\nEsperado: 0\nResultado: %d\n\n", result5);
	printf("Número: 271\nEsperado: 1\nResultado: %d\n\n", result6);
}
