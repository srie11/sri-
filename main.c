# include <stdio.h>
int main(void){
  int a,b,c;
  printf("Enter the angles of a  triangle(in degrees):\n");
  printf("a = ");
  scanf("%d", &a);
  printf("b = ");
  scanf("%d", &b);
  printf("c = ");
  scanf ("%d", &c);

  if (a+b+c!=180)
   printf("Invalid angles\n");
  else if( a==b && b==c)
   printf("Equilatral triangle\n");
  else if (a==b || b==c ||c==a)
   printf("Isosceles\n");
  else
   printf("scalene\n") ;
  return 0;
}