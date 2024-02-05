
#include <stdio.h>
 #include "my_mat.h"

#define N 4
#define INF 9999
int dist [N][N] ={0}; //duplicate the orginal array
int arr [N][N] ={0};
//1)A) gets 100 numbers inputs (start =a ,end = 100th number)
void a(){ 
    
for(int i =0;i<N;i++){
    for(int j=0;j<N;j++){
 scanf("%d",&arr[i][j]);
      dist[i][j] = arr [i][j];
    }
}
}



//1)B) gets 2 inputs i and j and return true if there is path from i to j
int hasPath(int i,int j,int arr[N][N]){

    // floydWarshall(arr);
    if(arr[i][j] == 9999 || arr[i][j] == 0){
         printf("no path between %d and %d exists \n",i,j);
        return 0;
    }
            printf("the path between %d and %d exists \n",i,j);

        return 1;
}

//1)c

int shortestPath(int i,int j,int arr[N][N]){
   if (arr[i][j] == 9999 || arr[i][j] == 0){
        printf("no path between %d and %d exists \n",i,j);
        return 0;
    }
else{
     printf("the  shortest path between %d and %d is %d \n",1,2,arr[i][j]);
             return 1;
}
        return 0;

    
}


void floydWarshall(int dist[N][N]) {
    int i, j, k;

    for (k = 0; k < N; k++) {
        for (i = 0; i < N; i++) {
            for (j = 0; j < N; j++) {
                if (dist[i][k] + dist[k][j] < dist[i][j])
                    dist[i][j] = dist[i][k] + dist[k][j];
            }
        }
    }

    printSolution(dist);
}

void printSolution(int dist[][N]) {
    printf("The following matrix shows the shortest distances"
           " between every pair of vertices \n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (dist[i][j] == INF)
                printf("%7s", "INF");
            else
                printf("%7d", dist[i][j]);
        }
        printf("\n");
    }
}




