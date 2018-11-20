#include <stdio.h>
#include <math.h> 
#define n 3//размер матрици 

int main(void)
{
int i,j,a,stolbec,summa;
int mas[n][n]={15,15,0,-10,13,13,-4,14,14};//значения матрицы
int x[n];//одномерный массив
for (i=0;i<n;i++) 
    {
        for (j=0;j<n;j++)
          {
             printf("%3d ",mas[i][j]);//вывод двумерной матрицы
          }
          printf("\n");
    }
 for (j=0;j<n;j++)
          {
            x[j]=0;//обнулем  значение j элемента одномерного массива
            for (i=0;i<n;i++) 
            {
            x[j]+=mas[i][j];//сложение
            stolbec = j;//номер столбца
            }
          }
for (j=0;j<n;j++)
{
  if (summa < x[j])//если предыдущя сумма меньше новой
  summa = x[j];//присваиваем новое значение
}
printf("stolbec %d ",stolbec);//вывод номера столбца
printf("summa %d", summa);//вывод суммы
return 0;
}