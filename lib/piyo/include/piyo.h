#ifndef PIYO_H
#define PIYO_H

#define PIYO_VERSION_MAJOR 100
#define PIYO_VERSION_MINOR 200
#define PIYO_VERSION_PATCH 300

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

typedef struct {
  int i_;
  double d_;
} piyo_Piyo ;

const char* piyo_version();

void piyo_InitPiyo(piyo_Piyo* ptr);

#ifdef __cplusplus
}
#endif // __cplusplus

#endif  // PIYO_H
