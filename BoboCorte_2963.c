#include <stdio.h>

int main(){
    int n, i, l, k, aux, nota;
    int notas[100000];
    
    scanf("%d", &n);
    
    for(i=0;i<n;i++){
        scanf("%d", &notas[i]);
        if(i==0){
            nota=notas[i];
        }
    }
    
    
    for(l = 1; l < n; l++){
        for(k = 0; k < n-1; k++){
            if(notas[k] < notas[k + 1]){
               aux = notas[k];
               notas[k] = notas[k + 1];
               notas[k + 1] = aux;
            }
        }
    }
    
    if(notas[0]==nota){
        printf("S\n");
    }else{
        printf("N\n");
    }
    
    return 0;
}