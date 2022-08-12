#include <stdio.h>

int main(){
    int grenal=0,empate=0, vitgre=0, vitint=0, resp=1;
    int gre, inter;
    
    while(resp==1){
        
        grenal += 1;
        scanf("%d%d",&inter, &gre);
        if(inter>gre){
            vitint+=1;
        }else if(gre>inter){
            vitgre+=1;
        }else{
            empate +=1;
        }
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &resp);
    }
    printf("%d grenais\n", grenal);
    printf("Inter:%d\n", vitint);
    printf("Gremio:%d\n", vitgre);
    printf("Empates:%d\n", empate);
    
    if(vitgre>vitint){
        printf("Gremio venceu mais\n");
    }else if(vitint>vitgre){
        printf("Inter venceu mais\n");
    }else{
        printf("Nao houve vencedor\n");
    }
    
    return 0;
}