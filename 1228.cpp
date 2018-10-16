#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	
 int quant_carros=0, mudou=0 ;
 while(scanf("%d",&quant_carros) != EOF){
 	int vet_largada[quant_carros];
 	int vet_chegada[quant_carros];
 	int mudanca[quant_carros];
 	int i = 0 , j = 0;
	
	for (i=0 ; i< quant_carros; i++)
		scanf("%d",&vet_largada[i]);

	for (i=0 ; i< quant_carros; i++)
		scanf("%d", &vet_chegada[i]);
 	
 	for(i= 0 ; i<quant_carros;i++){
	 
 		for ( j = 0 ; j < quant_carros ; j++){
	    	if ( vet_largada[i] == vet_chegada[j])
 				mudanca[j] = i + 30 ;
    		}
	}
	
	for(i= 0 ; i<quant_carros;i++){
	 for ( j = i + 1  ; j < quant_carros ; j++){
	
			if(mudanca[i] > mudanca[j]){
				int aux = mudanca[i];
				mudanca[i] = mudanca[j];
				mudanca[j] = aux ;
				mudou++ ;
				
			}
	
		}
	}
	
	printf ( "%d\n", mudou);
	mudou = 0 ;
	
 }
	
 return 0;
}
