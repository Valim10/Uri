#include<vector>
#include<queue>
#include<iostream>
#include<map>
#include<string>
using namespace std;

typedef struct var {
 	int valor,peso;
} var ;

var novo[5000];
int matriz [5000][5000];
int n;

int maior_valor(int i, int peso) {
	if (i == n || peso == 0 )
		return 0;
	if (peso < 0) 
			return -1111111;
	
	int &resposta = matriz[i][peso]; // precisa do endereco da posicao para passar como referencia
	
	if (resposta == -1)
		resposta = max(maior_valor(i + 1, peso), novo[i].valor + maior_valor(i, peso - novo[i].peso));
	return resposta;
}
 
int main(){
	int t,i,j;

	while( cin >> n >> t ){
		for(i=0;i<5000;i++)
			for(j=0;j<5000;j++)
	  			matriz [i][j] = -1;

	    for(i=0 ; i< n; i++)
  			scanf ("%d %d",&novo[i].peso,&novo[i].valor);
		printf("%d\n",maior_valor(0, t));
	}
	return 0;
}


