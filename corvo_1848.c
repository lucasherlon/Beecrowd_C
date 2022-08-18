#include <stdio.h>
#include <string.h>

int main()
{
   int soma=0, cont=0;
   char um[4]="--*";
   char dois[4]="-*-";
   char quatro[4]="*--";
   char resp[8];
   
   while(1){
       gets(resp);
       
        if(strcmp(resp,"--*")==0){ 
            soma+=1;
        }else if(strcmp(resp,"-*-")==0) {
            soma+=2;
        }else if(strcmp(resp,"-**")==0) {
            soma+=3;
        }else if(strcmp(resp,"*--")==0) {
            soma+=4;
        }else if(strcmp(resp,"*-*")==0) {
            soma+=5;
        }else if(strcmp(resp,"**-")==0) {
            soma+=6;
        }else if(strcmp(resp,"***")==0) {
            soma+=7;
        }else if(strcmp(resp, "caw caw")==0){
           printf("%d\n", soma);
           cont++;
           soma=0;
       }
       
       if(cont==3){
           break;
       }
       
   }

    return 0;
}