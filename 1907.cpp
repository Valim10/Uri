#include<vector>
#include<queue>
#include<iostream>
#include<stdio.h>

using namespace std;

int matriz [2000][2000];

void bfs(int x, int y){
	matriz[x][y] = 1;
	if(matriz[x+1][y] == 2) 
		bfs(x+1, y);
	if(matriz[x-1][y] ==2)
		 bfs(x-1, y);
	if(matriz[x][y+1] ==2)
		 bfs(x, y+1);
	if(matriz[x][y-1] ==2)
		 bfs(x, y-1);
}
int main () {
	int n , m , c = 0,i,j;
	char pos;
	scanf ( "%d %d",&n ,&m);
	for( i = 1; i <= n; i++){
		for( j = 1;j <= m;j++){
			cin >> pos ;
			if ( pos == 'o')
				matriz[i][j] = 1;
			else 
				matriz[i][j] = 2;
			
		}
	}
	for( i = 1; i <= n; i++){
		for(j = 1 ; j <= m ; j++){
			if(matriz[i][j]==2){
				bfs(i, j);
				c++;
			}
		}
	}
	printf("%d\n",c);
	c = 0;	
	
   return 0;
}
*/
