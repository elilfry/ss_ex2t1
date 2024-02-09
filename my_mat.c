
#include <stdio.h>
#include "my_mat.h"

#define INF 9999

void inputToArr(int arr[][N]) {
  //  printf("Enter %d numbers:\n", N * N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    // printSolution(arr);
}

int hasPath(int i, int j, int arr[][N]) {
    if (arr[i][j] == INF || arr[i][j] == 0) {
        printf("False \n");
        return 0;
    }
    printf("True \n");
    return 1;
}

int shortestPath(int i, int j, int arr[][N]) {
    if (arr[i][j] == 0) {
        printf("-1  \n");
        return 0;
    }
    printf("%d\n", arr[i][j]);
    return 1;
}
void floydWarshall(int arr[][N])
{
    for (int k = 0; k < N; k++)
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                if (arr[i][j] == 0 && (i!=j) &&(arr[i][k] != 0 && arr[k][j] != 0))
                {
                    arr[i][j] = arr[i][k] + arr[k][j];
                }
                else if (((arr[k][j] != 0) && (arr[i][k] != 0) && (arr[i][j] > (arr[i][k] + arr[k][j]))))
                {
                    arr[i][j] = arr[i][k] + arr[k][j];
                }
            }
        }
    }
}



//to delet 
// void printSolution(int dist[][N]) {    
//     printf("The following matrix shows the shortest distances"
//            " between every pair of vertices \n");
//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < N; j++) {
//             if (dist[i][j] == INF)
//                 printf("%7s", "INF");
//             else
//                 printf("%7d", dist[i][j]);
//         }
//         printf("\n");
//     }
// }

// int knapSack (int weights[], int values[] , int selected_bool[]){




//     return 0;
// }


