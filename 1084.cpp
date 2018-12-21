/*DANIEL VALIM
ID 75884
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

using namespace std;
int main (){
  while(1){
    long int n,d,i;
    long int aux,flag;
    char linha[1000000];
  
    scanf("%ld %ld",&n,&d);
    if(n==0 && d ==0) return 0;
    scanf("%s",linha);
     	
    while(d>0){	
        aux=10;
	    flag=-1;
	    for(i=0;i<strlen(linha);i++){
	        if((linha[i]-'0') == 0){
	   	       flag = i;
		       break; 
	   	    }
		    if(linha[i] != '*' && (linha[i]-'0') < aux ){
			    flag = i;
			    aux = linha[i]-'0';
		    }
	    }
	    linha[flag]='*';
	    d--;  
    }
    aux=0;			
    for(i=0;i<strlen(linha);i++)
	if(linha[i]!='*'){
          aux = (linha[i]- '0') + aux*10;
	}
    	
    printf("%ld\n", aux);	
      
   }


  return 0;

}



/*
#include <stdio.h>
 
typedef struct st { int cont[100001], ind; } st;
char x[100001];
st p;
 
int del(st * p) { return p -> cont[p -> ind--]; }
void put(int v, st * p) { p -> cont[++p -> ind] = v; }
 
int main(int argc, char *argv[]) {
	int n, d, r;
 
	while (scanf("%d%d", &n, &d) == 2 && (n || d)) {
		p.ind = 0;
		
		scanf("%s", x);
		for (int i = 0; i < n; i++) {
			while (p.cont[p.ind] < x[i]-'0' && d > 0 && p.ind > 0)
				r = del(&p), d--;
			put(x[i]-'0', &p);
		}
 
		while (d--) 
			del(&p);
 
		for (int i = 1; i <= p.ind; i++) 
			printf("%d", p.cont[i]);
		 
		printf("n");
	}
 
	return 0;
}

*/
