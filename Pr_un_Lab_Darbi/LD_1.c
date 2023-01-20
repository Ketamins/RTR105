#include<stdio.h>
#include<math.h>

double mans_j1(double x, int terms) {
  double a, S, x_pow;
  int k;

  if(x < 0) {
    printf("X jaabuut vienaadam vai lielakam par 0.\n");
    return 0;

  }
  x_pow = x;
  S = x_pow / 3.0;
  printf("k: %d\t a: %.8f\t S: %.8f\n", 0, x_pow/3.0, S);
  for(k = 1; k <= terms; k++) {
    x_pow = -x_pow * x * x;
    a = x_pow / ((2 * k + 1) * (2 * k));
    S += a;
    printf("k: %d\t a: %.8f\t S: %.8f\n", k, a, S);
  }
  return S;
}


void main() {
  double x = 2.05, y, yy;

  y = j1(x);
  printf("Standarta funckija - y = j1(%.2f) = %.8f\n", x, y);

  yy = mans_j1(x, 20);
  printf("Mana funkcija - y = mans_j1(%.2f) = %.8f\n", x, yy);
}

//neesmu paarliecinats par to vai funkcija pareiza. Skatijos no interneta
//un sis bija tuvakais ko dabuju rezultatam kas izskatas pareizi
