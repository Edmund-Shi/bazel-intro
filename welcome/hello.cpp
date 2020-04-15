#include "welcome/greeting.h"
#include <iostream>

int main() {
  Greeting greeting;
  greeting.run();
  std::cout << "hello world!" << std::endl;
  return 0;
}
