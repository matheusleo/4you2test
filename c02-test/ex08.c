#include <stdio.h>

int	main(void)
{
	char	word1[] = "MATHEUS";
	char	word2[] = "12346";
	char	word3[] = "leonARDO";
	char	word4[] = "MATHEUS lEONARDO";

	ft_strlowcase(word1);
	ft_strlowcase(word2);
	ft_strlowcase(word3);
	ft_strlowcase(word4);

	printf("Esperado: matheus, Resultado: %s\n", word1);
	printf("Esperado: 12346, Resultado: %s\n", word2);
	printf("Esperado: leonardo, Resultado: %s\n", word3);
	printf("Esperado: matheus leonardo, Resultado: %s\n", word4);
}
