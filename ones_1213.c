#include <stdio.h>

int main(){

    int n, cont, um, i;
   
    while(scanf("%d", &n)!=EOF){
        um=1;
        cont=1;

        while(um!=0){
            um = (um*10+1)%n;
            cont++;
        }
        printf("%d\n", cont);
        
    }
    return 0;
}
