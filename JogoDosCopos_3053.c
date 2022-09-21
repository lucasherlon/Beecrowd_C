#include <stdio.h>

void um(int vet[]){
    int aux;
    aux = vet[0];
    vet[0]=vet[1];
    vet[1]=aux;
}

void dois(int vet[]){
    int aux;
    aux = vet[2];
    vet[2]=vet[1];
    vet[1]=aux;
}

void tres(int vet[]){
    int aux;
    aux = vet[0];
    vet[0]=vet[2];
    vet[2]=aux;
}

 
void copiar(int copiado[], int original[])
{
    int i;
    for(i=0; i< 3; i++)
        copiado[i] = original[i];
}


int main() {
    int n,i,op;
    int vet[3];
    int vetA[3]={1,0,0};
    int vetB[3]={0,1,0};
    int vetC[3]={0,0,1};
    
    char pos;
    
    scanf("%d", &n);
    scanf(" %c", &pos);
    
    if(pos=='A'){
        copiar(vet,vetA);
    }else if(pos=='B'){
        copiar(vet,vetB);
    }else if(pos=='C'){
        copiar(vet,vetC);
    }
    
    
    for(i=0;i<n;i++){
        scanf("%d", &op);
        
        if(op==1){
            um(vet);
        }else if(op==2){
            dois(vet);
        }else if(op==3){
            tres(vet);
        }
    }
    
    for(i=0;i<3;i++){
        if(vet[i]==1){
            if(i==0){
                printf("A\n");
            }else if(i==1){
                printf("B\n");
            }else if(i==2){
                printf("C\n");
            }
        }
    }
        
        
    return 0;
}