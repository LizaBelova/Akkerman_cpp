#include <iostream>
#include <stdio.h>
using namespace std;
  /* рекурсивное вычисление функции Аккермана */
  main () /* вызывающая */
  {
       int x,y,n,t;  /* функция */
       int ackr(int, int, int);
       cout << "Input n, x, y: \t";
       scanf("%d %d %d",&n,&x,&y);
       t=ackr(n,x,y);
       cout << "Output: \t";
       printf("%d",t);
  }
  int smacc( int n,int x ) /* вспомогательная */
  {
       switch (n) /* функция */
       {
           case 0: return(x+1);
           case 1: return (x);
           case 2: return (0);
           case 3: return (1);
           default: return (2);
       }
  }
  int ackr( int n, int x, int y) /* рекурсивная */
  {
      int z;  /* функция */
      int smacc( int,int);
      if (n==0 || y==0) z=smacc(n,x);
      else
      {
            z=ackr(n,x,y-1);  /* рекурсивные */
            z=ackr(n-1,z,x);  /* вызовы ackr(...) */
      }
      return z;
  }
