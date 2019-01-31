#include<stdlib.h>
#include<stack>
#include<stdio.h>

using namespace std;

int main(){
    int n,i,j, flag, flag1,flag2;
    int nums[1001];
     
    while(1){
         scanf("%d",&n);
         if(n == 0)
            break;
         while(1){
            j = 1;
            flag = 0;
            flag1 = 0;
            stack<int> pilha;
            for(i = 1; i <= n; i++){
                scanf("%d",&nums[i]);
                if(nums[i] == 0){
                      flag = 1;
                      printf("\n");
                      break;
                }
             }
             i = 1;
             while(1){
                   if(i > n || flag1 == 1 || flag == 1) break;
                   while(1){
                            if(!pilha.empty() && pilha.top() == nums[i]){
                                            pilha.pop();
                                            break;
                            }else if(j <= n){
                                  pilha.push(j);
                                  j++;
                                  if(pilha.top() == nums[i]){
                                            pilha.pop();
                                            break;
                                  }
                             }else{
                                   flag1 = 1;
                                   break;
                             }
                   }
                   i++;
                    
             }
             if(flag == 1) break;
             if(pilha.empty()) printf("Yes\n");
             else  printf("No\n");
             }
    }
    return 0;
} 
