#include<stdio.h>
#include<iostream>
#include<string>
#include<map>
#include<cstdio>
#include<cstring>
using namespace std;

int main (){
 int casos, i ;
 map<string,int>::iterator y;
 map<string,int> lista;
 scanf("%d",&casos);
 string nomes;
 cin.ignore();
 cin.ignore();
 for ( i = 0 ; i< casos ; i++){
 	string nomes2 ="";
 	double quant_nomes = 0;
 	double valor = 0;
	 while (getline(cin,nomes)){
	   if(!nomes.size()){
	      break;
	    }else{
	   	  quant_nomes++;
	   	  lista[nomes]++;
	     }
		}
	   for( y = lista.begin() ; y != lista.end() ; y++ ) {
	   	 valor = (y-> second / quant_nomes) * 100.0;
	   	 nomes2 = y->first;
	   	 printf("%s %.4f\n",nomes2.c_str() ,valor);
	   }
	   
	  printf("\n");	
  }
  return 0;
}
