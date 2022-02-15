#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*word1 = "";
	char	*word2 = "matheus";
	char 	*word3 = "matheus";
	char 	*word4 = "matheusL";

	int result1 = ft_strncmp(word1, word2, 0);
	int result2 = ft_strncmp(word2, word1, 3);
	int result3 = ft_strncmp(word2, word3, 3);
	int result4 = ft_strncmp(word3, word4, 8);

	printf("Esperado: 0\nResultado: %d\n", result1);
	printf("\n");
	printf("Esperado: 109\nResultado: %d\n", result2);
	printf("\n");
	printf("Esperado: 0\nResultado: %d\n", result3);
	printf("\n");
	printf("Esperado: -76\nResultado: %d\n", result4);
}
