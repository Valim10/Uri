#include<stdio.h>
#include<iostream>
#include<vector>
#include<queue>


using namespace std;
/*
int main(){
  int c, f,n,d , count=0;
  while(!c && !c){
  scanf ("%d %d",&n,&d); 
  
  
  
   printf("TESTE %d\n%d\n\n",count++,quant);
   
    scanf("%d %d",&c , &f);	
    
 }
	
	
	
	return 0;
}
*/

typedef struct {
   int n;
   int d;
}vet;

int main(){
  int contador=0, c=0, f=0, d=0, n=0, pos=-1,tam=0,quant=0,i;
   
 while(1){
	quant = 0;
	tam = 0;
	scanf("%d %d",&c ,&f);
	vet v[f];
	if( c == 0 && f == 0) return 0;
   
   
	for( i =0;i<f;i++){
		scanf("%d %d",&v[i].n,&v[i].d);
   	   	   
    }
     int aux=0;
     while(f>aux && tam<c){
       d= 0;
      for(i=0;i<f;i++){
        if(v[i].d > d ){
          n = v[i].n;
          d = v[i].d;
          pos = i;
        } 
      }
      if(tam + v[pos].n <=c ){  
         tam = tam + v[pos].n;
         quant =quant + v[pos].d;
          
 
         v[pos].n=0;
         v[pos].d=0;
       }
       aux++;      
    }
  contador++;
  printf("Teste %d\n%d\n",contador,quant);
   
  }  
 
 return 0;
}
