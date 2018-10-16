#include<stdio.h>
#include<vector>
#include<queue>
#include<string>
#include<iostream>
using namespace std;

int main(){
 int n;
 scanf("%d ", &n);
 int i = 0;
 int A[n+10],H=0;
 A[0] = 0;
 A[n+1] = 0;
 for( i = 1; i <= n; i++){
	scanf("%d", &A[i]);
	if (A[i] > A[i-1])
		A[i] = A[i-1] + 1;
 }
  
 for(i = n; i >= 1; i--)
	if (A[i] > A[i+1])
		A[i] = A[i+1] + 1;
	
 for(i = 0; i <= n; i++)
		if (A[i] > H) 
 			H = A[i];

 printf("%d\n", H);
 return 0;

}

