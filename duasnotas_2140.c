#include <stdio.h>

int main(){
    int n,m,troco;
    int i,j,cont;
    int notas[6]={2,5,10,20,50,100};
    
    while(1){
        scanf("%d%d", &n, &m);
        
        if(n==0 && m==0){
            break;
        }
        
        cont=0;
        troco = m-n;
        
        for(i=0;i<6;i++){
            for(j=0;j<6;j++){
                if(notas[i]+notas[j]==troco){
                    cont++;
                    goto Fim;
                }
            }
        }
        
        Fim:
            if(cont>0){
                printf("possible\n");
            }else{
                printf("impossible\n");
            }
        
    }
    
    return 0;
}