#include <stdio.h>
#include <stdlib.h>

int main(){
    int mapa[100][100];
    int i,j,n,m;
    int um[2], dois[2], x, y, dist;
    
    while(scanf("%d%d", &n, &m)!=EOF){
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                scanf("%d", &mapa[i][j]);
                if(mapa[i][j]==1){
                    um[0]=i;
                    um[1]=j;
                }
                if(mapa[i][j]==2){
                    dois[0]=i;
                    dois[1]=j;
                }
            }
        }
        
        x = abs(um[0]-dois[0]);
        y = abs(um[1]-dois[1]);
        
        dist = x+y;
        
        printf("%d\n", dist);
        

    }
    return 0;
}