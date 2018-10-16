#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){

	int a , b , c , x , y ;
	int vet [53];
	int vetPrincipe[2];
	int vetPrincesa[3];

 	scanf( "%d %d %d %d %d",&a,&b,&c,&x,&y);
	int flag = 0;
 while (a && b && c && x && y){
 	vet[a]= 1;
 	vet[b]= 1;
 	vet[c]= 1;
 	vet[x]= 1;
 	vet[y]= 1;
 	if (  x > y  ) {

    vetPrincipe[0]= x;
	vetPrincipe[1] = y ;
   } else {
   	
    vetPrincipe[0]= y;
	vetPrincipe[1] = x ;
   	
   }
   
    vetPrincesa[];
 	
 	
 	
 	
 	int principe = 0, princesa = 0;
 	if ( (x > a && x > b )|| (x > a && x > c)   || (x > b && x > c)  ||  (x > b && x > c && x > a) || x > a || x > b || x > c  )
	  principe++;   
	else 
	 princesa++;
	
	if( (y > a && y > b )|| (y > a && y > c)   || (y > b && y > c) || (y > b && y > c && y > a)  || y > a || y > b || y > c  ) 
 		 principe ++;
 		 else princesa++;
   
    for (i = 1 ; i< 53; i++)
    	if ( vet[i]==0 && (i > a || i > b || i > c )  && (i != a ) && (i != b ) && (i != c ) && (i != x )  && (i != y ) && (principe >=1) ) {
		  printf("%d", i);
		  vet[i] = 0;
		  flag = 1;
		  break; 
		}
		
		if(flag ==0)
		printf("-1");

	scanf( "%d %d %d %d %d",&a,&b,&c,&x,&y);
	
 }


 return 0;
}
