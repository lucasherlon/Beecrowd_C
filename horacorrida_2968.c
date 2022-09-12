#include <stdio.h>
#include <math.h>

int perc(int percen, int tot){
    int num;
    num = ceil(((float)percen/100)*tot);
    
    return num;
}

int main(){
    int voltas, placas, total;
    
    scanf("%d%d", &voltas, &placas);
    
    total = voltas*placas;
    
    printf("%d %d %d %d %d %d %d %d %d\n", perc(10,total), perc(20, total), perc(30, total),
    perc(40,total), perc(50,total), perc(60, total), perc(70, total), perc(80, total), perc(90,total));
    
    return 0;
}