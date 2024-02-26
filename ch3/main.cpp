#include <algorithm> // for remove_if
#include <cctype>
#include <cstddef>
#include <cstring>
#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

void q_3_2()
{
    string line;
    while (cin >> line)
    {
        cout << line << endl;
    }
}

void q_3_4()
{
    string str1;
    string str2;
    cin >> str1 >> str2;
    if (str1.size() >= str2.size())
    {
        cout << str1 << endl;
    }
    else
    {
        cout << str2 << endl;
    }
}

void q_3_5()
{
    string str, res;
    while (cin >> str)
    {
        res += str + " ";
    }
    cout << res << endl;
}

void q_3_6()
{
    string s("Hello World");
    for (auto &c : s)
    {
        c = 'X';
    }
    cout << s << endl;
}

void q_3_7()
{
    string s("Hello World");
    for (auto c : s)
    {
        c = 'X';
    }
    cout << s << endl;
}

void q_3_8()
{
    string s("Hello World");
    cout << "for :" << endl;
    for (int i = 0; i < s.size(); i++)
    {
        s[i] = 'X';
    }
    cout << s << endl;
    cout << "while :" << endl;
    decltype(s.size()) i = 0;
    while (i != s.size())
    {
        s[i] = 'X';
        ++i;
    }
}

void q_3_9()
{
    string s("Hello World!");
    s.erase(remove_if(s.begin(), s.end(), ::ispunct), s.end());
    cout << s << endl;
}

void q_3_14()
{
    vector<int> vec;
    int i = 0;
    while (cin >> i)
    {
        vec.push_back(i);
    }
    for (auto v : vec)
    {
        cout << v << endl;
    }
}

void q_3_15()
{
    vector<string> vec;
    string s;
    while (cin >> s)
    {
        vec.push_back(s);
    }
    for (auto v : vec)
    {
        cout << v << endl;
    }
}

void q_3_16()
{
    vector<int> v1;              // size:0,  no values.
    vector<int> v2(10);          // size:10, value:0
    vector<int> v3(10, 42);      // size:10, value:42
    vector<int> v4{10};          // size:1,  value:10
    vector<int> v5{10, 42};      // size:2,  value:10, 42
    vector<string> v6{10};       // size:10, value:""
    vector<string> v7{10, "hi"}; // size:10, value:"hi"
}

void q_3_17()
{
    string word;
    vector<string> vec;
    while (cin >> word)
    {
        vec.push_back(word);
    }
    for (auto &s : vec)
    {
        for (auto &c : s)
        {
            c = toupper(c);
        }
        cout << s << endl;
    }
}

void q_3_20()
{
    int i = 0;
    vector<int> vec;
    while (cin >> i)
    {
        vec.push_back(i);
    }
    for (int i = 0; i < vec.size() - 1; i++)
    {
        cout << vec[i] + vec[i + 1] << endl;
    }
    int m = 0;
    int n = vec.size() - 1;
    while (m < n)
    {
        cout << vec[m] + vec[n] << endl;
        ++m;
        --n;
    }
}

