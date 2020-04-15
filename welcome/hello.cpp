#include "modules/time_utils/timer.h"
#include "welcome/greeting.h"
#include <iostream>

int main() {
  Greeting greeting;
  Timer timer;
  timer.now();
  greeting.run();
  std::cout << "hello world!" << std::endl;
  return 0;
}
