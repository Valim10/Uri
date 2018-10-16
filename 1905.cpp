#include<string>
#include<iostream>
#include<vector>
#include<stack>
#include<queue>

using namespace std;

int matriz[5][5];

int direcao[4][2] = {1, 0,
					-1, 0,
					 0, -1,
					 0, 1
					};

 
int limite(int i, int j) {
	return i >= 0 && i < 5 && j >= 0 && j < 5;
}	

vector<int>passou;

void dfs(int i, int j) {
	if (matriz[i][j]) return;
	if (!limite(i, j)) return;
	if (passou[5 * i + j]) return;
	passou[5 * i + j] = 1;
	for (int pos = 0 ; pos < 4; pos++)
		dfs(i + direcao[pos][0], j + direcao[pos][1]);
	
}

int main (){
	int qtestes;
	scanf("%d",&qtestes);
	while(qtestes){
		int flag_cops = 0, pol_linha= 0,pol_coluna= 0;
		qtestes--;
		for (int i = 0 ; i < 5 ; i++)
			 for(int j = 0 ; j < 5 ; j++)
			 		scanf("%d",&matriz[i][j]);
			 		
	  passou.assign(26,0); 	
	  dfs(pol_linha,pol_coluna);			 
	  flag_cops = passou[24];				 
	  if(flag_cops) printf("COPS\n");
	  else printf("ROBBERS\n");
	  	
	}
	return 0;
}
