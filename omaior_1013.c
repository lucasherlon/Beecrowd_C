#include <stdio.h>
#include <stdlib.h>
 
int main() {
    int A, B, C, meio, final;
    scanf("%d%d%d", &A, &B, &C);
    
    meio = (A + B + abs(A - B))/2;
    final = (meio + C + abs(meio - C))/2;
    
    printf("%d eh o maior\n", final);
 
    return 0;
}