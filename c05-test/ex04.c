#include <stdio.h>

int	main(void)
{
	int result1 = ft_fibonacci(8);
	int result2 = ft_fibonacci(10);
	int result3 = ft_fibonacci(14);
	int result4 = ft_fibonacci(-3);

	printf("Esperado: 21\nResultado: %d\n\n", result1);
	printf("Esperado: 55\nResultado: %d\n\n", result2);
	printf("Esperado: 377\nResultado: %d\n\n", result3);
	printf("Esperado: -1\nResultado: %d\n\n", result4);
}
