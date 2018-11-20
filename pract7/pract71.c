#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void DelSpace(char Predl[], char c)
{
    int j,i,schet = 1;
  //два пробела рядом
  for (i=0;Predl[i]!='\0';i++)
    {
      if(Predl[i] == c && Predl[i+1] == c)
      {
        for (j=i+1;Predl[j]!='\0';j++)
          {
            Predl[j]= Predl[j+1];
          }
          i--;
      }
    }
    //первый символ не пробел
  if (Predl[0] == c)
  {
   for(j=0;Predl[j]!='\0';j++)
    Predl[j] = Predl[j+1];
  }
  //Убираем последний пробел
  if (Predl[strlen(Predl)-1] == c)
  {
    Predl[strlen(Predl)-1] = '\0';
  }
    //считаем пробелы
  i = 0;
  while (Predl[i] != '\0')
    {
      if (Predl[i] == c)
      {
        schet++;
      }
      i++;
    }
    printf("%d\n",schet);
}


int main(void)
{
  char Predl[100];
  int schet;
  printf("введите строку");
  gets (Predl);
  //вывод
  DelSpace(Predl, ' ');
  DelSpace(Predl, '\t');
  printf("*%s*\n",Predl);
  return 0;
}
