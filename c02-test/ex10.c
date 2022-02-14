#include <stdio.h>

int	main(void)
{
	char	dest[20] = "math";
	char	*src = "leonardo";
	int	result = ft_strlcpy(dest, src, 9);
	printf("Esperado: 8\nResultado: %d\n", result);
	printf("Esperado: (leonardo)\nResultado: (%s)\n", dest);
	printf("\n");
	char	dest2[5] = "math";
	char	*src2 = "leonardo";
	int	result2 = ft_strlcpy(dest2, src2, 5);
	printf("Esperado: 8\nResultado: %d\n", result2);
	printf("Esperado: (leon)\nResultado: (%s)\n", dest2);
}
