#include<stdio.h>
#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<queue>

using namespace std;

int n;
int resposta[100010];

int buscaBinaria(int vet[], int chave){
	int sup = n - 1;
	int meio = 0;
	int inf = 0;
	 
	while (inf <= sup){
        meio = inf + (sup-inf)/2;
        if (chave !=  vet[meio]){
		   if (chave < vet[meio])
        	  	sup = meio-1;
        	else
            	inf = meio+1;
        }else{
		
            	return meio;
    	}
    }
    return -1;
}

int main (){
	
	while(cin >> n){
		int comb=0; 
		int mede=0;
		int pontos_triangulares=0;
	
		for (int i = 0; i < n; i++){
			scanf("%d",&mede);
			comb= comb + mede;
			resposta[i] = comb;
		}
		if (comb % 3 == 0){
			comb = comb/3;
			for (int i = 0 ; i < n; i++){
				int valor = buscaBinaria(resposta, resposta[i]+comb) ; //verifica a primeira posicao 
				if ( valor != -1){
					valor =buscaBinaria(resposta, resposta[i]+2*comb); // verifica para se a proxima posicao tambem eh
						if ( valor != -1)
							pontos_triangulares++;
				}
			}
			printf("%d\n",pontos_triangulares);
		}else{
			printf("0\n");
		}
	}
	return 0;
}
