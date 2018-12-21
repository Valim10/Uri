#include<stdio.h>
#include<math.h>
#include<cstring>
#include<stdlib.h>
using namespace std;

int main(){
    float result = 0;
    int r1=0,x1=0,y1=0,r2=0,x2=0,y2=0;
    while((scanf("%d %d %d %d %d %d",&r,&x1,&y1,&r,&x2,&y2))!=EOF){
        
		result=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
        
		if(r1<result+r2) printf("MORTO\n");
        else printf("RICO\n");
    }
    return 0;
}
