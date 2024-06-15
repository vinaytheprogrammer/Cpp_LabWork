// 4.) Demonstrate the recursive handling of exception during function call.
// Demonstrate restricting of exceptions thrown by a function 
#include <iostream>

void foo(int n) throw(std::runtime_error) {
  if (n <= 0) {
    throw std::runtime_error("Invalid argument: n must be positive");
  }
  std::cout << "foo(" << n << ") called." << std::endl;
}

int main() {
  try {
    foo(-1);
  }
  catch (const std::exception& e) {
    std::cerr << "Exception caught: " << e.what() << std::endl;
  }
  return 0;
}
