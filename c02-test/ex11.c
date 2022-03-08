#include <stdio.h>

int	main(void)
{
	char *expect_msg = "Espera-se :";
	char *result_msg = "Resulta em: ";

	char *word1="Oi\nvoce esta bem?";
	printf("\n%s Oi\\0avoce esta bem?\n", expect_msg);
	write(1, result_msg, 12);
	ft_putstr_non_printable(word1);
	printf("\n");

	char *word2="Oi\nvoce e\tsta b\vem?";
	printf("\n%s Oi\\0avoce e\\09sta b\\0bem?\n", expect_msg);
	write(1, result_msg, 12);
	ft_putstr_non_printable(word2);
	printf("\n");
}
