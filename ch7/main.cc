#include <iostream>

#include "Person.h"
#include "Sales_data.h"
#include "screen.h"

using namespace std;

class NoDefault
{
 public:
  NoDefault(int j) {};
};

class C
{
 public:
  C() : def(1) {};

 private:
  NoDefault def;
};

int main()
{
  // Sales_data total(cin);
  // if (!total.isbn().empty())
  // {
  //   std::istream &is = cin;
  //   while (is)
  //   {
  //     Sales_data trans(is);
  //     if (!is) break;
  //     if (total.isbn() == trans.isbn())
  //       total.combine(trans);
  //     else
  //     {
  //       print(std::cout, total) << std::endl;
  //       total = trans;
  //     }
  //   }
  //   print(std::cout, total) << std::endl;
  // }
  // else
  // {
  //   std::cerr << "No data?!" << std::endl;
  //   return -1;
  // }


  return 0;
}