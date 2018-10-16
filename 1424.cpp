#include<stdio.h>
#include<iostream>
#include<vector>
#include<stack>
#include<queue>
#include <map>
using namespace std;

int main () {
  int tam , consulta= 0;
  while(scanf("%d %d", &tam,&consulta) != EOF){
  	int valor = 0 ,i = 0;
 	int vetor[tam];
 	map<int, vector<int>  > resposta;
	for(i=0; i<tam;i++){
	   int numero;	
 	   scanf("%d",&numero);
 	   resposta[numero].push_back(i+1);//adiciona no vetor, a ocorrencia na posicao determinada
 	} 
 	for(i=0;i<consulta;i++){
	    int count = 0, ocorrencia=0 ;
   		scanf("%d %d",&ocorrencia,&valor );
 	 		if( ocorrencia > resposta[valor].size() )
				printf ("0\n");
	 		else
 				printf ("%d\n",resposta[valor][ocorrencia-1]);
 	}
 } 	
	
 return 0;
}
