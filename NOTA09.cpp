/**
 * Problema Notas da prova
 * data: 07/04/14
 * site: SPOJ Brasil
 * codigo: SALDO13
 * status: executado em 0.03 segundos
 * tempo: 145 segundos
**/

#include <cstdio>

int main(){
	int nota;
	scanf("%d", &nota);
	if(nota == 0) printf("E\n");
	if(nota >0 && nota < 36) printf("D\n");
	if(nota >35 && nota < 61) printf("C\n");
	if(nota > 60 && nota < 86) printf("B\n");
	if(nota > 85) printf("A\n");
	return 0;
}