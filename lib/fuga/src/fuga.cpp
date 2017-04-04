#include "fuga.hpp"

// clang-format off
#define STRINGIFY_HELPER(v) #v
#define VERSION_STRINGIFY(v) STRINGIFY_HELPER(v)
#define VERSION_STRING VERSION_STRINGIFY(FUGA_VERSION_MAJOR) "." \
                       VERSION_STRINGIFY(FUGA_VERSION_MINOR) "." \
                       VERSION_STRINGIFY(FUGA_VERSION_PATCH)
// clang-format on

namespace fuga {

Fuga::Fuga() : i_(1), d_(2.2) {}

const char* Fuga::version() { return VERSION_STRING; }

int Fuga::i() { return i_; }

double Fuga::d() { return d_; }

}  // namespace fuga

#undef STRINGIFY_HELPER
#undef VERSION_STRINGIFY
#undef VERSION_STRING
