#include <stdio.h>

int	main(void)
{
	char *word1 = "matheus";
	char *word2 = "12346";
	char *word3 = "123 46";
	char *word4 = "MATHEUSLEONARDO";
	char *word5 = "MATHEUS LEONARDO";

	int	result1 = ft_str_is_uppercase(word1);
	int	result2 = ft_str_is_uppercase(word2);
	int	result3 = ft_str_is_uppercase(word3);
	int	result4 = ft_str_is_uppercase(word4);
	int	result5 = ft_str_is_uppercase(word5);

	printf("Esperado: 0, Resultado:%d\n", result1);
	printf("Esperado: 0, Resultado:%d\n", result2);
	printf("Esperado: 0, Resultado:%d\n", result3);
	printf("Esperado: 1, Resultado:%d\n", result4);
	printf("Esperado: 0, Resultado:%d\n", result5);
}
