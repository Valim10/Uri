#include<stdio.h>
#include<iostream>
#include<string.h>
#include<map>
#include<vector>
#include<queue>

using namespace std;

int igual[300000];

int dfs(int pos){
		if(igual[pos] != 0)
			return 1 + dfs(igual[pos]);
		return 1;
}


int main(){
	int n=0,m=0,e=-1;
	
	while(scanf("%d %d",&n,&m) != EOF){
		memset(igual, 0 , sizeof(igual));
		for (int i = 0 ; i<  m ; i++){
			int a=0,b=0;
		 	scanf("%d %d",&a,&b);
		 	igual[a] = b;
		 	
		}
		scanf("%d",&e);
		printf("%d\n",dfs(e));
	}

	
	
	return 0;
}
