#include <stdio.h>

int main(){
    double M[12][12], soma =0, media;
    int L, i, j;
    char resp;
    
    scanf("%d", &L);
    scanf(" %c", &resp);
    
    for(i=0;i<12;i++){
        for(j=0; j<12;j++){
            scanf("%lf", &M[i][j]);
        }
    }
    
    if(resp=='S'){
   
        for(j=0;j<12;j++){
            soma=soma + M[L][j];
        }
        printf("%.1lf\n", soma);
    
        
    }else if(resp=='M'){
        for(j=0;j<12;j++){
            soma=soma + M[L][j];
            media = soma/12;
        }
        printf("%.1lf\n", media);
    
        
    }
    
    
    return 0;
}
