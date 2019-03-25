#include "util.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;


void testVec(){
  vector<string> vec{"Hei", "hello", "hade"};
  vector<string>::iterator a;
  std::vector<string>::reverse_iterator v;


  cout << "Dette er første del:\n\n";
  for(a = vec.begin(); a != vec.end(); a++){
    cout << *a << endl;
  }


  cout << "Dette er andre del\n\n";
  for(v = vec.rbegin(); v != vec.rend(); v++){
    cout << *v << endl;}



}

void replace(std::vector<std::string>&  a,string old, string n){
  vector<string>::iterator a_ptr;

  for(a_ptr = a.begin(); a_ptr != a.end(); a_ptr++){
    if(*a_ptr == old){
    a_ptr = a.erase(a_ptr);
    a_ptr = a.insert(a_ptr,n);
    }
    else{}
  }

}


void replaceTest(){
  string old = "hade";
  string n = "Hei";
  vector<string> h{"hei", "hei", "hade","hade"};
  replace(h,old,n);
  for(std::vector<string>::iterator v = h.begin(); v != h.end(); v++){
    cout << *v << endl;
  }

}
