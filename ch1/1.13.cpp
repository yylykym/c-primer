#include <iostream>
void sum50To100()
{
    int sum = 0;
    for (int val = 50; val <= 100; ++val)
    {
        sum += val;
    }
    std::cout << "Sum of 50 to 100 inclusive is " << sum << std::endl;
}
void print10To0()
{
    for (int i = 10; i >= 0; i--)
    {
        std::cout << i << std::endl;
    }
}
void printStartToEnd()
{
    int start = 0, end = 0;
    std::cout << "Please input two num: ";
    std::cin >> start >> end;
    for (; start <= end; start++)
    {
        std::cout << start << " ";
    }
    std::cout << std::endl;
}
int main()
{
    sum50To100();
    print10To0();
    printStartToEnd();
    return 0;
}