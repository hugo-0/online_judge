/**
 * Problema Saldo do Vovo
 * data: 07/04/14
 * site: SPOJ Brasil
 * codigo: SALDO13
 * status: executado em 0.00 segundos
 * tempo: 300 segundos
**/

#include <cstdio>

int main() {
	int n, dinheiro, menor, transacao;
	scanf("%d%d", &n, &dinheiro);
	menor = dinheiro;
	for(int i=0; i<n; i++){
		scanf("%d", &transacao);
		dinheiro += transacao;
		if(menor > dinheiro) menor = dinheiro;
	}
	printf("%d\n", menor);
	return 0;
}