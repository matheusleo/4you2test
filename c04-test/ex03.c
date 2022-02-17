#include <stdio.h>

int main(void)
{
	int	result1 = ft_atoi("1234");
	int	result2 = ft_atoi("-1234");
	int	result3 = ft_atoi("-12dasdd34");
	int	result4 = ft_atoi("    ----12dasdd34");
	int	result5 = ft_atoi("---+--+1234ab567");
	int	result6 = ft_atoi("--2147483647");
	int	result7 = ft_atoi("- -2147483647");

	printf("Esperado: 1234\nResultado: %d\n\n", result1);
	printf("Esperado: -1234\nResultado: %d\n\n", result2);
	printf("Esperado: -12\nResultado: %d\n\n", result3);
	printf("Esperado: 12\nResultado: %d\n\n", result4);
	printf("Esperado: -1234\nResultado: %d\n\n", result5);
	printf("Esperado: 2147483647\nResultado: %d\n\n", result6);
	printf("Esperado: indefinido o resultado\nResultado: %d\n", result7);
}