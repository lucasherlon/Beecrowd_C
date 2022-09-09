#include <stdio.h>
#include <string.h>

int main(){
    char dodo[8], leo[8],pepper[8];
    int dod, le, pep;
 
    while(scanf("%s %s %s", dodo, leo, pepper)!=EOF){
        
        if(strcmp(dodo,"pedra")==0){
            dod=1;
        }else if(strcmp(dodo,"papel")==0){
            dod=2;
        }else if(strcmp(dodo,"tesoura")==0){
            dod=3;
        }
        
        if(strcmp(leo,"pedra")==0){
            le=1;
        }else if(strcmp(leo,"papel")==0){
            le=2;
        }else if(strcmp(leo,"tesoura")==0){
            le=3;
        }
        
        if(strcmp(pepper,"pedra")==0){
            pep=1;
        }else if(strcmp(pepper,"papel")==0){
            pep=2;
        }else if(strcmp(pepper,"tesoura")==0){
            pep=3;
        }
        
        if((dod==1 && le==2 && pep==3) || (dod==1 && le==3 && pep==2) ||
        (dod==2 && le==1 && pep==3) || (dod==2 && le==3 && pep==1) || 
        (dod==3 && le==1 && pep==2) || (dod==3 && le==2 && pep==1) || 
        (dod==1 && le==1 && pep==1) || (dod==2 && le==2 && pep==2) || 
        (dod==3 && le==3 && pep==3) || (dod==1 && le==1 && pep==3) || 
        (dod==1 && le==3 && pep==1) ||(dod==1 && le==2 && pep==2) || 
        (dod==2 && le==3 && pep==3) || (dod==3 && le==2 && pep==3) || 
        (dod==3 && le==1 && pep==1) ||(dod==3 && le==3 && pep==2) ||
        (dod==2 && le==2 && pep==1) || (dod==2 && le==1 && pep==2)){
            printf("Putz vei, o Leo ta demorando muito pra jogar...\n");
        }else if((dod==1 && le==3 && pep==3) || (dod==3 && le==2 && pep==2) ||
        (dod==2 && le==1 && pep==1)){
            printf("Os atributos dos monstros vao ser inteligencia, sabedoria...\n");
        }else if((dod==2 && le==3 && pep==2) || (dod==1 && le==2 && pep==1) ||
        (dod==3 && le==1 && pep==3)){
            printf("Iron Maiden's gonna get you, no matter how far!\n");
        }else if((dod==2 && le==2 && pep==3) || (dod==3 && le==3 && pep==1) || 
        (dod==1 && le==1 && pep==2)){
            printf("Urano perdeu algo muito precioso...\n");
        }
    }
    return 0;
}