#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
  char Predl[100];
  int j,i,schet = 1;
  printf("введите строку");
  gets (Predl);
  i = 0;
  //два пробела рядом
  for (i=0;Predl[i]!='\0';i++)
    {
      if(Predl[i] == ' ' && Predl[i+1] == ' ')
      {
        for (j=i+1;Predl[j]!='\0';j++)
          {
            Predl[j]= Predl[j+1];
        
          }
          i--;
      }
    }
    printf("*%s*\n",Predl);
    //первый символ не пробел
  if (Predl[0] == ' ')
  {
   for(j=0;Predl[j]!='\0';j++)
    Predl[j] = Predl[j+1];
  }
  printf("*%s*\n",Predl);
  //Убираем последний пробел
  if (Predl[strlen(Predl)-1] == ' ')
  {
    Predl[strlen(Predl)-1] = '\0';
  }
    //считаем пробелы
  i = 0;
  while (Predl[i] != '\0')
    {
      if (Predl[i] == ' ')
      {
        schet++;
      }
      i++;
    }
    //вывод
  printf("%d\n",schet);
  printf("*%s*\n",Predl);
  return 0;
}
