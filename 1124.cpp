#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<queue>
#include<map>
#include<stack>
using namespace std;
int main(){
	int l,c,r1,r2;
	while( scanf("%d %d %d %d",&l,&c,&r1,&r2)){
		if(!l&&!c&&!r1&&!r2) return 0;
		int comprimentoCI = (r1+r2)*2;
		int c1=r1*2;
		int c2=r2*2;
	//	 if( l*c >= (3,1415*r1*r1) + (3,1415*r2*r2))
	//	 	printf("S\n");
	//     else
	//     	printf("N\n");
		if(min(l,c) < max(c1,c2))
			 printf("N\n");
		else{
			r1 += r2;
	        l -= r1; 
	        c -= r1;
	        
	        if(r1 * r1 > ((l * l) + (c * c)))
				printf("N\n");
	        else
				printf("S\n");
		}
	}
 	return 0;
}


