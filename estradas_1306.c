#include <stdio.h>

int main(){
    
    int r,n,cont=0,suf,x;
    
    while(1){
    Inicio:
        scanf("%d%d", &r, &n);
        
        if(r==0 & n==0){
            break;
        }
        
        cont++;
       
        if(n>=r){
            printf("Case %d: 0\n", cont);
        }else{
            suf=0;
            x=r-n;
            while(suf*n<x){
                suf++;
                if(suf>26){
                    printf("Case %d: impossible\n", cont);
                    goto Inicio;
                }
            }
            printf("Case %d: %d\n", cont,suf);
        }

    }
    
    
    return 0;
}