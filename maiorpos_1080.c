#include <stdio.h>

int main()
{
    int num, maior, pos, i;
    
    for(i=1; i<=100; i++){
        
        scanf("%d", &num);
        
        if(i==1){
            maior=num;
            pos=1;
        }
        
        if(num>maior){
            maior=num;
            pos=i;
        }
    }
    printf("%d\n", maior);
    printf("%d\n", pos);
    
    return 0;
}