#include<stdio.h>
#include<string>
#include<map>
#include<vector>
#include<queue>
#include<stack>

using namespace std;

int main (){
	
	int flag  = -1;
	while(1){
	 int quant_vagoes = 0;	
	 scanf("%d",&quant_vagoes);
	 if(!quant_vagoes) break;
	 //stack <int> inicio,meio,fim;
	 
	 
	 int entrada = 1;
	 while(1){
	 		stack <int> inicio2;

     		 for(int i = 0 ; i < quant_vagoes ; i++){
			 	inicio2.push(i+1);
			 }		

	 		stack <int> meio2 ;
	 		stack <int> fim2 ;
	 		int v[quant_vagoes];
	 		for(int i = 0 ; i < quant_vagoes; i++){
	 			scanf("%d",&v[i]);
				printf("li");

	 			if( v[i] == 0){
					//printf("\n");
					break;
		 		}	 
			}
			if (v[0] == 0) {
				printf("\n");
				//printf("achei zero");
				break;
			}	
		 		
			int b = 0;
			while(b<quant_vagoes){
							printf("passei aqui \n");

					if (v[b] == inicio2.top()){
						inicio2.pop();
				 		fim2.push(v[b]) ;
				 		b++;
					}else{
						if (v[b] == meio2.top()){
							meio2.pop();
					 		fim2.push(v[b]);
					 		b++;
						}else{
							while(v[b] !=  inicio2.top() && !inicio2.empty()){
						   		int a = inicio2.top();
						   		inicio2.pop();
						   		meio2.push(a);
							}
							if( v[b] == inicio2.top()){
								fim2.push(inicio2.top());
								inicio2.pop();
								b++;
							}

						}

						
					}
				
			}		
			//printf("passei aqui \n");
			if( fim2.size() == quant_vagoes)
				printf("Yes\n");
			else
				printf("No\n");
 
	 	}
			

	}
 return 0;
}
