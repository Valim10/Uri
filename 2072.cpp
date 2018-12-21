#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<queue>
#include<map>
#include<stack>
using namespace std;

int main(){
	int quant;
	scanf("%d",&quant);
	for(int i = 0; i<quant;i++){
		int linhas=0;
		scanf("%d",&linhas);
		int matriz[linhas][3];
		for(int l = 0 ; l < linhas;l++){
			for(int c; c < 3 ; c++){
				scanf("%d",&matriz[l][c]);
			}
			
		}
	}

 	return 0;
}
