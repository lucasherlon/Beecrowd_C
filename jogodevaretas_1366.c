#include <stdio.h>

int main()
{
    int n,c,v, soma;
    
    while(1){
        scanf("%d", &n);
        if(n==0) break;
        
        soma=0;
        
        for(int i=0;i<n;i++){
            scanf("%d%d", &c, &v);
            
            if(v%2==0){
                soma = soma + v;
            }else{
                soma = soma + (v-1);
            }
        }
        
        printf("%d\n", soma/4);
        
    }

    return 0;
}