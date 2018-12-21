#include <iostream>
#include <cstdio>
#include<stdio.h>
#include<string.h>
#include<map>
#include<vector>


using namespace std;
 
int matriz[600][600];
int MAX = 999999999;
 
int dijkstra(int origem, int destino,int vertices) {
    int i,j, minimo, atual, passou[vertices], pred[vertices],custo[vertices];
    for (i=1; i<=vertices;i++) {
        pred[i]=-1;
        custo[i]=MAX;
        passou[i]=0;
    }
    custo[origem] = 0;
    while (origem != destino) {
        for (i=1; i<=vertices;  i++) {
            if (custo[i] > custo[origem] + matriz[origem][i])
                custo[i] = custo[origem] + matriz[origem][i];
        }
        minimo = MAX;
        passou[origem]=1;
        for (i=1; i<=vertices; i++) {
            if ((custo[i]<minimo) && (!passou[i])) {
                minimo = custo[i];
                origem = i;
            }
        }
        if (minimo == MAX) {
            return minimo;
        }
    }
    return custo[destino];
}
 
int main() {
   int i, j, arestas, origem, destino, peso, consultas,vertices;
    scanf("%d %d",&vertices,&arestas);
	while (1) {
    	if(!vertices && !arestas) return 0;
    	for (i=1; i<=vertices; i++) {
            for (j=1;j<=vertices;j++) {
                matriz[i][j]=MAX;
            }
        }
        for (i=1; i<=arestas; i++) {
            scanf("%d %d %d",&origem,&destino,&peso);
            matriz[origem][destino]=peso;
            if (matriz[destino][origem]!=MAX) {
                matriz[origem][destino] = 0;
                matriz[destino][origem] = 0;
            }
        }
        scanf("%d",&consultas);
        for (i=1; i<=consultas;i++) {
            scanf("%d %d",&origem,&destino);
            if (dijkstra(origem,destino,vertices)!= MAX)
                printf("%d\n",dijkstra(origem,destino,vertices));
            else
                printf("Nao e possivel entregar a carta\n");
        }
        scanf("%d %d",&vertices,&arestas);
        //if(vertices && arestas)
		printf("\n");

    }
    return 0;
}
