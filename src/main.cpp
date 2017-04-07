#include <iostream>

#include "fuga.hpp"
#include "hoge.hpp"
#include "piyo.h"

int main(void) {
  // check c++11 feature is enabled.
  auto cpp11 = 11;
  std::cout << cpp11 << "\n";

  // check c++14 feature is enabled.
  auto cpp14 = [](auto x, auto y) {return x + y;};
  std::cout << cpp14(11, 3) << "\n";


  std::cout << "fuga::Fuga::version():" << fuga::Fuga::version() << "\n";
  fuga::Fuga f;
  std::cout << "f.i:" << f.i() << ":"
            << "f.d:" << f.d() << "\n";

  std::cout << "hoge::Hoge::version():" << hoge::Hoge::version() << "\n";
  hoge::Hoge h;
  std::cout << "h.i:" << h.i() << ":"
            << "h.d:" << h.d() << "\n";

  std::cout << "piyo_version():" << piyo_version() << "\n";
  piyo_Piyo p;
  piyo_InitPiyo(&p);
  std::cout << "p.i_:" << p.i_ << ":"
            << "p.d_:" << p.d_ << "\n";

  return 0;
}
