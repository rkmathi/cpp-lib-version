#include <iostream>
#include "hoge.hpp"

int main(void) {
  std::cout << "hoge::Hoge::version():" << hoge::Hoge::version() << "\n";

  hoge::Hoge h;
  std::cout << "i:" << h.i() << ":"
            << "d:" << h.d() << "\n";

  return 0;
}
