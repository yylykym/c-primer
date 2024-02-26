#include <istream>

#include "iostream"
using namespace std;
class Person
{
  friend istream &read(istream &is, Person &item);
  friend ostream &print(ostream &os, const Person &item);

 public:
  Person() : Person("", "") {};
  Person(const string &name, const string &address)
      : name(name), address(address) {};
  explicit Person(istream &is) : Person() { read(is, *this); };
  string getName() const & { return name; }
  string getAddress() const & { return address; }

 private:
  string name;
  string address;
};

inline istream &read(istream &is, Person &item)
{
  is >> item.name >> item.address;
  return is;
}
inline ostream &print(ostream &os, const Person &item)
{
  os << item.name << " " << item.address;
  return os;
}
