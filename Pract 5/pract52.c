#include <stdio.h>
#include <math.h> 
#define n 3//размер матрицы

int main(void)
{
int i,j;//индексы для двидения по матрице 
int mas[n][n]={11,0,12,-1,13,15,0,0,-4}; //значения матрицы
int colstrok = 0;//количество строк
int col0=0;//количество нолей
  printf("123\n");//дебаг лог ога
for (i=0;i<n;i++) 
 {
    for (j = 0;j<n;j++)
    {
      printf("%2d ",mas[i][j]);//вывод массива в консоль
    }
    printf("\n");
 }
for (i=0;i<n;i++)
{ 
  col0=0;
  for (j=0;j<n;j++);
  { 
    if (mas[i][j]==0) // если значение в строке равно 0
      col0++;//увеличиваем число
  }
  if (col0==0)//если 0 в строке не обнаружен
    colstrok++;//увеличиваем кол-во "чистых" строк
} 
printf("colvostrok %d \n",colstrok); 
return 0;
}