#include <stdio.h>

int main(void)
{
	char phrase1[] = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	char phrase2[] = "heLLO theRe! GenERAL KeNoBi!";
	ft_strcapitalize(phrase1);
	ft_strcapitalize(phrase2);
	printf("Esperado: Oi, Tudo Bem? 42palavras Quarenta-E-Duas; Cinquenta+E+Um\nResultado: %s\n", phrase1);
	printf("\n");
	printf("Esperado: Hello There! General Kenobi!\nResultado %s\n", phrase2);
}
