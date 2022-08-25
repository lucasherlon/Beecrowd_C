#include <stdio.h>
#include <string.h>

int main(){
    int n,i,j, contz;
    char ra[101];
    
    scanf("%d", &n);
     for(i=0;i<n;i++){
         contz=0;
         scanf("%s",ra);
         
         if(strlen(ra)!=20){
             printf("INVALID DATA\n");
             continue;
         }
         
         if(ra[0]!='R' || ra[1]!='A'){
             printf("INVALID DATA\n");
             continue;
         }
         
         for(j=2;j<strlen(ra);j++){
             if(ra[j]<48 || ra[j]>57){
                 printf("INVALID DATA\n");
                 goto Saida;
             }
             if(ra[j]==0){
                 contz++;
             }
         }
         
         if(contz==18){
             printf("INVALID DATA\n");
             continue;
         }
         
         for(j=2; j<strlen(ra);j++){
             if(ra[j]!='0'){
                break;
             }
         }   
    
        printf("%s\n", ra+j);
         
         
         Saida:
            continue;
     }
    return 0;
}