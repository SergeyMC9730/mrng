#pragma once

#include <stdint.h>

// Memory Random Number Generator implementation
inline int mrng(){
  uintptr_t base = 0;
  int rng = -(static_cast<long int>(reinterpret_cast<uintptr_t>(&base) / 256));
  
  return rng;
}
