#include <stdio.h>

int a =3;
int b=2;

void swap(int *x, int *y){
int c;
  c=*x;
  *x=*y;
  *y= c;

}


int main()
{
  swap(&a,&b);
printf("a=%d b=%d\n",a, b );
  return 0 ;
}
