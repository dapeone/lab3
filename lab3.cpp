#include <iostream>
#include <cmath>

int main() {
  double temp1, temp2, temp, tol1, tepl1, tol2, tepl2, t, x, a;
  temp1 = 650;
  temp2 = 45;
  tol1 = 0.55;
  tepl1 = 0.8;
  tol2 = 0.13;
  tepl2 = 0.2;
  
  t = 500;
  a = 100;

  temp = ((tepl1 / tol1 * temp1) + (tepl2 / tol2 * temp2)) / ((tepl1 / tol1) + (tepl2 / tol2));

  while (t > 149) {
    if (t > temp) {
      x = ((t - temp1)/(temp - temp1)) * tol1;
    }
    if (t < temp ) {
      x = (((t - temp)/(temp2 - temp)) * tol2) + tol1;
    }
    std::cout << x << std::endl;
    
    if (a = 100) {
      t = t - a;
      a = a + 50;
    }
    else {
      t = t - a;
      a = a - 50;
    }
  }

  return 0;
}

