#include <stdio.h>
#include <string.h>

int	main(void)
{
	// se tamanho for menor que word1 + 1, stack smashing
	char word1[20] = "matheus";
	char *word2 = " leonardo";
	char *word3 = " costa";
	
	char *result1 = ft_strncat(word1, word2, 5);
	printf("Esperado: (matheus leon)\n");
	printf("Resultado: (%s)\n", word1);
	printf("Retornado: (%s)\n", result1);
	printf("\n");
	char *result2 = ft_strncat(word1, word3, 2);
	printf("Esperado: (matheus leon c)\n");
	printf("Resultado: (%s)\n", word1);
	printf("Retornado: (%s)\n", result2);
}
