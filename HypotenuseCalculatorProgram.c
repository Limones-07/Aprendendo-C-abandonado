#include <stdio.h>
#include <math.h>

int main() {

  double a;
  double b;
  double c;

  printf("Insert the value of the side a: ");
  scanf("%lf", &a);
  printf("Insert the value of the side b: ");
  scanf("%lf", &b);

  c = sqrt(b*b + a*a);
  printf("The hypotenuse is %lf\n", c);

  return 0;
}