#include "lib.h"

bool carattere (int a=0){
  if (((a >= 65) && (a <= 90)) || ((a >= 97) && (a <= 122))) {
    return true;
  } else {
    return false;
  }
}
