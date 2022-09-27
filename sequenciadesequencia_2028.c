#include <stdio.h>

int main()
{
    int N, cont=1,i,j, num;
    
    while(scanf("%d", &N)!=EOF){
        num=1;
        for(i=0;i<=N;i++){
            if(i==0 && N==0){
                num=1;
            }else{
                for(j=0; j<i;j++){
                        num += 1;
                }
            }
        }
        
        if(num==1){
            printf("Caso %d: %d numero\n",cont, num);
        }else{
            printf("Caso %d: %d numeros\n",cont, num);
        }
        
        for(i=0;i<=N;i++){
            if(i==0 && N>0){
                printf("0 ");
            }else if(i==0 && N==0){
                printf("0\n\n");
            }else{
                for(j=0; j<i;j++){
                    if(i==N && j==i-1){
                        printf("%d\n\n",i);
                    }else{
                        printf("%d ",i);
                        
                    }
                }
            }
        }
        cont++;

            
    }

    return 0;
}