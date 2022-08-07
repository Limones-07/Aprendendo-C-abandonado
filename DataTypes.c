#include <stdio.h>
#include <stdbool.h>

int main() {

  char a = 'C';                 // single character     %c
  char b[] = "Limones";         // array of characters  %s

  float c = 3.141592;                   // 4 bytes (32 bits of precision) 6 - 7 digits    %f
  double d = 3.141592653589793;         // 8 bytes (64 bits of precision) 15 - 16 digits  %lf

  bool e = true;          // 1 byte (true or false)     %d

  char f = 100;                   // 1 byte (-128 to +127)      %d or %c
  unsigned char g = 255;          // 1 byte (0 to +255)         %d or %c

  short h = 32767;            // 2 bytes (-32768 to +32767) %d
  unsigned i = 65535;         // 2 bytes (0 to +65535)      %d

  int j = 2147483647;                   // 4 bytes (-2,147,483,648 to +2,147,483,647) %d
  unsigned int k = 4294967295L;         // 4 bytes (0 to +4,294,967,295)              %u

  long long int l = 9223372036854775807;                    // 8 bytes (-9,223,372,036,854,775,808 to +9,223,372,036,854,775,807) %lli
  unsigned long long int m = 18446744073709551615U;         // 8 bytes (0 to +18,446,744,073,709,551,615)                         %llu

  printf("Char: %c\n", a);
  printf("Char array: %s\n", b);
  printf("Float: %0.6f\n", c);
  printf("Double: %0.15lf\n", d);
  printf("Bool: %d\n", e);
  printf("Char as numeric value: %d\n", f);
  printf("Unsigned char as numeric value: %d\n", g);
  printf("Short: %d\n", h);
  printf("Unsigned short: %d\n", i);
  printf("Int: %d\n", j);
  printf("Unsigned int: %u\n", k);
  printf("Long long int: %lli\n", l);
  printf("Unsigned long int: %llu\n", m);

  return 0;
}