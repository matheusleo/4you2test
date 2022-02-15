#include <stdio.h>
#include <string.h>

int	main(void)
{
	// se tamanho for menor que word1 + 1, stack smashing
	char word1[20] = "matheus";
	char *word2 = " leonardo";
	char *word3 = " costa";
	
	char *result1 = ft_strcat(word1, word2);
	printf("Esperado: (matheus leonardo)\n");
	printf("Resultado: (%s)\n", word1);
	printf("Retornado: (%s)\n", result1);
	printf("\n");
	char *result2 = ft_strcat(word1, word3);
	printf("Esperado: (matheus leonardo costa)\n");
	printf("Resultado: (%s)\n", word1);
	printf("Retornado: (%s)\n", result2);
}
z
