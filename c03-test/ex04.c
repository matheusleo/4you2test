#include <stdio.h>

int	main(void)
{
	char *word1 = "12matheus34leo";
	char *word2 = "34";
	char *word3 = "matheus";
	char *word4 = "z";
	char *word5 = "leo";

	char *result1 = ft_strstr(word1, word2);
	char *result2 = ft_strstr(word1, word3);
	char *result3 = ft_strstr(word1, word4);
	char *result4 = ft_strstr(word1, word5);

	printf("Esperado: 34leo\nResultado: %s\n\n", result1);
	printf("Esperado: matheus34leo\nResultado: %s\n\n", result2);
	printf("Esperado: (null)\nResultado: %s\n\n", result3);
	printf("Esperado: leo\nResultado: %s\n\n", result4);
}
