#include <stdio.h>
#include <stdlib.h>
int akk(int n1, int m1);//прототип функции
int main()
{
  int z,m,n;
    printf("vvedite n \n");//вводим n
    scanf("%d",&n);
    printf("vvedite m \n");//вводим m
    scanf("%d",&m);
    z=akk(n,m);//вызов функции рекурсии аккермана для n и m
    printf("%d\n",z);//вывод значения аккермана
}
int akk(int n1, int m1) //функция
{
  int q=0;
  if(n1==0) {q=m1+1;}//если n равно 0 , q присваиваем значение m+1
  if(n1>0 && m1==0) {q=akk(n1-1,1) ;}//если n больше 0 и m равно 0, то вызываем функцию аккермана с значениями n-1,m=1
  if(n1>0 && m1>0) {q=akk(n1-1,akk(n1,m1-1)); }//есди n>0 и m>0 , то вызываем функцию аккермана с значением n-1, функция аккермана от n,m-1 
  return q;
}