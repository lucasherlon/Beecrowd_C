#include <stdio.h>

int main(){
    int j, r, l, c, somac, maior, ind;
    
    scanf("%d%d", &j, &r);
    
    int mat[r][j];
    
    for(l=0;l<r;l++){
        for(c=0;c<j;c++){
            scanf("%d", &mat[l][c]);
        }
    }
    maior = 0;
    ind = 0;
    
    for(c=0;c<j;c++){
        somac=0;
        
        for(l=0;l<r;l++){
            somac += mat[l][c];
        }
        
        if(somac>=maior){
            maior = somac;
            ind = c+1;
        }
        
    }
    
    printf("%d\n", ind);
    
    return 0;
}