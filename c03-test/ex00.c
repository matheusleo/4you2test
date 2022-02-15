#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*word1 = "";
	char	*word2 = "matheus";
	char 	*word3 = "matheus";
	char 	*word4 = "abc";

	int result1 = ft_strcmp(word1, word2);
	int result2 = ft_strcmp(word2, word1);
	int result3 = ft_strcmp(word2, word3);
	int result4 = ft_strcmp(word3, word4);

	printf("Esperado: -109\nResultado: %d\n", result1);
	printf("\n");
	printf("Esperado: 109\nResultado: %d\n", result2);
	printf("\n");
	printf("Esperado: 0\nResultado: %d\n", result3);
	printf("\n");
	printf("Esperado: 12\nResultado: %d\n", result4);
}
