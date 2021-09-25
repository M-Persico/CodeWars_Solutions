/* Michael Persico
 * Sept. 25, 2021
 * Square Every Digit (7 kyu)
 * https://www.codewars.com/kata/546e2562b03326a88e000020
 */

#include <iostream>

bool is_square(int n)
{
  if (!(n < 0)) {
    for (int i = 0; i <= n; i++) {
      if (i * i == n) {
        return true;
      }
    }
  }
  return false;
}

int main() {
    std::cout << is_square(-1) << std::endl;
    std::cout << is_square(0) << std::endl;
    std::cout << is_square(3) << std::endl;
    std::cout << is_square(4) << std::endl;
    std::cout << is_square(25) << std::endl;
    std::cout << is_square(26) << std::endl;

}
