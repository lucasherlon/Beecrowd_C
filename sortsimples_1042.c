#include <stdio.h>

int
main ()
{

  int A, B, C;
  int maior, menor, inter;
  scanf ("%d%d%d", &A, &B, &C);

  if (A > B && A > C)
    {
      maior = A;
      if (B > C)
	{
	  inter = B;
	  menor = C;
	}
      else
	{
	  inter = C;
	  menor = B;
	}
    }
  if (B > A && B > C)
    {
      maior = B;
      if (A > C)
	{
	  inter = A;
	  menor = C;
	}
      else
	{
	  inter = C;
	  menor = A;
	}
    }
  if (C > A && C > B)
    {
      maior = C;
      if (A > B)
	{
	  inter = A;
	  menor = B;
	}
      else
	{
	  inter = B;
	  menor = A;
	}
    }

  printf ("%d\n", menor);
  printf ("%d\n", inter);
  printf ("%d\n", maior);
  printf ("\n");
  printf ("%d\n", A);
  printf ("%d\n", B);
  printf("%d\n", C);
  
  return 0;
}