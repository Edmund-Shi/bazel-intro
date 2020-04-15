#include "modules/time_utils/timer.h"
#include "src/log.h"
#include "welcome/greeting.h"
#include <iostream>

int main() {
  Greeting greeting;
  Timer timer;
  timer.now();
  greeting.run();
  std::cout << "hello world!" << std::endl;
  LOG << "this is a normal log" << std::endl;
  return 0;
}
