#include <stdio.h>

int main()
{
    int A,B,j,n,fig;
    
    scanf("%d", &n);
    
    for(j=0;j<n;j++){
        
        scanf("%d%d", &A, &B);
        //Algoritmo de Euclides para o MDC
        if(A>=B){
            while(B>0){
                fig =A%B;
                A=B;
                B=fig;
            }
            printf("%d\n", A);
        }else{
            while(A>0){
                fig =B%A;
                B=A;
                A=fig;
            }
        printf("%d\n", B);
        }  
    }
    return 0;
}