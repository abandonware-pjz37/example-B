#include <example_B/boo.hpp>

#include <iostream> // std::cout

namespace example_B {

int boo() {
  std::cout << "hello from example B" << std::endl;
  return example_A::foo() + 0x42;
}

} // namespace example_B
