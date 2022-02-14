#include <stdio.h>

int	main(void)
{
	char *word1 = "matheus";
	char *word2 = "MATH13";
	char *word3 = "matheus3";
	char *word4 = "matheus leonardo";

	int	result1 = ft_str_is_alpha(word1);
	int	result2 = ft_str_is_alpha(word2);
	int	result3 = ft_str_is_alpha(word3);
	int	result4 = ft_str_is_alpha(word4);

	printf("Esperado: 1, Resultado:%d\n", result1);
	printf("Esperado: 0, Resultado:%d\n", result2);
	printf("Esperado: 0, Resultado:%d\n", result3);
	printf("Esperado: 0, Resultado:%d\n", result4);
}
