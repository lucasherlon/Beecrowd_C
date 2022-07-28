#include <stdio.h>
 
int main() {
    int  maior, nota;
    
    maior = 0;
    while(1){
        scanf("%d", &nota);
        if ( nota ==0){
            break;
        }
        if (nota >= maior){
            maior = nota;
        }
       }
    printf("%d\n", maior); 
    return 0;
}
