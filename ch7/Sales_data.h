#include <istream>

#include "iostream"
using namespace std;

class Sales_data
{
  friend ostream &print(ostream &os, const Sales_data item);
  friend istream &read(istream &is, Sales_data &item);

 public:
  Sales_data() : Sales_data("", 0, 0) {};
  explicit Sales_data(const string &s)
      : Sales_data(s, 0, 0) {

        };
  Sales_data(const string &s, const unsigned n, const double p)
      : bookNo(s), units_sold(n), revenue(n * p) {};
  Sales_data(istream &is) : Sales_data() { read(is, *this); };
  string isbn() const { return bookNo; }
  Sales_data &combine(const Sales_data &);

 private:
  double avg_price() const;
  string bookNo;            // ISBN 编号
  unsigned units_sold = 0;  // 销售数
  double revenue = 0.0;     // 总销售额
};

Sales_data add(const Sales_data &, const Sales_data &);
ostream &print(ostream &, const Sales_data);
istream &read(istream &, Sales_data &);

inline double Sales_data::avg_price() const
{
  if (units_sold)
  {
    return revenue / units_sold;
  }

  return 0;
}

inline Sales_data &Sales_data::combine(const Sales_data &rhs)
{
  units_sold += rhs.units_sold;
  revenue += rhs.revenue;
  return *this;
}

inline ostream &print(ostream &os, const Sales_data item)
{
  os << item.bookNo << " " << item.units_sold << " " << item.revenue << " "
     << item.avg_price();
  return os;
}

inline istream &read(istream &is, Sales_data &item)
{
  is >> item.bookNo >> item.units_sold >> item.revenue;
  return is;
}
