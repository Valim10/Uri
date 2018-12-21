#include <iostream>
#include <string.h>
#include <queue>
#include<map>
#include<vector>
#include<stdio.h>

using namespace std;

int dist[200000];
int conta(int u){
	int reverso=0;
	while(u>0){
		reverso *= 10;
		reverso += u%10;
		u/=10;
	}
	return reverso;
}
int main(){
	int t=0, a=0, b=0,u=0,reverso=0;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		scanf("%d %d",&a,&b);
		memset(dist, -1, sizeof(dist));
		queue<int> fila;
		dist[a] = 0;
		fila.push(a);
		while(!fila.empty()){
			if(dist[b]!=-1) 
			    break;
			u= fila.front();
			fila.pop();
			reverso = conta(u);
			if(dist[reverso]==-1){
				dist[reverso]= dist[u]+1;
				fila.push(reverso);
			}
			if(dist[u+1]==-1){
				dist[u+1] = dist[u]+1;
				fila.push(u+1);
			}
		}
		printf("%d\n",dist[b]);
	}
	return 0;
}

