#include <stdio.h>
#include "my_mat.h"

int main() {
    int i, j = 0;
    int dist[N][N] = {0};
    char choice;

    // printf("Enter your choice: a, b, c, or d: ");
    while (scanf(" %c", &choice) == 1 && choice != 'd' && choice != EOF) {
        switch (choice) {
            case 'A':
                inputToArr(dist);
                floydWarshall(dist);
                break;
            case 'B':
               // printf("Enter i and j for hasPath:\n");
                scanf("%d %d", &i, &j);
                 (hasPath(i, j, dist));
                // if (hasPath(i, j, dist)) {
                //     printf("True -The path between %d and %d exists\n", i, j);
                // } else {
                //     printf("False - No path between %d and %d exists\n", i, j);
                // }
                break;
            case 'C':
               // printf("Enter i and j for the shortest path:\n");
                scanf("%d %d", &i, &j);
                (shortestPath(i, j, dist));
                // if (shortestPath(i, j, dist)) {
                //     printf("The shortest path between %d and %d is %d\n", i, j, dist[i][j]);
                // } else {
                //     printf(" -1   No path between %d and %d exists\n", i, j);
                // }
                break;
            case 'D':
               // printf("You chose option d.\n");
                break;
            default:
             //   printf("Invalid choice. Please enter a, b, c, or d.\n");
                break;
        }
        //printf("Enter your choice: a, b, c, or d: ");
    }

    return 0;
}


// // driver's code
// int main()
// {
  
    /* Let us create the following weighted graph
            10
       (0)------->(3)
        |         /|\
      5 |          |
        |          | 1
       \|/         |
       (1)------->(2)
            3           */
//     int graph[N][N] = { { 0, 5, INF, 10 },
//                         { INF, 0, 3, INF },
//                         { INF, INF, 0, 1 },
//                         { INF, INF, INF, 0 } };
 
//     // Function call
//     floydWarshall(graph);
    
//     hasPath(1,2,graph);
//     shortestPath(1,2,graph);
    
//     return 0;

    
// }