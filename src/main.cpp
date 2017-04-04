#include <iostream>

#include "fuga.hpp"
#include "hoge.hpp"

int main(void) {
  std::cout << "hoge::Hoge::version():" << hoge::Hoge::version() << "\n";
  hoge::Hoge h;
  std::cout << "h.i:" << h.i() << ":"
            << "h.d:" << h.d() << "\n";

  std::cout << "fuga::Fuga::version():" << fuga::Fuga::version() << "\n";
  fuga::Fuga f;
  std::cout << "f.i:" << f.i() << ":"
            << "f.d:" << f.d() << "\n";

  return 0;
}
