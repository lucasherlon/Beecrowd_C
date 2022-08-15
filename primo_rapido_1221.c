#include <stdio.h>
#include <math.h>

int main(){
    
    int N;
    long long int X,i,j,cont, proxy;
    
    scanf("%d", &N);
    
    for(j=0;j<N;j++){
        cont=0;
        scanf("%lld", &X);
        proxy = floor(sqrt(X))+1;
        
        for(i=2; i<proxy; i++){
            if(X%i==0){
                cont++;
                break;
            }
        }
        if(cont==0){
            printf("Prime\n");
        }else{
            printf("Not Prime\n");
        }
        
    }
    return 0;
}