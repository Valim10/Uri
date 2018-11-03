#include<stdio.h>
#include<string>
#include<stdlib.h>
#include<map>
#include<queue>
#include<cstring>

using namespace std;

int tabuleiro[2][500][500][500];
int pedra[2][500][500];

int solucao(int i, int j, int is, int js, int t_peca) {
    if(is == js && tabuleiro[t_peca][i][j][is] != -1) {
        return tabuleiro[t_peca][i][j][is];
    } 

    if(is==0 || js == 0) 
        return 0;
        
    if(is==1 && js == 1) 
        return pedra[t_peca][i][j];
        
    int t = 0;

    if(js > is) {
        t += solucao(i, j , is, js/2, t_peca);
        if(t == 0)
            t += solucao(i, j+js/2, is, js-js/2, t_peca);
    }else {
        t += solucao(i,j,is/2,js,t_peca);
        if(t == 0)
            t += solucao(i+is/2,j,is-is/2,js,t_peca);
    }
    if(is == js)
     tabuleiro[t_peca][i][j][is] = t;

    return t;
}

int main() {
    int N, P,L,C,tpeca=0,s,i,j,pecas[2]={0,0};                 
    scanf("%d %d",&N,&P);
    if (N==0 && P==0) return 0;
    memset(tabuleiro, -1, sizeof(tabuleiro));
    memset(pedra, 0, sizeof(pedra));

    for(j = 0; j < 2; j++){ //pedras brancas e pretas
        for(int i = 0; i < P; i++) {
            scanf("%d %d",&L,&C);
            //cada linha e coluna recebe valor pos supondo começa de 0 ateh n-1 , entao pos -1 
            pedra[j][L-1][C-1]++;
        }
    }
    while(tpeca < 2){
        for( s = 1; s <= N; s++) //pos mais linha ou mais coluna e cor da pedra
            for( i = 0; i+s-1 < N; i++) 
                for(j= 0; j+s-1 < N; j++) 
                    if(solucao(i, j, s, s, 1-tpeca)==0 && solucao(i, j, s, s, tpeca)>0) 
                        pecas[tpeca]++;
     tpeca++;
    }
    printf("%d %d\n",pecas[0],pecas[1]);
    //system("PAUSE");
    //return 0;
}
