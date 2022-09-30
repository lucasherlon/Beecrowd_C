#include <stdio.h>

int menorprimo(int a){
    int i,ver;
    
    while(1){
    
        ver=0;
        
        for(i=a-1; i>=2;i--){
            if(a%i==0){
                a--;
                ver=1;
                break;
            }
        }
        
        if(ver==0){
            return a;
        }
    }
    
}

int main()
{
    int n,m, res;
    
    scanf("%d%d", &n, &m);
    
    res = menorprimo(n)*menorprimo(m);
    
    printf("%d\n", res);
    

    return 0;
}