#include <stdio.h>
#include <string.h>
#include<queue>
#include<vector>
#include<map>

using namespace std;

int main(){
  int  meta=0, somatorio=0, teste=0, i, j,x, y, n, v_max=0, valor[100];
  char pos[10500];
  
  while(scanf("%d %d %d",&x,&y,&n)){
  	 if(!x&&!y&&!n) return 0;
  	 
      somatorio = 0;
      teste++;
      for (i = 0;i<n;i++){
		  scanf("%d",&valor[i]);
		  somatorio += valor[i];
	  }
      printf("Teste %d\n",teste);
      meta = (somatorio + x + y) % 2 ;
      if (meta != 0){
	  		printf("N\n\n");
      }else{
	  		meta = (somatorio + x + y) / 2 - x;
	  		memset(pos, 0, sizeof(pos));
	  		pos[0] = 1;
	  		v_max = 0;
	  		for (i = 0;i<n && !pos[meta];i++){
	      		for (j = v_max; j >= 0; j--){
				    if (pos[j])
		  				pos[j+valor[i]] = 1;
	      		}
				v_max += valor[i];
	    	}
	    	if(pos[meta])
		  		printf("S\n\n");
		  	else
			  printf("N\n\n"); 
		}      
    }
  return 0;
}
