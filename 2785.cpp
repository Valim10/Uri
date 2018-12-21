#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<map>
#include<vector>
using namespace std;

int main(){
 int i=0, j=0, k=0;
 int matriz[101][101];
 int somatorio[101][101][101];
 int n;

 while(scanf("%d", &n) != EOF){
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
		    scanf("%d", &matriz[i][j]);
            
    for(i = 0; i < n; i++){
        for(k = 0; k+i < n; k++){
        	if(i==0)
        		somatorio[i][k][k+i] = 0;
        	else
        		if(somatorio[i-1][k+1][k+i] < somatorio[i-1][k][k+i-1])
        			somatorio[i][k][k+i] = somatorio[i-1][k+1][k+i];
				else
					somatorio[i][k][k+i] = somatorio[i-1][k][k+i-1];
            for(j = k; j <= k+i; j++){
                somatorio[i][k][k+i] += matriz[i][j];
            }
        }
    }
    printf("%d\n", somatorio[n-1][0][n-1]);
 }
 return 0;
}
