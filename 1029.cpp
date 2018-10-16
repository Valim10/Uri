#include<vector>
#include<iostream>
#include<string>
#include<map>
#include<stack>

using namespace std;

int	a = 0;
int fib(int n){
    a = a + 1;
    if(n<=1)
        return n;
    return (fib(n-1) + fib(n-2));
 }

int main(){
	
	int nb=0;
	scanf("%d",&nb);
	while (nb){
	 int n;
    	nb-=1;
   	 scanf("%d",&n);
   	 int b = fib(n);
   	 int c = a-1;
   	 a = 0;
   	 printf ("fib(%d) = %d calls = %d",n,c, b);
	 }
// 	system("pause");
	return 0;
}
