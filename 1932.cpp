#include<stdio.h>
#include<vector>
#include<queue>
#include<string>
#include<iostream>
using namespace std;

int main(){
  int i = 0, n , c , max_atual,max_final,lucro;
  scanf("%d %d",&n,&c);
  int p[n];
  for(i=0; i < n ; i++){
  	scanf("%d",&p[i]);
  	
  }
  
  max_atual= p[0] , max_final = p[0] , lucro = 0;
  
  for( i = 0; i < n; i++) 	{
	if((max_atual > p[i] && (max_atual - p[i] >= c)) || p[i] < max_final) {
		  if(max_atual - max_final - c > 0)
		    	lucro += max_atual - max_final - c;
		  max_atual = p[i];
		  max_final = p[i];  
	}
	if(p[i] > max_atual)
		max_atual = p[i];

  }
	
	if(max_atual - max_final - c > 0)
		lucro += max_atual - max_final - c; 

    printf("%d\n",lucro);


  return 0;
}
