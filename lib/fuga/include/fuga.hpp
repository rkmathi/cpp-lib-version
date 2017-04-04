#ifndef FUGA_HPP
#define FUGA_HPP

#define FUGA_VERSION_MAJOR 10
#define FUGA_VERSION_MINOR 20
#define FUGA_VERSION_PATCH 30

namespace fuga {

class Fuga {
 public:
  Fuga();
  static const char* version();
  int i();
  double d();

 private:
  int i_;
  double d_;
};

}  // namespace fuga

#endif  // FUGA_HPP
