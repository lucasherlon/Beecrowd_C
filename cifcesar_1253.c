#include <stdio.h>
#include <string.h>

int main(){
    int N, dir,i, j,l;
    char alfa[27]={'A','B','C','D', 'E', 'F', 'G', 'H', 'I', 'J','K','L','M','N','O','P','Q','R','S',
    'T','U','V','W','X','Y','Z'};
    char msg[51];
    
    scanf("%d", &N);
    
    for(i=0;i<N;i++){
        scanf("%s", msg);
        scanf("%d", &dir);
        
        
        for(j=0; j<strlen(msg); j++){
            for(l=0;l<strlen(alfa);l++){
                if(msg[j]==alfa[l] && l>=dir){
                    printf("%c", alfa[l-dir]);
                }else if(msg[j]==alfa[l] && l<dir){
                    printf("%c", alfa[26 -(dir-l)]);
                }
            }
        }
        printf("\n");
    }
    
    return 0;
}