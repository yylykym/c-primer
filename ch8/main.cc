#include <fstream>
#include <iostream>
#include <istream>
#include <ostream>
#include <sstream>
#include <string>
#include <thread>
#include <vector>

#include "../ch7/Sales_data.h"

using namespace std;

istream& read(istream& is)
{
  string buffer;
  while (is >> buffer) std::cout << buffer << std::endl;
  is.clear();
  return is;
}

void ReadFileToVec(const string& fileName, vector<string>& vec)
{
  ifstream ifs(fileName);
  cout << ifs.is_open() << endl;
  if (ifs)
  {
    string buf;
    while (ifs >> buf) vec.push_back(buf);
  }
}

int main(int argc, char** argv)
{
  //    ifstream input(argv[1]);
  //     ofstream output(argv[2]);
  //     Sales_data total;
  //     if (read(input, total))
  //     {
  //         Sales_data trans;
  //         while (read(input, trans))
  //         {
  //             if (total.isbn() == trans.isbn())
  //                 total.combine(trans);
  //             else
  //             {
  //                 print(output, total) << endl;
  //                 total = trans;
  //             }
  //         }
  //         print(output, total) << endl;
  //     }
  //     else
  //     {
  //         cerr << "No data?!" << endl;
  //     }
  ifstream ifs(argv[1]);
  vector<string> vecLine;
  string line;

  while (getline(ifs, line)) vecLine.push_back(line);
  for (auto& s : vecLine)
  {
    istringstream iss(s);
    string word;
    while (iss >> word) cout << word << endl;
  }
  return 0;
}