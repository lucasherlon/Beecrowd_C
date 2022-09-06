#include <stdio.h>
#include <string.h>

int main(){  
    int t,i,a;
    
    char n1[11];
    char n2[11];
    
    scanf("%d", &t);
    
    for(i=0;i<t;i++){   
        scanf("%s", n1);
        scanf("%s", n2);
        
        a = strlen(n1)-strlen(n2);
        
        if(strstr(n1+a,n2)==NULL){
            printf("nao encaixa\n");
        }else{
            printf("encaixa\n");
        }
    }
    
    return 0;
}