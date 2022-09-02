#include <stdio.h>

int main(){
    
    int n, m, l, marc[100][100], leo[100][100];
    int i,j, carM, carL, at;
    
    while(scanf("%d", &n)!=EOF){
    
        scanf("%d%d", &m, &l);
        
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                scanf("%d", &marc[i][j]);
            }
            
        }
        
        for(i=0;i<l;i++){
            for(j=0;j<n;j++){
                scanf("%d", &leo[i][j]);
            }
            
        }
        
        scanf("%d%d",&carM, &carL);
        scanf("%d", &at);
        
        if(marc[carM-1][at-1]>leo[carL-1][at-1]){
            printf("Marcos\n");
        }else if(marc[carM-1][at-1]==leo[carL-1][at-1]){
            printf("Empate\n");
        }else{
            printf("Leonardo\n");
        }
        
    }
    
    return 0;
}