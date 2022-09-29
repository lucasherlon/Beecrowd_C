#include <stdio.h>
#include <math.h>

int main()
{
    int n,m,i,j,soma,ver;
    
    while(scanf("%d", &m)!=EOF){
        int vet[m];
        
        for(i=0;i<m;i++){
            scanf("%d", &vet[i]);
        }
        
        scanf("%d", &n);
        
        soma=0;
        for(i=m-1;i>=0;i-=n){
            soma += vet[i];
        }
        
        if(soma==1){
            printf("Bad boy! I’ll hit you.\n");
        }else if(soma==2 || soma==3){
            printf("You’re a coastal aircraft, Robbie, a large silver aircraft.\n");
        }else{
            ver=0;
            for(j=2;j<=(int)sqrt(soma);j++){
                if(soma%j==0){
                    ver=1;
                    break;
                }
            }
            
            if(ver==0){
                printf("You’re a coastal aircraft, Robbie, a large silver aircraft.\n");
            }else{
                printf("Bad boy! I’ll hit you.\n");
            }
        }
        
    }

    return 0;
}