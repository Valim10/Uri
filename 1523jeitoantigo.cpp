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
         	   
			   if ( estacionamento.size() <= k ) {
    	     	     if(nafila.saida <= c[i].chegada ) {
					    estacionamento.pop();
					     if(!estacionamento.empty()){
						 	   	nafila = estacionamento.top();
   	     	      		 		if(nafila.saida > c[i].chegada &&  nafila.saida < c[i].saida ){
   	 									flag_nao = 1;
										printf ("Nao\n");
										break;
									}else{
										if( nafila.saida > c[i].chegada && nafila.saida > c[i].saida){
												   estacionamento.push(c[i]);
									    }else{
											if( nafila.saida == c[i].chegada){
												estacionamento.pop();
												estacionamento.push(c[i]);
											}else {
																							flag_nao = 1;
											printf ("Nao\n");
											break;

											}
												
										}
								  	}
						   }else
			     		     estacionamento.push(c[i]);
					  }else
             	      	 if(nafila.saida < c[i].saida ){
		    				flag_nao = 1;
         	        	    printf("Nao\n");
         	      	        break;
         	        	 }else
	   	     	      		estacionamento.push(c[i]);
   	     	      	
		 	  }else{
		 	  		flag_nao = 1;
   	        	    printf("Nao\n");
   	        	    break;
			   } 
		  }
  		   
   }
   if (!flag_nao)
  		printf ("Sim\n");
		
  
  }
		
 return 0;
 }
