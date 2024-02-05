#include <stdio.h>
#include "my_mat.h"

#define N 4
#define INF 9999


int main(){

int i,j=0;
int arr [N][N] ={0};
int dist [N][N] ={0}; //duplicate the orginal array
char choice;

    
    printf("Enter  your choice :a,b,c,d;");
    scanf(" %c", &choice);

    
    switch (choice) {
        case 'a':
            inputToArr();
            floydWarshall(dist);
            break;
        case 'b':
              printf("enter i and j for hasPath.\n");
            scanf(" %d %d", &i,&j);
            if (hasPath(i,j,dist)){
               printf("the path between %d and %d exists \n",i,j);
            }
            else{
                 printf("no path between %d and %d exists \n",i,j);
            }
            break;
        case 'c':
             printf("enter i and j for shortest path.\n");
            scanf(" %d %d", &i,&j);
            if(shortestPath(i,j,dist)){
                   printf("the  shortest path between %d and %d is %d \n",1,2,arr[i][j]);
            }
            else{
              printf("no path between %d and %d exists \n",i,j);
            }
            break;
        case 'd':
            printf("You chose option d.\n");
            break;
        default:
            printf("Invalid choice. Please enter a, b, c, or d.\n");
    }

    
    return 0; //the main return
}


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