#include <stdio.h>

int	main(void)
{
	printf("Esperado: -ofe\nResultado: \n");
	ft_putnbr_base(-123, "poneyvif"); //OCTAL

	printf("\n\nEsperado: 4D2\nResultado: \n");
	ft_putnbr_base(1234, "0123456789ABCDEF"); //HEXADECIMAL

	printf("\n\nEsperado: -10011010010\nResultado: \n");
	ft_putnbr_base(-1234, "01"); //BINARIO

	printf("\n\nEsperado: nada\nResultado: \n");
	ft_putnbr_base(-1234, "0"); //nada

	printf("\n\nEsperado: nada\nResultado: \n");
	ft_putnbr_base(-1234, "1"); //nada
}