#ifndef _MY_MAT_H
#define _MY_MAT_H
#define N 10
#define ARRLEN 5



void inputToArr(int arr[][N]);
void floydWarshall(int dist[][N]);
void printSolution(int dist[][N]);
int hasPath(int i, int j, int arr[][N]);
int shortestPath(int i, int j, int arr[][N]);

int max(int a, int b);
int knapSack(int[],int [],int[]);



















#endif