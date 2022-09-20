#include <stdio.h>

int main(){
    int num[1000],n,k, cont;
    int i;
    while(1){
        scanf("%d%d", &n, &k);
        
        if(n==0 && k==0){
            break;
        }
        
        for(i=0;i<n;i++){
            scanf("%d", &num[i]);
        }
        
        int aux[101];
        
       for(i=0;i<101;i++){
           aux[i]=0;
       }
        
        for(i=0;i<n;i++){
            aux[num[i]]=aux[num[i]]+num[i];
        }
        
        for(i=0;i<101;i++){
            if(aux[i]!=0){
                aux[i]=aux[i]/i;
            }
            if(aux[i]<k){
                aux[i]=0;
            }
        }
        
        cont=0;
        for(i=0;i<101;i++){
            if(aux[i]!=0){
                cont++;
            }
        }
        printf("%d\n", cont);
        
    }
    
    return 0;
}