#include "piyo.h"

// clang-format off
#define STRINGIFY_HELPER(v) #v
#define VERSION_STRINGIFY(v) STRINGIFY_HELPER(v)
#define VERSION_STRING VERSION_STRINGIFY(PIYO_VERSION_MAJOR) "." \
                       VERSION_STRINGIFY(PIYO_VERSION_MINOR) "." \
                       VERSION_STRINGIFY(PIYO_VERSION_PATCH)
// clang-format on

const char* piyo_version() { return VERSION_STRING; }

void piyo_InitPiyo(piyo_Piyo* ptr) {
  ptr->i_ = 10;
  ptr->d_ = 23.4;
  return;
}

#undef STRINGIFY_HELPER
#undef VERSION_STRINGIFY
#undef VERSION_STRING
