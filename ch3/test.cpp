#include <iostream>
#include <string>
#include <vector>

namespace LIBC_NAMESPACE
{

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

} // namespace LIBC_NAMESPACE

using namespace LIBC_NAMESPACE;

int main()
{

    const vector<string> scores = {"F",  "D", "C", "B", "A", "A++"};

    string lettergrade;

    int gradle;

    cin >> gradle;

    if (gradle < 60)
        lettergrade = scores[0];
    else 
        lettergrade = scores[(gradle - 50) / 10];

    return 0;
}