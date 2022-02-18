#include <stdio.h>

int	main(void)
{
	int result = ft_recursive_power(7984651, 0);
	int result1 = ft_recursive_power(2, 2);
	int result2 = ft_recursive_power(3, 4);
	int result3 = ft_recursive_power(2, 11);
	int result4 = ft_recursive_power(5, 4);
	int result5 = ft_recursive_power(0, 0);

	printf("Esperado: 1\nResultado: %d\n", result);
	printf("\nEsperado: 4\nResultado: %d\n", result1);
	printf("\nEsperado: 81\nResultado: %d\n", result2);
	printf("\nEsperado: 2048\nResultado: %d\n", result3);
	printf("\nEsperado: 625\nResultado: %d\n", result4);
	printf("\nEsperado: 1\nResultado: %d\n", result5);
}
