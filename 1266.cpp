#include <stdio.h>
#include<iostream>
using namespace std;

int main(){
	int n ;
    scanf("%d",&n);
    if(n == 0) return 0;
    
    while(n){
        int conta_zero = 0;
        int soma = 0;
        int flag_inicio = 0;
        int poste = 0;
        int pos;
        int i=0;
        for(i = 0; i < n; i++){
                scanf("%d", &pos);
                if(pos == 0 && flag_inicio == 0){
                    conta_zero++;
                    poste++;
                }
				if(pos == 0 && flag_inicio == 1)
				    poste++;
                
                        	
				if(pos == 1){
                    flag_inicio = 1;
                    soma += poste/2;
                    poste = 0;
                }
        }
        if(poste){
            soma -= conta_zero/2;
            poste += conta_zero;
            soma += poste/2;
        }
        printf("%d\n", soma);
      	scanf("%d",&n);
        if(n == 0) return 0;
    }
    return 0;
}
