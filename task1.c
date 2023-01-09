#include <stdio.h>
#include <stdlib.h>

int main()
{

 int N;
 double Sum;
 printf("Enter N( >= 1 ): ");
 scanf("%d", &N);

 for ( int n = 1; n <= N; n++)
 {
   Sum += 1.0 / n;
 }
 printf("Result = %lf", Sum);

 return 0;
}
