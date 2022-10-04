#include <stdio.h>
#include <math.h>

typedef struct{
    int x;
    int y;
    int z;
}coord;

double dist(int a, int b, int c, int a1, int b1, int c1){
    double distan;
    
    distan = sqrt(pow(a1-a,2)+pow(b1-b,2)+pow(c1-c,2));
    
    return distan;
}

int main(){
    
    int n,i,j,a,b,c, a1, b1, c1;
    double menor, distt;
    
    scanf("%d", &n);
    
    coord vet[n];
    
    for(i=0;i<n;i++){
        scanf("%d%d%d", &vet[i].x, &vet[i].y, &vet[i].z);
    }
    
    for(i=0;i<n;i++){
        a = vet[i].x;
        b = vet[i].y;
        c = vet[i].z;
        
        for(j=0;j<n;j++){
            a1 = vet[j].x;
            b1 = vet[j].y;
            c1 = vet[j].z;
            
            if((j==0 && i!=0) || (i==0 && j==1 )){
                distt  = dist(a,b,c,a1,b1,c1);
                menor = distt;
            }
            
            if(i!=j){
                distt  = dist(a,b,c,a1,b1,c1);
                
                if(distt<menor){
                    menor = distt;
                }
            }
            
        }
        
        if(menor<=20){
                printf("A\n");
            }else if(menor>20 && menor<=50){
                printf("M\n");
            }else{
                printf("B\n");
            }
    
    }
    
    return 0;
}