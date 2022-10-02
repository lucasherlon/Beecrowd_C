#include <stdio.h>

int main(){
    
    int n,i,j, cont=0;
    
    while(1){
        
		scanf("%d", &n);
        if(n==0) break;
        cont++;
        
        int vet[n][2];
        
        for(i=0;i<n;i++){
            scanf("%d%d", &vet[i][0], &vet[i][1]);
        }
        
        int somal[2];
        for(j=0; j<2;j++){
            somal[j]=0;
            for(i=0;i<n;i++){
                somal[j] += vet[i][j];
            }
        }
        
        printf("Teste %d\n", cont);
        
        if(somal[0]>somal[1]){
            printf("Aldo\n");
        }else{
            printf("Beto\n");
        }
        
        printf("\n");
    }
  

    return 0;
}