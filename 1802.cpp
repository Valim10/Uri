#include<iostream>
#include<map>
#include<string>
#include<vector>
#include<queue>

using namespace std;

int main (){
	int  i = 0;
    int  p;
    scanf("%d",&p);
    int vetp[p];	 
    for(int j = 0 ; j < p;j++){
   	 	scanf("%d",&vetp[j]); 
    }		
	
    int  m ;
    scanf("%d",&m);
    int vetm[m];	 
    for(int j = 0 ; j < m;j++){
   	 	scanf("%d",&vetm[j]); 
    }		
	
    int  q ;
    scanf("%d",&q);
     int vetq[q];	 
    for(int j = 0 ; j < q;j++){
   	 	scanf("%d",&vetq[j]); 
    }		
 
    int  f ;
  	scanf("%d",&f);
    int vetf[f];	 
   	for(int j = 0 ; j < f;j++){
   	 	scanf("%d",&vetf[j]); 
	}		

 
    int  b ;
   	scanf("%d",&b);
    int vetb[b];	 
   	for(int j = 0 ; j < b;j++){
   	 	scanf("%d",&vetb[j]); 
	}		
	  
	int k=0;
	scanf("%d",&k);
	
	int vet[p* f* m* b* q];
	int x , y , z , a  , w ;
	for( y = 0 ; y < p*f*m*b*q ; y++)
	    vet[y] = 0;
	 
	for (x = 0 ; x<p;x++)
		for (y = 0 ; y<f;y++)
      		for (z = 0 ; z<m;z++)
            		for (a = 0 ; a<b;a++)
							for (w = 0 ; w<q;w++)
								  vet[((x)*(p-1))+((y)*(f-1))+((z)*(m-1))+((a)*(b-1))+((w))]= vetp[x] + vetf[y] +  vetm[z] +  vetb[a] +  vetq[w] ;  
     
    int soma = 0, soma_parcial = 0 ;	 
    
	for( i = 0 ; i < k ; i++){
    	soma_parcial = 0 ;
    	for( y = 0 ; y < p*f*m*b*q ; y++){
		
//    	    printf("%d ", vet[y]);
    		if (vet[y] > soma_parcial ){
    			int aux = 0;
    	        if( soma_parcial > 0)
			 	      aux = soma_parcial ;
			    soma_parcial = vet[y];

   	 	        if( aux > 0)
  		   	       vet[y]= aux;	    			
	
   			}
    	}
    	soma = soma + soma_parcial;    	    		

	}
	
    printf ("%d",soma);
	

	return 0;
}
