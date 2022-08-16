#include <stdio.h>

int main(){

    long long int n, cont, um;
    int i;
    
    while(scanf("%lld", &n)!=EOF){
        um=1;
        cont=1;

        while(um!=0){
            um = (um*10+1)%n;
            cont++;
        }
        printf("%lld\n", cont);
        
    }
    return 0;
}