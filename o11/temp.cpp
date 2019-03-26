#include "temp.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

template <typename T>
T maximum(T a, T b){
  if(a < b){
    return b;
  }
  return a;
}

template <typename T>
void shuffle(vector<T>& a){
  for(size_t i = 0; i < a.size(); i++){
    int j = rand() % (a.size() -1);
    swap(a[j],a[j+1]);
  }
}
