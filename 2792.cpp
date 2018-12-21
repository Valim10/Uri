#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<vector>
#include<queue>

using namespace std;

typedef struct v {
	int value;
} ve;
ve v[1000000];
int main(){
	int n;
	scanf("%d",&n);	
	for(int i = 1 ; i <= n ; i++ ){
		v[i].value = i;
	}
	int retira;
	int n1 = n;
	for(int i = 1 ; i <= n ; i++ ){
		scanf("%d",&retira);
		if(i>1) printf(" ");
		for(int x = 1 ; x <=retira;x++)
			if(retira == v[x].value){
				printf ("%d",x);
				v[x].value = 0;
				for (int j = x; j<n1;j++)
					v[j].value = v[j+1].value;
				break;
			}	 
		n1--;
	}
	printf("\n");
return 0;
	
}

//https://stackoverflow.com/questions/33440550/optimizing-fenwick-tree-c
