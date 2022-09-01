#include <stdio.h>

int main(){
    int vet[100][100];
    int m,n,i,j,cont;
    
    while(scanf("%d%d", &n, &m)!=EOF){
        
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                scanf("%d", &vet[i][j]);
            }
        }
    
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                cont=0;
                
                if(vet[i][j]==1){
                    printf("9");
                }else if(i==0 && j==0){
                    if(vet[i][j+1]==1){
                        cont++;
                    }
                    if(vet[i+1][j]==1){
                        cont++;
                    }
                    printf("%d", cont);
                }else if(i==0 && j==m-1){
                    if(vet[i][j-1]==1){
                        cont++;
                    }
                    if(vet[i+1][j]==1){
                        cont++;
                    }
                    printf("%d", cont);
                }else if(i==n-1 && j==0){
                    if(vet[i-1][j]==1){
                        cont++;
                    }
                    if(vet[i][j+1]==1){
                        cont++;
                    }
                    printf("%d", cont);
                }else if(i==n-1 && j==m-1){
                    if(vet[i-1][j]==1){
                        cont++;
                    }
                    if(vet[i][j-1]==1){
                        cont++;
                    }
                    printf("%d", cont);
                }else if(i==0){
                    if(vet[i+1][j]==1){
                        cont++;
                    }
                    if(vet[i][j-1]==1){
                        cont++;
                    }
                    if(vet[i][j+1]==1){
                        cont++;
                    }
                    printf("%d", cont);
                }else if(i==n-1){
                    if(vet[i-1][j]==1){
                        cont++;
                    }
                    if(vet[i][j-1]==1){
                        cont++;
                    }
                    if(vet[i][j+1]==1){
                        cont++;
                    }
                    printf("%d", cont);
                    
                }else if(j==0){
                    if(vet[i][j+1]==1){
                        cont++;
                    }
                    if(vet[i+1][j]==1){
                        cont++;
                    }
                    if(vet[i-1][j]==1){
                        cont++;
                    }
                    printf("%d", cont);
                }else if(j==m-1){
                    if(vet[i][j-1]==1){
                        cont++;
                    }
                    if(vet[i-1][j]==1){
                        cont++;
                    }
                    if(vet[i+1][j]==1){
                        cont++;
                    }
                    printf("%d", cont);
                }else{
                    if(vet[i-1][j]==1){
                        cont++;
                    }
                    if(vet[i][j+1]==1){
                        cont++;
                    }
                    if(vet[i+1][j]==1){
                        cont++;
                    }
                    if(vet[i][j-1]==1){
                        cont++;
                    }
                    printf("%d", cont);
                }
            }
            printf("\n");
        }
    }
    
    return 0;
}
