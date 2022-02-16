#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	word1[20] = "matheus";
	char	*word2 = " leo";
	char	result1 = ft_strlcat(word1, word2, 10);
	printf("Esperado: 11\nResultado:%d\n", result1);
	printf("\nEsperado: (matheus l)\nResultado: (%s)\n", word1);
}
