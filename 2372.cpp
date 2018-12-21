#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>

using namespace std;
typedef struct st{
	int cidade_a;
	int cidade_b;
	int dist;
} st;

int main (){
 int n,m;
 scanf("%d %d",&n,&m);
 n = n-1;
 st novo[n]; 
 int matriz[n][n];
 
 int result = 0;
 int i = 0;		
 while(m>0){
 	int u,v,w;
 	scanf("%d %d %d",&u,&v,&w);
 	novo[i].cidade_a = u;
	novo[i].cidade_b = v;
	novo[i].dist = w;
	i++;
	m--;
 }
 //procurando
 printf("%d\n",result);
	
 return 0;
}
