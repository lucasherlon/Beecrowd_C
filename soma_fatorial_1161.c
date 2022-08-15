#include <stdio.h>

int main(){
    
    long long int n,m, fat, mult, soma;
    //EOF --> end of file
    while(scanf("%lld %lld", &n, &m) != EOF){
        
        fat=1;
        mult=1;
        soma=0;
        
        for(n; n>0; n--){
            fat*=n;
        }
        for(m; m>0; m--){
            mult*=m;
        }
        soma = fat + mult;
        printf("%lld\n", soma);
    }
    return 0;
}