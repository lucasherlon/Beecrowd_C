#include <stdio.h>

int main(){
    int h,z,l,i,j,aux;
    int ida[3];
    
    scanf("%d%d%d", &h,&z,&l);
    
    ida[0]=h;
    ida[1]=z;
    ida[2]=l;
    
    for(i=0; i<2; i++){
        for(j = 0; j < 2; j++){
            if(ida[j] < ida[j+1]){
               aux = ida[j];
               ida[j] = ida[j+1];
               ida[j+1] = aux;
            }
        }
    }
    
    if(ida[1]==h){
        printf("huguinho\n");
    }else if(ida[1]==z){
        printf("zezinho\n");
    }else{
        printf("luisinho\n");
    }

    return 0;
}