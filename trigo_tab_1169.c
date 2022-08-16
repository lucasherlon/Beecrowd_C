#include <stdio.h>
#include <math.h>

int main(){

    int T, i,j, X;
    long double kg, grao;
    
    scanf("%d", &T);
    
    for(i=0;i<T;i++){;
        grao=1;
        scanf("%d", &X);
        for(j=0; j<X;j++){
            grao = grao*2;
        }
        kg = grao/12000;
        printf("%.0Lf kg\n", (long double)floor(kg));
    }
    
    return 0;
}
