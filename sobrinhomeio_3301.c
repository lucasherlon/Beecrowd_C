#include <stdio.h>

void ordenaVet(int vetor[], int tam){
    int aux, i, j;
    
    for(i=0; i<tam-1; i++){
        for(j = 0; j < tam-1; j++){
            if(vetor[j] < vetor[j+1]){
               aux = vetor[j];
               vetor[j] = vetor[j+1];
               vetor[j+1] = aux;
            }
        }
    }
}

int main(){
    int h,z,l;
    int ida[3];
    
    scanf("%d%d%d", &h,&z,&l);
    
    ida[0]=h;
    ida[1]=z;
    ida[2]=l;
    
    ordenaVet(ida, 3);
    
    if(ida[1]==h){
        printf("huguinho\n");
    }else if(ida[1]==z){
        printf("zezinho\n");
    }else{
        printf("luisinho\n");
    }

    return 0;
}