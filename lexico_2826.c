#include <stdio.h>
#include <string.h>

int main(){
    char p1[21];
    char p2[21];
    
    scanf("%s %s", p1, p2);
    
    if(strcmp(p1,p2)==0 || strcmp(p1,p2)<0){
        printf("%s\n", p1);
        printf("%s\n", p2);
    }else if(strcmp(p1,p2)>0){
        printf("%s\n", p2);
        printf("%s\n", p1);
    }

    return 0;
}
