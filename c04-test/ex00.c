#include <stdio.h>

int main(void)
{
	char word[22] = "otorrinolaringologista";
	int	result = ft_strlen(word);
	printf("Palavra: %s\nEsperado: 22\nResultado: %d\n", word, result);

	char word1[1] = "";
	int	result1 = ft_strlen(word1);
	printf("\nPalavra: %s\nEsperado: 0\nResultado: %d\n", word1, result1);
}