#include <stdio.h>
#include <math.h>

int main(){

  double A = sqrt(9); // raíz quadrada
  double B = pow(2, 4); // potência (base, expoente)
  int C = round(3.14); // arredonda normalmente
  int D = ceil(3.14); // arredonda para cima
  int E = floor(3.99); // arredonda para baixo
  double F = fabs(-100); // valor absoluto
  double G = log(3);
  double H = sin(45);
  double I = cos(45);
  double J = tan(45);

  printf("A: %lf\n", A);
  printf("B: %lf\n", B);
  printf("C: %d\n", C);
  printf("D: %d\n", D);
  printf("E: %d\n", E);
  printf("F: %lf\n", F);
  printf("G: %lf\n", G);
  printf("H: %lf\n", H);
  printf("I: %lf\n", I);
  printf("J: %lf\n", J);

  return 0;
}