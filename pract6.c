#include <stdio.h>
#include <stdlib.h>
#define n 4
int sort1(float a[]) //пузырь(обмен)
{
  int i,j,k;
int col=0;
float x;
 for (i=1;i<n;i++)
  for (j=n;j>=i;j--)
    if(a[j]<a[j-1])
      {
        x=a[j];
        a[j]=a[j-1];
        a[j-1]=x;
        col++;
 }
      return col;
}
void sort2(float *a,int *col) //выбор
{
  int i,j,k;
  float x;
  *col=0;
  for (i=2;i<=n;i++)
  {
    x=a[i];
    a[0]=x;
    for (j=i;x<a[j-1];j--)
      a[j]=a[j-1];
    a[j]=x;
  }
}
int sort3(float a[]) //вставка
{
    int min, imin,l;
    int col=0;
    for (int i=1;i<n;i++)
    {
        min=a[i];
        imin=i;
        l=i+1;
        while(l<=n)
        {
          if(a[l]<a[imin])
          {
            min=a[l];
            imin=l;
            col++;
          }
          l++;
        }
        a[i] = min;
    }
}
int main(void) //тут не работает вызов функции, нужно объявить прототипы функций, но мне лень
{
  float mas[n+1];
  int i,col;
  int x;
  printf("\nВведите массив");
  for (i=1;i<=n;i++)
  {
  printf("\nВведите  %d элемент массива",i);
  scanf("%f",&mas[i]);
  }
  int level;
  printf("\nвведите метод сортировки (1-обмен,2-выбор,3-вставки)");
  scanf("%d",&level);
  switch (level) {
        case 1: 
            col=sort1(mas);
            break;
        case 2:
            sort2(mas,&col);
            break;
        case 3:
            sort3(mas);
            break;
        default:
            printf( "Неправильный ввод.\n" );
  }
  for (i=1;i<=n;i++)
  {
  printf("| %5.2f |",mas[i]);
  }
  printf(" col = %d", col);
}  
