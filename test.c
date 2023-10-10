#include <stdio.h>

#define ELEITORES 5

void votacao (int votos[]);
void apuracao (int votos[]);

int votos[ELEITORES];

void main () {
	votacao(votos);

	apuracao(votos);
}

void votacao (int votos[]) {
	for (int i = 0; i < ELEITORES; i++) {
		scanf("%d", &votos[i]);
	}
}

void apuracao (int votos[]) {
	int bart = 0, homer = 0, nulos = 0;

	for (int i = 0; i < ELEITORES; i++) {
		if (votos[i] == 1) {
			bart++;
		} else if (votos[i] == 2) {
			homer++;
		} else {
			nulos++;
		}
	}

	if (bart > homer) {
		printf("Mais votado: Bart\nQuantidade de votos: %d\n\nMenos votado: Homer\nQuantidade de votos: %d\n\nQuantidade de votos nulos: %d\n", bart, homer, nulos);
	} else if (homer > bart) {
		printf("Mais votado: Homer\nQuantidade de votos: %d\n\nMenos votado: Bart\nQuantidade de votos: %d\n\nQuantidade de votos nulos: %d\n", homer, bart, nulos);
	} else {
		printf("Empate!\nVotos em Bart: %d\nVotos em Homer: %d\nQuantidade de votos nulos: %d\n", bart, homer, nulos);
	}
}
