#include <stdio.h>

int main (void)
{
	printf("Esperado: 1\nResultado: %d\n", ft_iterative_factorial(0));
	printf("\nEsperado: 1\nResultado: %d\n", ft_iterative_factorial(1));
	printf("\nEsperado: 120\nResultado: %d\n", ft_iterative_factorial(5));
	printf("\nEsperado: 720\nResultado: %d\n", ft_iterative_factorial(6));
    printf("-----------------");
	printf("\nEsperado: 0\nResultado: %d\n", ft_iterative_factorial(-10));
}