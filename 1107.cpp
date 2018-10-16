#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
int main(){
	int altura = 0;
	int comprimento = 0;
	int i  = 0 ;
	long int saida = 0 ;
	
	while (1){
		scanf("%d", &altura);
		scanf("%d", &comprimento);
		if (!altura && !comprimento) return 0;
		int vet[comprimento];
		
		while(i < comprimento){
			scanf("%d", &vet[i]);
			if(i == 0) {
				saida = altura - vet[i];
			}else {
				if ( vet[i-1] > vet[i])
					saida += vet[i-1] - vet[i];
			}
			i++;
		}
	 printf("%li\n", saida);
	 i = 0;
	 saida = 0; 
	 	
	}
	
return 0;

}
