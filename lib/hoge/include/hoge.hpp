#ifndef HOGE_HPP
#define HOGE_HPP

#define HOGE_VERSION_MAJOR 1
#define HOGE_VERSION_MINOR 2
#define HOGE_VERSION_PATCH 3

namespace hoge {

class Hoge {
 public:
  Hoge();
  static const char* version();
  int i();
  double d();

 private:
  int i_;
  double d_;
};

}  // namespace hoge

#endif  // HOGE_HPP
