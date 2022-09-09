#include <stdio.h>

int main(){
    int n,k,l,j,i,m, aux, aux2;
    int notas[1000];
    
    scanf("%d", &n);
    scanf("%d", &m);

    if(n==m){
        for(i=0;i<n;i++){
            scanf("%d", &notas[i]);
        }
        printf("%d\n", m);
    }else{
        for(i=0;i<n;i++){
            scanf("%d", &notas[i]);
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
        
        
        
        aux2=m;
        
        for(j=m-1;j<n;j++){
            if(notas[j]!=notas[j+1]){
                break;
            }else{
                aux2++;
            }
        }
        
        printf("%d\n", aux2);
        
    }
    return 0;
}