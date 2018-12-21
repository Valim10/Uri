#include<stdio.h>
#include<queue>
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include <stdlib.h>;

using namespace std;


int flag(int *v,int i , int n, int compra, int j){
	if(i == n && compra != 0) return 0;
	if(j==n) return 0;
//	printf ("%d compra ",compra);
	if(compra == 0 ) return 1;

	if (compra - v[i] == 0)    
		return 1;
	
	if (compra - v[n-1] == 0)    
		return 1;

	if (compra - v[n-j-1] == 0)    
		return 1;


	if( compra - v[i]  >= 0 )
      return  flag ( v, i+1 , n, (compra - v[i] ),j);
    else 
		if(compra - v[n-j-1] >= 0)
	   		return  flag ( v, i+1,n, compra - v[n-j-1],j+1 );
	   	 else 
	   	 	return  flag (v, i+1,n, compra,j+1);
	      
   
  return 0 ;
	
}

int main(){
	
 int v , m;
 int i,j;
 scanf("%d %d",&v,&m);
 int vet[m];
 for(i=0;i<m;i++)
 	scanf("%d",&vet[i]);

 
 
 if( flag(vet,0,m,v,0) )
	 printf("S\n");	
 else
	 printf("N\n");	
 
 return 0;
}
