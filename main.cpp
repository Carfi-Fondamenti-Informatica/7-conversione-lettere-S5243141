#include <iostream>
#include "lib.h"
using namespace std;

int main() {
  char b;
  cin >> b;
  int a = (int)b;
  bool x = carattere(a);
  
  if (x==1) {
    if ((a >= 65) && (a <= 90)) {
      a = a+32;
      cout << (char)a <<endl;
    } else if ((a >= 97) && (a <= 122)) {
      a = a-32;
      cout << (char)a <<endl;
    }
  } else {
    cout << "errore" <<endl;
  }
  return 0;
}
