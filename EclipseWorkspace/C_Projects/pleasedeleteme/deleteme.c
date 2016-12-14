
  #include <math.h>
  #include <stdio.h>

  int main(void)
  {
    double val = -1.0;

    do {
      printf("Hyperbolic cosine of %f is %f.\n", val, cosh(val));
      val += 0.1;
    } while(val<=1.0);

    return 0;
  }
