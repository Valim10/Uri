/*1062*/
#include<iostream>
#include<stack>

using namespace std;

int main(){
     
 int N=1;
 int i=0;

 while( N != 0){
   scanf("%d",&N);
   if(N == 0) return 0; 
   
   int vet[N],vetvolta[N];
   
   for(i = 0; i< N; i++){
         vet[i] = i+1;
         vetvolta[N-i-1]= i+1;
   }
   int flag_tem_ida = 0;
   int flag_tem_volta =0;

   while(1){
       int vet2[N];
       for(i = 0; i< N; i++){
           scanf("%d",&vet2[i]);
           if(vet2[0] == 0){
           	 printf("\n");
             break;
            }
       }
       if(vet2[0] == 0){
               break;
       }
       
       for(i = 0 ; i < N ; i++){
            
           if( vet[i] == vet2[i]  ){
           	flag_tem_ida ++;
		   }
               
             
           if( vetvolta[i] == vet2[i]){
               flag_tem_volta ++;
		   }
			
          
		  
       
	   } 
	   
    if(flag_tem_ida == N){
    	printf("Yes\n");
	}else{
	 	if(flag_tem_volta == N){
	 		printf("Yes\n");	
		 } else{
		 	printf ("No\n");
		 }  
	}
	flag_tem_ida = 0 ;
    flag_tem_volta = 0;
          
   }  
   
  }     
     
     
     
// system("PAUSE");   
 return 0;
}

