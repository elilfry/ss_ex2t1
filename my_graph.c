#include <stdio.h>
#include "my_mat.h"

int main() {
    int i, j = 0;
    int dist[N][N] = {0};
    char choice;

    while (scanf(" %c", &choice) == 1 && choice != 'D' && choice != EOF) {
        switch (choice) {
            case 'A':
                inputToArr(dist);
                floydWarshall(dist);
                break;
            case 'B':
                scanf("%d %d", &i, &j);
                 (hasPath(i, j, dist));
        
                break;
            case 'C':
               
                scanf("%d %d", &i, &j);
                (shortestPath(i, j, dist));
                
                break;
            case 'D':
               
                break;
            default:
          
                break;
        }
       
    }

    return 0;
}

