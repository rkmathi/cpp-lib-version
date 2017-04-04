#include "hoge.hpp"

// clang-format off
#define STRINGIFY_HELPER(v) #v
#define VERSION_STRINGIFY(v) STRINGIFY_HELPER(v)
#define VERSION_STRING VERSION_STRINGIFY(HOGE_VERSION_MAJOR) "." \
                       VERSION_STRINGIFY(HOGE_VERSION_MINOR) "." \
                       VERSION_STRINGIFY(HOGE_VERSION_PATCH)
// clang-format on

namespace hoge {

Hoge::Hoge() : i_(1), d_(2.2) {}

const char* Hoge::version() { return VERSION_STRING; }

int Hoge::i() { return i_; }

double Hoge::d() { return d_; }

}  // namespace hoge

#undef STRINGIFY_HELPER
#undef VERSION_STRINGIFY
#undef VERSION_STRING
