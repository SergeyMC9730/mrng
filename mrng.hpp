#pragma once

#include <stdint.h>

inline int mrng(){
  uintptr_t base = 0;
  int rng = -(static_cast<long int>(reinterpret_cast<uintptr_t>(&base) / 256);
  
  return rng;
}
