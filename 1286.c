#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_PEDIDOS 20
#define MAX_PIZZAS 30

typedef struct no{
	int tempo;
	int entrega;

}entrega;



int matriz[MAX_PEDIDOS+1][MAX_PIZZAS+1];
entrega vetor[MAX_PEDIDOS];



int valor_retorna(int linha, int coluna){
	
	if(matriz[linha][coluna] == -1){
		if(coluna < vetor[linha-1].entrega){
			matriz[linha][coluna] = valor_retorna(linha-1,coluna);
				
		}else{
			int a = vetor[linha-1].tempo + valor_retorna(linha-1,coluna- vetor[linha-1].entrega) ;
			int b = valor_retorna(linha-1,coluna) ;
			if(b>a)
				matriz[linha][coluna]=b;
			else
				matriz[linha][coluna]=a;
		}
	}		
	return matriz[linha][coluna];
}

int main(){

	int pedidos=0, maxPizza=0;
	scanf("%d",&pedidos);
	while(pedidos !=0){
		scanf("%d",&maxPizza);
		//entrega v[pedidos];
		int i=0;
		int aux = pedidos;

		while(aux >0){
			scanf("%d %d",&vetor[i].tempo,&vetor[i].entrega);
			
		//printf("t- %d e-%d\n",vetor[i].tempo,vetor[i].entrega);
			i++;
			aux--;
		}
		for(i=0;i<=MAX_PEDIDOS;i++){
			for(aux=0;aux<=MAX_PIZZAS;aux++){
				if(i!=0 && aux!=0)				
					matriz[i][aux]=-1;
				else
					matriz[i][aux]=0;
		//printf("%d|",matriz[i][aux]);	
			}		
		//printf("\n");
		}

	printf("%d min.\n",valor_retorna(pedidos,maxPizza));
	//	printf("%d min.\n",matriz[pedidos][maxPizza]);
		

		scanf("%d",&pedidos);
	}
	return 0;
}
