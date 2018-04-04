#include <iostream>
 
using namespace std;
 
int main() {
 int number=0,htrabalhadas=0;
 double valorhora=0.0;
 scanf("%d %d %lf ",&number,&htrabalhadas,&valorhora);
 printf("NUMBER = %ld\nSALARY = U$ %.2lf\n",number, htrabalhadas*valorhora);
 return 0;
}