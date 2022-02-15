//NENHUMA SEGURANÇA DE EXATIDÃO É DADA EM RELAÇÃO A ESTE TESTE#include <string.h>
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	word1[20] = "matheus";
	char	*word2 = " leo";
	char	result1 = ft_strlcat(word1, word2, 10);
	printf("%d\n", result1);
	printf("(%s)\n", word1);
	printf("%s\n", word2);
}
