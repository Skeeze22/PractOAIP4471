#include <stdio.h>
#include <math.h> 
#define n 3 //размер двумерного массива
//я не помню задачу=(
int main(void)
{
int i,j,a,nx,max,z,k;
int mas[n][n]={-11,16,0,-10,13,16,-4,15,0};//заполненый массив
int mis[a]; //одномерный массив
int x[n*n/2];//
for (i=0;i<n;i++) 
 {
    for (j = 0;j<n;j++)
    {
      printf("%3d ",mas[i][j]);//вывод в консоль двумерного массива
    }
    printf("\n");
 }
 
 nx=0;
for (i=0;i<n;i++)
  for (j=0;j<n;j++)//идем по первым значениям 
    { 
    for (k=i;k<n;k++) //идем по значениям снова в той же матрице
      for (z=0;z<n;z++)
        if ( (mas[i][j]==mas[k][z]) && ((z!=k)&&(j!=z) ) || ((i==k) && (z>j))) //сама задача
          x[nx++]=mas[i][j];//новому элементу массива x присваиваем значение
    }
for(i=0;i<nx;i++)
{
if (nx>0)
{
  max = x[0];
  for (i=1;i<nx;i++)
    if (x[i]>max)
      max=x[i];
    printf("%d ",max);
}
}
return 0;
}