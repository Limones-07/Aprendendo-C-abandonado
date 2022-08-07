#include <stdio.h>

int main() {

  const double PI = 3.141592653589793;
  double radius;
  double circumference;
  double area;

  printf("What is the radius of the circle? (cm) ");
  scanf("%lf", &radius);

  circumference = 2*PI*radius;
  printf("The circumference of the circle is %.10lfcm\n", circumference);

  area = PI*radius*radius;
  printf("The area of the circle is %.10lfcm²\n", area);

  return 0;
}