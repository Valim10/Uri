#include<stdio.h>
#include<stdlib.h>

int main(){

	int dias=0;
	while(scanf("%d",&dias) != EOF){
		int v[dias];
		int lucro_parcial=0,lucro_total=0;
		int i=0;
		int custo=0;
		scanf("%d",&custo);	
		int valor=0;
		for(i=0;i<dias;i++){
			scanf("%d",&valor);		
			v[i]= valor - custo;	
			//printf(" %d\n",v[i]);	
		}

		for(i=0;i<dias;i++){
			lucro_parcial+=v[i];
			//printf(" %d\n",lucro_parcial);
			if(lucro_parcial<0)
				lucro_parcial =0;
			if(lucro_total < lucro_parcial)
				lucro_total = lucro_parcial;
		}
		//if(lucro_total <=0) printf("0\n");
		//else
         printf("%d\n",lucro_total);
	}
	return 0;
}
