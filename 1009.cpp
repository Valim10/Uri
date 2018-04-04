#include <iostream>
 
using namespace std;
 
int main() {
 char nome;
 double venda,salario , x;
 scanf("%s %lf %lf ",&nome,&salario,&venda);
 x = salario + (venda*15)/100;
 printf("TOTAL = R$ %.2f\n",x); 
 return 0;
}