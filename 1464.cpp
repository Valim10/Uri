#include <iostream>
#include <stack>
#include <stdlib.h>
#include <stdio.h>
#include <cstring>
using namespace std;

typedef struct Ponto {
  int x;
  int y;
} ponto;
ponto p0;
ponto P[2001];


ponto nextToTop(stack<ponto> &S) {
  ponto p = S.top();
  S.pop();
  ponto res = S.top();
  S.push(p);
  return res;
}

int dist(ponto p1, ponto p2) {
  return (p1.x - p2.x)*(p1.x - p2.x) + (p1.y - p2.y)*(p1.y - p2.y);
}

int orientation(ponto p, ponto q, ponto r) {
  int val = (q.y - p.y) * (r.x - q.x) - (q.x - p.x) * (r.y - q.y);

  if (val == 0) return 0; 
  if(val) return 1;
  else return 2;

}

int compare(const void *vp1, const void *vp2) {
  ponto *p1 = (ponto *)vp1;
  ponto *p2 = (ponto *)vp2;

  int o = orientation(p0, *p1, *p2);
  if (o == 0)
    return (dist(p0, *p2) >= dist(p0, *p1))? -1 : 1;
  if(o==2) return -1;
  else return 1;

  
}




int convexHull(ponto * pontos, int n) {
  ponto naoUtilizado[n];
  stack<ponto> S;
  int j = 0;
  
  while (n >= 3) {
    int ymin = pontos[0].y, min = 0;
    for (int i = 1; i < n; i++) {
      int y = pontos[i].y;

      if ((y < ymin) || (ymin == y && pontos[i].x < pontos[min].x))
        ymin = pontos[i].y, min = i;
    }

    ponto temp = pontos[0];
  	pontos[0] = pontos[min];
 	pontos[min] = temp;

    p0 = pontos[0];
    qsort(&pontos[1], n-1, sizeof(ponto), compare);

    for(int i = 0 ; i< 3;i++)
	    S.push(pontos[i++]);

    int k = 0;
    for (int i = 3; i < n; i++) {
      while (orientation(nextToTop(S), S.top(), pontos[i]) != 2) {
        naoUtilizado[k++] = S.top();
        S.pop();
      }
      S.push(pontos[i]);
    }

    while (!S.empty()) {
      n--;
      S.pop();
    }

    memcpy(naoUtilizado, pontos, sizeof(ponto)*n);

    j++;
  }
  return j;
}

int main() {
  long n;
  while (scanf("%ld", &n) != EOF) {
    if (n == 0) break;
    for (long i = 0; i < n; i++) {
      ponto ps;
      scanf("%d %d", &(ps.x), &(ps.y));
      P[i] = ps;
    }

    int j = convexHull(P, n);
    if (j % 2 == 0) {
      printf("Do not take this onion to the lab!\n");
    } else {
      printf("Take this onion to the lab!\n");
    }
  }
  return 0;
}

