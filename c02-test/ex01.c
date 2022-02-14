#include <stdio.h>
#include <string.h>

int	main(void)
{
	//Se dest < src, "stacking smash"
	char dest[8] = "matheus";
	char *src = "leonardo";
	ft_strncpy(dest, src, 8);
	printf("Esperado: leonardo\nResultado: %s\n", dest);
	printf("\n");
	char dest1[4] = "math";
	ft_strncpy(dest1, src, 4);
	printf("Esperado: leonleonardo\nResultado: %s\n", dest1);
}
