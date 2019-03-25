#include "list.h"
#include <iostream>

using namespace std;

ostream& operator<<(ostream& stream, const Person& p){
  stream << p.fornavn << " " << p.etternavn << endl;
  return stream;
}


void insertOrdered(list<Person> &l, const Person& p){
  list<Person>::iterator lit = l.begin();
  if(l.empty()){
    lit = l.insert(lit,p);
    return;
  }


  for(lit = l.begin(); lit != l.end(); ++lit){
    if(lit->getFornavn() > p.getFornavn()){
      lit = l.insert(lit,p);
      return;
    }
  }
}

void testThisClass(){
  Person a{"iver","Knut"};
  Person b{"Hans","grete"};
  Person c{"hei","hade"};
  Person d{"Dick", "head"};

  cout << d << endl;

  list<Person> l{};

  insertOrdered(l,a);
  insertOrdered(l,b);
  insertOrdered(l,c);
  insertOrdered(l,d);

  for(auto v : l){
    cout << v << endl;
  }


}
