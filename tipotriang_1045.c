#include <stdio.h>

int main()
{
    double A, B, C, l1, l2, l3;
    scanf("%lf%lf%lf", &l1, &l2, &l3);
    
     if (l1 >= l2 && l1 >= l3)
    {
      A = l1;
      if (l2 >= l3)
	{
	  B = l2;
	  C = l3;
	}
      else
	{
	  B = l3;
	  C = l2;
	}
    }
  if (l2 >= l1 && l2 >= l3)
    {
      A = l2;
      if (l1 >= l3)
	{
	  B = l1;
	  C = l3;
	}
      else
	{
	  B = l3;
	  C = l1;
	}
    }
  if (l3 >= l1 && l3 >= l2)
    {
      A = l3;
      if (l1 >= l2)
	{
	  B = l1;
	  C = l2;
	}
      else
	{
	  B = l2;
	  C = l1;
	}
    } 
    

    if(A>=B+C){
        printf("NAO FORMA TRIANGULO\n");
    } else{
        if(A*A == (B*B+C*C)){
            printf("TRIANGULO RETANGULO\n");
        }
        if(A*A > B*B + C*C){
            printf("TRIANGULO OBTUSANGULO\n");
        }
        if(A*A < B*B + C*C){
            printf("TRIANGULO ACUTANGULO\n");
        }
        if(A==B && B==C){
            printf("TRIANGULO EQUILATERO\n");
        }else if((A!=B && B==C) || (A!= C && B==C) || (B!=C && A==C) || (A!=C && A==B)){
            printf("TRIANGULO ISOSCELES\n");
        
        }
    }
    
    return 0;
}