#include <stdio.h>
#include "my_mat.h"

#define  WEIGHT 20
#define ARRLEN 5

int main(){
    

char items [ARRLEN+1] = {0};
int weights [ARRLEN] ={0};
int values [ARRLEN] ={0};
int selected_bool[ARRLEN] ={0};

for(int i=0;i<ARRLEN;i++){
    scanf(" %c",&items[i]);
    scanf("%d",&values[i]);
    scanf("%d",&weights[i]);
}
 items[ARRLEN] = '\0'; // Null terminate the character array


printf("Maximum profit:%d\n",knapSack(weights,values,selected_bool) );






return 0;
}



