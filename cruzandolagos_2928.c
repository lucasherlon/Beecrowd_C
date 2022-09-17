#include <stdio.h>
#include <string.h>

int main(){
    int n,i,cont;
    char linha[11];
    char path[102];
    scanf("%d", &n);
    
    for(i=0;i<n;i++){
        scanf("%s", linha);
        path[i]=linha[0];
    }
    
    char nao[]={"..."};
    cont=0;
    if((n==1 || n==2) && path[0]=='.'){
      printf("1\n");
      return 0;
    }else if(strstr(path,nao)!=NULL){
        printf("N\n");
        return 0;
    }else{
        for(i=1;i<n;i++){
            if(path[i]=='.' && path[i-1]=='-'){
                cont++;
            }
        }
    }
    
    printf("%d\n", cont);
}