#include <stdio.h>

int	main(void)
{
	char *word1="Oi\nvoce esta bem?";
	ft_putstr_non_printable(word1);
	printf("\nEsperado: Oi\\0avoce esta bem?\n");
	printf("\n");

	char *word2="Oi\nvoce e\tsta b\vem?";
	ft_putstr_non_printable(word2);
	printf("\nEsperado: Oi\\0avoce e\\09sta b\\0bem?\n");
	printf("\n");
}
