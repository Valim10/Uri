#include <stdio.h>
#include <string>
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>

int pai[200000];
int custo;

struct Grafo{
	int x, y, v;
};

Grafo grafo[200000];

int cmp(const void *a, const void *b){
    return (*(struct Grafo *)a).v - (*(struct Grafo *)b).v;
}

void Makeset(int n){
    int i;
    for (i = 0; i <= n; ++i){
        pai[i] = i;
    }
}

int Find(int x){
    if (pai[x] != x){
        pai[x] = Find(pai[x]);
    }
    return pai[x];
}

int Merge(int x, int y, int p){
    int i=0, j=0;
    i = Find(x);
    j = Find(y);
    if (i != j){
        custo -= grafo[p].v;
        if (i > j)
            pai[i] = j;
        else 
            pai[j] = i;
        
        return 1;
    }
    return 0;
}

int main(){
    int m, n;
    scanf("%d %d", &m, &n);
    while(1){
        if(m == 0 && n == 0) 
			break;
        memset(&grafo, 0, sizeof(grafo));
        int i = 0;
        custo = 0;
        while(i < n){
            scanf("%d %d %d",&grafo[i].x, &grafo[i].y, &grafo[i].v);
            custo += grafo[i].v;
            i++;
        }
        Makeset(m);
        qsort(grafo, n, sizeof(grafo[0]), cmp);
        for (i = 0; i < n;i++)
            Merge(grafo[i].x, grafo[i].y, i);
        
        printf("%d\n",custo);
	    scanf("%d %d", &m, &n);
    }
    return 0;
}

