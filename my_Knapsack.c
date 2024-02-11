#include <stdio.h>
#include "my_mat.h"


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


printf("Maximum profit: %d\n",knapSack(weights,values,selected_bool) );

printf("Selected items:");
for(int i =0;i<ARRLEN;i++){
    if (selected_bool[i] == 1)
    printf(" %c", items[i]);
}




return 0;
}


