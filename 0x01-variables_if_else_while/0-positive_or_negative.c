#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* betty style doc for function main goes there */
/* */
int main(void)
{
  int n;

  srand(time(0));
  n = rand() - RAND_MAX / 2;
  n = 0;
  if ( n > 0 )
    {
      printf("n= %d is positive\n",n);
    }
  if (n < 0 )
  {
   printf("n = %d is negative\n",n);
  }
  if(n ==0)
  {
   printf("n = %d is zero\n",n);

  }
  return (0);
}
