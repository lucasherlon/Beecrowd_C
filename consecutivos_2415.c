#include <stdio.h>

int main(){
    int n, i,maior=0, cont=1;
    
    scanf("%d", &n);
    
    long long int vet[n];
    
    for(i=0;i<n;i++){
        scanf("%lld", &vet[i]);
    }
    
    for(i=1;i<=n;i++){
        if(vet[i]==vet[i-1]){
            cont++;
        }else{
            if(cont>maior){
                maior=cont;
            }
            cont=1;
        }
    }
    
    printf("%d\n", maior);
    
    return 0;
}