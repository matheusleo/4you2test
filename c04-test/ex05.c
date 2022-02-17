#include <stdio.h>

int	main(void)
{
    int result1 = ft_atoi_base("-ofe", "poneyvif"); //OCTAL
	printf("Esperado: -123\nResultado:%d\n\n", result1);\

	int result2 = ft_atoi_base("4D2", "0123456789ABCDEF"); //HEXADECIMAL
	printf("Esperado: 1234\nResultado:%d\n\n", result2);

    int result3 = ft_atoi_base("-10011010010", "01"); //BINARIA
	printf("Esperado: -1234\nResultado:%d\n\n", result3);
}
