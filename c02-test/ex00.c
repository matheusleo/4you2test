#include <string.h>
#include <stdio.h>

int	main(void)
{
	//Se dest < src, irá ocorrer "stacking smashing"
	char dest[8] = "math";
	char *src = "leonardo";
	ft_strcpy(dest, src);
	printf("Expected: leonardo\nResultado: %s\n", dest);
}
