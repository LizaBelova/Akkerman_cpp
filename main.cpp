#include <iostream>
#include <stdio.h>
using namespace std;
  /* ����������� ���������� ������� ��������� */
  main () /* ���������� */
  {
       int x,y,n,t;  /* ������� */
       int ackr(int, int, int);
       cout << "Input n, x, y: \t";
       scanf("%d %d %d",&n,&x,&y);
       t=ackr(n,x,y);
       cout << "Output: \t";
       printf("%d",t);
  }
  int smacc( int n,int x ) /* ��������������� */
  {
       switch (n) /* ������� */
       {
           case 0: return(x+1);
           case 1: return (x);
           case 2: return (0);
           case 3: return (1);
           default: return (2);
       }
  }
  int ackr( int n, int x, int y) /* ����������� */
  {
      int z;  /* ������� */
      int smacc( int,int);
      if (n==0 || y==0) z=smacc(n,x);
      else
      {
            z=ackr(n,x,y-1);  /* ����������� */
            z=ackr(n-1,z,x);  /* ������ ackr(...) */
      }
      return z;
  }
