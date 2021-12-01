#pragma once

#include <stdint.h>

inline long int mrng(){
  uintptr_t base = 0;
  long int rng = -(static_cast<unsigned int>(reinterpret_cast<uintptr_t>(&base) / 256);
  
  return rng;
}
