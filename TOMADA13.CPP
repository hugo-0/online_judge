/**
 * Problema Tomadas
 * data: 07/04/14
 * site: SPOJ Brasil
 * codigo: TOMADA13
 * status: executado em 0.00 segundos
 * tempo: 47 segundos
**/

#include <cstdio>

int main(){
	int a, b, c, d, resp;
	scanf("%d%d%d%d", &a, &b, &c, &d);
	resp = a + b + c + d - 3;
	printf("%d\n", resp);
	return 0;
}