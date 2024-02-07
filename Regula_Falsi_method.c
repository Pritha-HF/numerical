#include <math.h>
#include <stdio.h>
float f(float x) { return (x * x * x - 5 * x - 7); }
main() {
  float a, b, c, d, e;
  int k = 0;

  printf("enter accuracy");
  scanf("%f", &e);

  do {
    printf("\nEnter a&b:");
    scanf("%f%f", &a, &b);
  } while (f(a) * f(b) > 0);

  do {
    c = a - ((f(a) * (a - b)) / (f(a) - f(b)));
    printf("\nk=%d\ta=%f\tb=%f\tc=%f", k, a, b, c);
    if (f(a) * f(c) < 0)
      b = c;
    else
      a = c;
    k += 1;
  } while (fabs(f(c)) > e);

  printf("\nIteration=%d\troot=%f", k, c);
}