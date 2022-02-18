#include <stdio.h>

int main (void)
{
	printf("Esperado: 1\nResultado: %d\n", ft_recursive_factorial(0));
	printf("\nEsperado: 1\nResultado: %d\n", ft_recursive_factorial(1));
	printf("\nEsperado: 720\nResultado: %d\n", ft_recursive_factorial(6));
	printf("\nEsperado: 5040\nResultado: %d\n", ft_recursive_factorial(7));
	printf("-----------------");
	printf("\nEsperado: 0\nResultado: %d\n", ft_recursive_factorial(-10));
}