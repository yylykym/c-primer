
#include <array>
#include <iostream>
#include <list>
#include <string>
#include <vector>
using namespace std;

vector<int>::iterator find(vector<int>::iterator begin, vector<int>::iterator end, int n)
{
    for (; begin != end; begin++) {
        if (*begin == n) {
            return begin;
        }
    }
    return end;
}

int main()
{
    list<char *> cList;
    list<string> strList;

    strList.assign(cList.begin(), cList.end());

    return 0;
}