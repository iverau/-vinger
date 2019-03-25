#ifndef LIST
#define LIST
#include <iostream>
#include <string>

using namespace std;


class Person{
private:
string fornavn;
string etternavn;

string getFornavn(){return fornavn;}
public:
  Person():fornavn(""),etternavn(""){}
  Person(string f, string e):fornavn(f),etternavn(e){}
  friend ostream& operator<<(ostream& stream, const Person& p);
};

ostream& operator<<(ostream& stream, const Person& p);


#endif
