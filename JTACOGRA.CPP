/**
 * Problema Tacografo
 * data: 07/04/14
 * site: SPOJ Brasil
 * codigo: JTACOGRA
 * status: executado em 0.03 segundos
 * tempo: 147 segundos
**/

#include <cstdio>

int main(){
	int n, total=0, vel, km;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d%d", &vel, &km);
		total += vel*km;
	}
	printf("%d\n", total);
	return 0;
}