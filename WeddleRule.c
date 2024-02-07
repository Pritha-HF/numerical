// weddle
#include <math.h>
#include <stdio.h>

float f(float x) { return (1 / (1 + x * x)); }

int main() {
  float a, b, h, wedd;
  int n, i;
  printf("Enter value of \na\tb\tn\n");
  scanf("%f %f %d", &a, &b, &n);

  h = (b - a) / n;
  wedd = f(a) + f(b);
  for (i = 1; i < n; i++) {
    if (i % 2 == 0 && i % 3 != 0)
      wedd = wedd + f(a + h * i);
    else if (i % 2 != 0 && i % 3 != 0)
      wedd = wedd + 5 * f(a + h * i);
    else if (i % 2 != 0 && i % 3 == 0)
      wedd = wedd + 6 * f(a + h * i);
    else
      wedd = wedd + 2 * f(a + h * i);
  }
  wedd = (wedd * 3 * h) / 10;
  printf("Result : %f", wedd);
  return 0;
}





