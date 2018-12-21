#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>
#include<set>
#include<cstdio>

using namespace std;
/*
void mergeSort(int *vetor, int posicaoInicio, int posicaoFim) {
    int i, j, k, metadeTamanho, *vetorTemp;
    if(posicaoInicio == posicaoFim) return;
    metadeTamanho = (posicaoInicio + posicaoFim ) / 2;

    mergeSort(vetor, posicaoInicio, metadeTamanho);
    mergeSort(vetor, metadeTamanho + 1, posicaoFim);

    i = posicaoInicio;
    j = metadeTamanho + 1;
    k = 0;
    vetorTemp = (int *) malloc(sizeof(int) * (posicaoFim - posicaoInicio + 1));

    while(i < metadeTamanho + 1 || j  < posicaoFim + 1) {
        if (i == metadeTamanho + 1 ) { 
            vetorTemp[k] = vetor[j];
            j++;
            k++;
        }
        else {
            if (j == posicaoFim + 1) {
                vetorTemp[k] = vetor[i];
                i++;
                k++;
            }
            else {
                if (vetor[i] < vetor[j]) {
                    vetorTemp[k] = vetor[i];
                    i++;
                    k++;
                }
                else {
                    vetorTemp[k] = vetor[j];
                    j++;
                    k++;
                }
            }
        }

    }
    for(i = posicaoInicio; i <= posicaoFim; i++) {
        vetor[i] = vetorTemp[i - posicaoInicio];
    }
    free(vetorTemp);
}
*/
int main(){


  int s, i , j, cont=0;
// while(1){
  scanf("%d",&s);
  if( s == 0 ) return 0;
//  int quadra[s];
//  int noglo[s];
  multiset <int> noglo;
  multiset<int>::iterator a,b;
  multiset<int> quadra;

  for( i = 0 ; i < s ; i++){
      //scanf("%d",&quadra[i]);
      int va ;
      scanf("%d",&va);
      quadra.insert(va);
  }
 // mergeSort(quadra,0,s-1);  
  for( i = 0 ; i < s ; i++){
//    scanf("%d",&noglo[i]);
      int va ;
      scanf("%d",&va);
      noglo.insert(va);
  }
//  mergeSort(noglo,0,s);
/*
      for(i=0;i<s;i++){
      	for(j=0;j<s;j++)
             if(noglo[i]>quadra[j]){
                cont++;
              break;
              }
      } 
*/
 for(a=quadra.begin();a!=quadra.end();a++){
	 for(b=noglo.begin();b!=noglo.end();b++)
	 		if (*b > *a ){
//	 			printf ("%d < %d ",*a,*b);
	 			  cont++;
	 			  multiset<int>::iterator it;
				  it=noglo.find(*b);
	 			  noglo.erase(*it);
	 			  break;
			 }
 	
  }       
      
      
      printf("%d\n",cont);
      cont=0;
//  }
 return 0;
}
