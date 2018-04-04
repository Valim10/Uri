#include <iostream>
 
using namespace std;
 
int main() {
 int a,b;
 double c,x=0.0;
 scanf("%d %d %lf ",&a,&b,&c);
 x += b * c;
 scanf("%d %d %lf ",&a,&b,&c);
 x += b * c;

 printf("VALOR A PAGAR: R$ %.2lf\n",x); 
 return 0;
}