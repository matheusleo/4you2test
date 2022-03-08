#include <stdio.h>
#include <unistd.h>
void	test(int c_size)
{
	char			*source;
	char			dest[19];
	unsigned int	result;

	source = "Hello there, Venus";
	result = ft_strlcpy(dest, source, c_size);
	//Print expected result
	write(1, "Resultado esperado: ", 21);
	write(1, source, c_size - 1);
	write(1, "\n", 1);
	//Print program output
	printf("DEST String: (%s)\nSRC Size: %d\nComprimento: %d\n\n", dest, c_size, result);
}

int	main(void)
{
	test(19);
	test(10);
	test(1);
	test(0);
}
