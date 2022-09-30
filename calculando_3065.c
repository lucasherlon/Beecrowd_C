#include <string.h>
#include <stdio.h>


void parcelas(int n, int vet[]){
    int i;
    
    for(i=0;i<n;i++){
        scanf("%d", &vet[i]);
    }
}

int main(){
    int i,n,soma,cont=0, num[100];
    
    while(1){
        scanf("%d", &n);
        if(n==0) break;
    
        parcelas(n, num);
        cont++;
        soma=0;
        for(i=0;i<n;i++){
           soma = soma+num[i];
        }
        
        printf("Teste %d\n", cont);
        printf("%d\n\n", soma);
    
    } 
    
}