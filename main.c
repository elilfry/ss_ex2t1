#include <stdio.h>
#include "my_mat.h"

#define N 4
#define INF 9999


// int main(){


    
//     return 0; //the main return
// }


// driver's code
int main()
{
    /* Let us create the following weighted graph
            10
       (0)------->(3)
        |         /|\
      5 |          |
        |          | 1
       \|/         |
       (1)------->(2)
            3           */
    int graph[N][N] = { { 0, 5, INF, 10 },
                        { INF, 0, 3, INF },
                        { INF, INF, 0, 1 },
                        { INF, INF, INF, 0 } };
 
    // Function call
    floydWarshall(graph);
    
    hasPath(1,2,graph);
    shortestPath(1,2,graph);
    
    return 0;

    
}