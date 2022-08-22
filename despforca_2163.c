#include <stdio.h>

int main()
{
    int M[1000][1000];
    int i,j, n,m,cont=0;
    
    scanf("%d%d", &n,&m);
    
    //montando a matriz
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d", &M[i][j]);
        }
    }
    //lendo a matriz
    for(i=1;i<n-1;i++){
        for(j=1;j<m-1;j++){
            if(M[i][j]==42){
                if(M[i-1][j-1]==7 && M[i][j-1]==7 && M[i+1][j-1]==7 && 
                M[i+1][j]==7 && M[i+1][j+1]==7 && M[i][j+1]==7 && M[i-1][j+1]==7 &&
                M[i-1][j]==7){
                    cont++;
                    goto Exit;
                }
            }
        }
    }
    
    Exit:
        if(cont>0){
            printf("%d %d\n", i+1, j+1);
        }else{
        printf("0 0\n");
    }
    
    return 0;
}