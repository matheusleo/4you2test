#include <stdio.h>

int	main(void)
{
	char	word1[] = "matheus";
	char	word2[] = "12346";
	char	word3[] = "LEONardo";
	char	word4[] = "matheus Leonardo";

	ft_strupcase(word1);
	ft_strupcase(word2);
	ft_strupcase(word3);
	ft_strupcase(word4);

	printf("Esperado: MATHEUS, Resultado: %s\n", word1);
	printf("Esperado: 12346, Resultado: %s\n", word2);
	printf("Esperado: LEONARDO, Resultado: %s\n", word3);
	printf("Esperado: MATHEUS LEONARDO, Resultado: %s\n", word4);
}