void q_3_23()
{
    vector<int> ivec{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (vector<int>::iterator iterator = ivec.begin(); iterator != ivec.end(); iterator++)
    {
        (*iterator) *= 2;
        cout << *iterator << endl;
    }
}

void q_3_31()
{
    constexpr size_t size_type = 10;
    int arr[10];
    for (int i = 0; i < size_type; i++)
    {
        arr[i] = i;
    }
    for (int i = 0; i < size_type; i++)
    {
        cout << arr[i] << endl;
    }
}

void q_3_32()
{
    constexpr size_t size_type = 10;
    int arr[size_type];
    for (int i = 0; i < size_type; i++)
    {
        arr[i] = i;
    }
    int newArr[size_type];
    for (int i = 0; i < size_type; i++)
    {
        newArr[i] = arr[i];
    }
    vector<int> ivec(size_type);
    for (int i = 0; i < size_type; i++)
    {
        ivec.push_back(i);
    }
}

void q_3_35()
{
    const int size = 10;
    int arr[size];
    for (auto ptr = arr; ptr != arr + size; ++ptr)
        *ptr = 0;

    for (auto i : arr)
        cout << i << " ";
    cout << endl;
}
/*
编写一段程序，定义两个字符数组并用字符串字面值初始化它们；接着再定义一个字符数组存放前面两个数组连接后的结果。使用strcpy和strcat把前两个数组的内容拷贝到第三个数组当中。
*/
void q_3_40()
{
    const char cstr1[] = "Hello";
    const char cstr2[] = "World";
    constexpr size_t new_size = sizeof(cstr1) + sizeof(" ") + sizeof(cstr2) + 1 - 2;
    char cstr3[new_size];

    strcpy(cstr3, cstr1);
    strcat(cstr3, " ");
    strcat(cstr3, cstr2);
    std::cout << cstr3 << std::endl;
    std::cout << sizeof(cstr3) / sizeof(cstr3[0]) << std::endl;
}

void q_3_41()
{
    constexpr size_t size_type = 5;
    int arr[size_type] = {1, 2, 3, 4, 5};
    vector<int> ivec(begin(arr), end(arr));
}

void q_3_43()
{
    int arr[3][4] = {{0, 1, 2, 3}, {4, 5, 6, 7}, {8, 9, 10, 11}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }

    for (int(&row)[4] : arr)
    {
        for (int col : row)
        {
            cout << col;
        }
        cout << endl;
    }

    for (int(*row)[4] = arr; row != arr + 3; row++)
    {
        for (int *col = *row; col != *row + 4; col++)
        {
            cout << *col;
        }
        cout << endl;
    }
}

auto q_4_10() -> void
{
    int num = 0;
    while (cin >> num && num != 42)
    {
        cout << num << endl;
    }
}

auto q_4_32() -> void
{
    vector<int> ivec{1, 2, 3, 4, 5};
    for (auto &num : ivec)
    {
        cout << (((num & 0x1) != 0) ? num = num * 2 : num) << " ";
    }
}

void q_5_5()
{
    vector<string> scores = {"F", "D", "C", "B", "A", "A++"};
    for (int g; cin >> g;)
    {
        string letter;
        if (g < 60)
        {
            letter = scores[0];
        }
        else
        {
            letter = scores[(g - 50) / 10];
            if (g != 100)
                letter += g % 10 > 7 ? "+" : g % 10 < 3 ? "-" : "";
        }
        cout << letter << endl;
    }
}

void q_5_6()
{
    vector<string> scores = {"F", "D", "C", "B", "A", "A++"};

    int grade = 0;
    while (cin >> grade)
    {
        string lettergrade = grade < 60 ? scores[0] : scores[(grade - 50) / 10];
        lettergrade += (grade == 100 || grade < 60) ? "" : (grade % 10 > 7) ? "+" : (grade % 10 < 3) ? "-" : "";
        cout << lettergrade << endl;
    }
}

void q_5_14()
{

    pair<string, int> max_duplicated;
    int count = 0;
    for (string str, prestr; cin >> str; prestr = str)
    {
        if (str == prestr)
            ++count;
        else
            count = 0;
        if (count > max_duplicated.second)
            max_duplicated = {prestr, count};
    }

    if (max_duplicated.first.empty())
        cout << "There's no duplicated string." << endl;
    else
        cout << "the word " << max_duplicated.first << " occurred " << max_duplicated.second + 1 << " times. " << endl;
}

bool q_5_17(const vector<int> *lhs, const vector<int> *rhs)
{
    
    return true;
}

int main()
{

    // q_3_2();
    // q_3_4();
    // q_3_5();
    // q_3_6();
    // q_3_7();
    // q_3_8();
    // q_3_9();
    // q_3_14();
    // q_3_15();
    // q_3_17();
    // q_3_23();
    // q_3_31();
    // q_3_40();
    // q_3_43();
    // q_4_10();
    int someValue = 0;
    int x = 1;
    int y = 1;
    someValue ? ++x, ++y : --x, --y;
    q_4_32();
    return 0;
}