#include <example_B/boo.hpp>

#include <iostream> // std::cout
#include <example_A/foo.hpp>

namespace example_B {

int boo() {
  std::cout << "hello from example B (update #0)" << std::endl;
  return example_A::foo() + 0x42;
}

} // namespace example_B
