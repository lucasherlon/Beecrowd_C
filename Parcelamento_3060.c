#include <stdio.h>

int main(){
	
	int val, par, resto, i;
	
	scanf("%d%d", &val, &par);
	
	if(val%par==0){
		
		for(i=0;i<par;i++){
			printf("%d\n", val/par);
		}
	
	}else{
		resto=val%par;
		
		for(i=1;i<=par;i++){
			if(i<=resto){
				printf("%d\n", (val/par)+1);
			}else{
				printf("%d\n", val/par);
			
			}
		}
	}
	
	
	return 0;
}