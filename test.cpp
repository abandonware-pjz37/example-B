#include <cstdlib> // EXIT_SUCCESS
#include <iostream> // std::cout
#include "example_B/boo.hpp"

int main() {
  int result = example_B::boo();
  std::cout << "result is " << result << std::endl;
  return EXIT_SUCCESS;
}
