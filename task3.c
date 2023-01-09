#include <stdio.h>
#include <stdlib.h>

int numbers(FILE *f);

int main()
{
  FILE *f;
  f = fopen("001.txt", "r"); // назва txt документа
  printf("Amount numbers in file is: " "%d", numbers(f));
  fclose(f);
  return 0;
 }

int numbers(FILE *f)
{
 char symbol = fgetc(f);
 int var = 0;
 int numbers = 0;

 if (symbol == EOF)
  {
   printf("Please write symbol\n");

   return 0;

  }
 while (symbol != EOF)
  {

 if ((symbol == '\t ' || symbol == '\n' || symbol == '.' || symbol == ' ') && var != 0)
    {
     numbers++;
     var = 0;
    }
   else if (symbol = '0,1,2,3,4,5,6,7,8,9')
      {
      var = 1;
      symbol = fgetc(f);
      }
  }
     if (var != 0)
     numbers++;

  return numbers;
}
