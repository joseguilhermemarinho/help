#include <stdio.h>
#include <stdlib.h>

#define ELEITORES 5

int votacao (int votos[]);
void  apuracao (int votos[]);

void main ()
{
	int votos[ELEITORES];

	votos = votacao(votos);

	apuracao(votos);
}

int votacao (votos[])
{
	for (int i = 0; i < ELEITORES; i++)
	{
		votos[i] = scanf("%d\n", &votos[i]);
	}

	return votos;
}

void apuracao (int votos[])
{
	int bart = 0, homer = 0, nulos = 0;

	for (int i = 0; i < ELEITORES; i++)
	{
		if (votos[i] == 1)
		{
			bart++;
		}

		else if (votos[i] == 2)
		{
			homer++;
		}

		else
		{
			nulos++;

		}
	}

	if (bart > homer)
	{
		printf("Mais votado: Bart\nQuantidade de votos: %d\n\nMenos votado: Homer\nQuantidade de votos: %d\n\nQuantidade de votos nulos: %d\n", bart, homer, nulos);
	}

	else if (homer > bart)
	{
		printf("Mais votado: Homer\nQuantidade de votos: %d\n\nMenos votado: Bart\nQuantidade de votos: %d\n\nQuantidade de votos nulos: %d\n", homer, bart, nulos);
	}

	else
	{
		printf("Empate!\nVotos em Bart: %d\nVotos em Homer: %d\nQuantidade de votos nulos: %d\n", bart, homer,  nulos);
	}
}
