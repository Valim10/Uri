#include<stdio.h>
#include<iostream>
#include<string.h>
#include<map>
#include<vector>
#include<queue>

using namespace std;

int visitou[3000];
int adjancencia[3000][3000];


void dfs(int pos, int qtd_vertice){
	visitou[pos] = 1;
	for(int j=0;j<qtd_vertice;j++){
		if(adjancencia[pos][j] && !visitou[j] ) 			
			dfs(j, qtd_vertice);
	}
		
}


int main(){
	int n=0,m=0;
	
	while(scanf("%d %d",&n,&m)){
		if (n==0 && m ==0) return 0;
		memset(adjancencia, 0, sizeof(adjancencia));
		for (int i = 0 ; i<  m ; i++){
			int v=0,w=0,p=0;
		 	scanf("%d %d %d",&v,&w,&p);
		 	if(p == 2){		 		
				adjancencia[v-1][w-1] = 1;
				adjancencia[w-1][v-1] = 1;
			}else{
				adjancencia[v-1][w-1] = 1;
			}
		}
	    int flag_nao_visitou =0;
		for(int i = 0; i < n; i++){
			memset(visitou, 0, sizeof(visitou));
			dfs(i, n);
			for(int j = 0;j < n;j++)
				if(!visitou[j]){
					flag_nao_visitou = 1;
					break;
				}
		}
		if(flag_nao_visitou)
			printf("0\n");
		else
			printf("1\n");			
	}
	
	
	return 0;
}
