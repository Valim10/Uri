#include<stdio.h>
#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<queue>
#include<iostream>

using namespace std;
    
int _count=0;    
vector<int> vet;
    
vector<int> merge_part(vector<int> lado_a, vector<int> lado_b){
    int i = 0, j = 0;
    vector<int> r;
    while(i<lado_a.size() && j<lado_b.size()){
        if(lado_a[i] < lado_b[j]){
              r.push_back(lado_a[i]);
              i++;
        }else{
              r.push_back(lado_b[j]);
              _count += (int)(lado_a.size()) - i;
              j++;
        }
    }
    while( i < lado_a.size()){
           r.push_back(lado_a[i]);
           i++;
    }
    while(j < lado_b.size()){
           r.push_back(lado_b[j]);
           j++;
    }
    return r;
}
    
vector<int> mergeSort(int esq, int dir){
    vector<int> r,lado_a,lado_b;
    int meio = (esq + dir)/2;
    	
    if(esq + 1 >= dir){
    	r.push_back(vet[esq]);
    	return r;
    }
    	
    lado_a = mergeSort(esq, meio);
    lado_b = mergeSort(meio, dir);
    r = merge_part(lado_a,lado_b);
   	return r;
}
    
int main (){
    int tam, i;
    while(scanf("%d",&tam) && tam ){
        _count = 0; 
        vet.clear();    
        for(i=0;i<tam;i++){
            int x;
            scanf("%d",&x);
      	    vet.push_back(x);
       }	
       mergeSort(0,tam);
    		
       if(_count % 2)
            puts("Marcelo");
       else
           puts("Carlos");
   }
   return 0;
}
    
     
    	
    	
