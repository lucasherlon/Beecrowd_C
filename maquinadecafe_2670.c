#include <stdio.h>

int main(){
    
    int andar[3], i,menor, soma;
    
    for(i=0;i<3;i++){
        scanf("%d", &andar[i]);
    }
    
    
    for(i=0;i<3;i++){
        
        if(i==0){
            
            soma = 2*andar[1]+4*andar[2];
            menor = soma;
            
        }else if(i==1){
            
            soma = 2*andar[0]+2*andar[2];
            
            if(soma<menor){
                menor = soma;
            }
            
        }else if(i==2){
            
            soma = 4*andar[0]+2*andar[1];
            
            if(soma<menor){
                menor = soma;
            }
            
        }
        
        
    }
    
    printf("%d\n", menor);
    
    return 0;
}