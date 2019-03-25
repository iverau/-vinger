#ifndef LIST
#define LIST
#include <iostream>
#include <string>
#include <list>

using namespace std;


class Person{
private:
string fornavn;
string etternavn;
public:
  string getFornavn() const {return fornavn;}
  Person():fornavn(""),etternavn(""){}
  Person(string f, string e):fornavn(f),etternavn(e){}
  friend ostream& operator<<(ostream& stream, const Person& p);
};

ostream& operator<<(ostream& stream, const Person& p);
void insertOrdered(list<Person> &l, const Person& p);
void testThisClass();
#endif
