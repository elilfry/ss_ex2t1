
#include <stdio.h>
#include "my_mat.h"




//a scan the input to array
void inputToArr(int arr[][N]) {
  
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    
}
//b print true if there is a path or false if there is no path
int hasPath(int i, int j, int arr[][N]) {
    if ( arr[i][j] == 0) {
        printf("False\n");
        return 0;
    }
    printf("True\n");
    return 1;
}
//c print the shortest path or -1 if there is no path
int shortestPath(int i, int j, int arr[][N]) {
    if (arr[i][j] == 0) {
        printf("-1\n");
        return 0;
    }
    printf("%d\n", arr[i][j]);
    return 1;
}

//function that run the floydWarshall algorithm
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


// Function to find maximum of two integers
int max(int a, int b) {
    return (a > b) ? a : b;
}

// Function to solve 0-1 Knapsack problem
int knapSack (int weights[], int values[] , int selected_bool[]){

    int i, w;
    int K[ARRLEN+ 1][WEIGHT+ 1];

    
    for (i = 0; i <= ARRLEN; i++) {
        for (w = 0; w <= WEIGHT; w++) {
            if (i == 0 || w == 0)
                K[i][w] = 0;
            else if (weights[i - 1] <= w)
                K[i][w] = max(values[i - 1] + K[i - 1][w - weights[i - 1]], K[i - 1][w]);
            else
                K[i][w] = K[i - 1][w];
        }
    }

    // Backtrack to find selected items
    w = WEIGHT;
    for (i = ARRLEN; i > 0 && w > 0; i--) {
        if (K[i][w] != K[i - 1][w]) {
            selected_bool[i - 1] = 1;
            w -= weights[i - 1];
        }
    }

    return K[ARRLEN][WEIGHT];
}







