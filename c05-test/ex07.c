#include <stdio.h>

int main(void)
{
	int	result1 = ft_find_next_prime(2);
	int	result2 = ft_find_next_prime(7);
	int	result3 = ft_find_next_prime(13);
	int	result4 = ft_find_next_prime(71);
	int	result5 = ft_find_next_prime(241);

	printf("Esperado: 3\nResultado: %d\n\n", result1);
	printf("Esperado: 11\nResultado: %d\n\n", result2);
	printf("Esperado: 17\nResultado: %d\n\n", result3);
	printf("Esperado: 73\nResultado: %d\n\n", result4);
	printf("Esperado: 251\nResultado: %d\n\n", result5);
}
