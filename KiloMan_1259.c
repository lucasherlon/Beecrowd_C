#include <stdio.h>

int main()
{
    int n,i,t,j, tiros[50], soma;
    char pulos[51];
    
    scanf("%d", &n);
    
    for(i=0;i<n;i++){
       
       scanf("%d", &t);
       soma=0;
       
       for(j=0;j<t;j++){
           scanf("%d", &tiros[j]);
       }
       for(j=0;j<t;j++){
           scanf(" %c", &pulos[j]);
       }
       
       for(j=0;j<t;j++){
           if(pulos[j]=='S' && (tiros[j]==1 || tiros[j]==2)){
               soma++;
           }else if(pulos[j]=='J' && tiros[j]>2){
               soma++;
           }
       }
       
       printf("%d\n", soma);
    }

    return 0;
}