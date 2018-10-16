#include<stdio.h>
#include<iostream>
#include<queue>
#include<stack>
#include<vector>
using namespace std;
typedef struct carro
{
  int chegada;
  int saida;
} car;

int main(){

 while (1){
  int n , k , flag_nao = 0;
  scanf("%d %d",&n,&k);
  stack <carro> estacionamento;
  
  
  if(!n && !k) return 0;
  carro c [n];
   for ( int i =  0 ; i < n ; i++){
   	     scanf("%d %d",&c[i].chegada,&c[i].saida);

   }
     
  //n quantidade de carros , k quantidade de vagas no estacionamento
   for ( int i =  0 ; i < n ; i++){
  	 	 if(estacionamento.empty()){
		   estacionamento.push(c[i]);
 	 	 }else{
 	 	 	  carro nafila = estacionamento.top();
         	   
				   	if(nafila.saida <= c[i].chegada ) {
    	     	     	while(c[i].chegada >= nafila.saida && !estacionamento.empty()){
						    estacionamento.pop();
							if(!estacionamento.empty()){
						 	   	nafila = estacionamento.top();
   	     	      		 	}else{
   	     	      		 		break;
							}
   	     	      		 		
   	     	      	    }
   	     	      	}
   	     	      	if(estacionamento.size() >= k){
					   flag_nao = 1;
   	     	      	}else{
					   if(!estacionamento.empty() && c[i].saida > nafila.saida ){
					 		flag_nao = 1;
					  }else{
					  	 estacionamento.push(c[i]);
					  }
					}
     	      	     
   	     }
   	 }
  	 if (!flag_nao)
  		printf ("Sim\n");
  	 else 
  	 	printf("Nao\n");
		
   }
  	
 return 0;
}
