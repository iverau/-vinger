#include "list.h"
#include <iostream>

using namespace std;

ostream& operator<<(ostream& stream, const Person& p){
  stream << p.fornavn << " " << p.etternavn << endl;
  return stream;
}
