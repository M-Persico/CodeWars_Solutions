/* Michael Persico
 * Sept. 25, 2021
 * You're a square! (7 kyu)
 * https://www.codewars.com/kata/54c27a33fb7da0db0100040e
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
