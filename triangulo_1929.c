#include <stdio.h>

int main(){
    
    int lds[4];
    int i, j, aux;
    
    for(i=0; i<4;i++){
        scanf("%d", &lds[i]);
    }

     for (i = 1; i < 4; i++) {
        for (j = 0; j < 4 - 1; j++) {
            if (lds[j] > lds[j + 1]) {
               aux = lds[j];
               lds[j] = lds[j + 1];
               lds[j + 1] = aux;
            }
        }
    }
    
    if((lds[0]<lds[1]+lds[2] && lds[1]<lds[0]+lds[2] && lds[2]<lds[0]+lds[1]) ||
    (lds[1]<lds[2]+lds[3] && lds[2]<lds[1]+lds[3] && lds[3]<lds[1]+lds[2])){
        printf("S\n");
    }else{
        printf("N\n");
    }
    
    return 0;
}