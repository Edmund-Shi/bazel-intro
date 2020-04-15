#include <ctime>
#include <iostream>

struct Timer {
  void now() {
    auto now = std::time(0);
    std::cout << std::ctime(&now) << std::endl;
  }
};
