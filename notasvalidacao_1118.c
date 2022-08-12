#include <stdio.h>

int main(){
    
    double nota, media, soma;
    int i, resp=1;
    
    while(resp == 1){
        soma = 0;
        for(i=0; i<2; i++){
            scanf("%lf", &nota);
            while(nota<0 || nota>10){
                printf("nota invalida\n");
                scanf("%lf", &nota);
            }
        soma += nota;
        }
        media = soma/2;
        printf("media = %.2lf\n", media);
        
        do {printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &resp);
            }
       }while(resp!= 1 && resp!=2);
    }
    return 0;
}
