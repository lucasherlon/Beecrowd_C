#include <stdio.h>
#include <math.h>

int main(){
    
    int T,i, PA, PB, cont;
    double G1, G2, tca, tcb;

    scanf("%d", &T);
    
    for(i=0;i<T;i++){
        cont=0;
        scanf("%d%d", &PA, &PB);
        scanf("%lf%lf", &G1, &G2);
        
        tca = (G1/100)+1;
        tcb = (G2/100)+1;
        
        while(PA<=PB){
            
            PA = floor(PA*tca);
            PB = floor(PB*tcb);
            cont+=1;
            
            if(cont>100){
                printf("Mais de 1 seculo.\n");
                break;
            }
        }
        if(cont<=100) printf("%d anos.\n", cont);
    }
    
    return 0;
}