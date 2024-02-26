#include <iostream>
int main()
{

    // currVal 是正在统计的值， val 是新值
    int currVal = 0, val = 0;

    // 保证第一个数，有数据可以处理
    if (std::cin >> currVal)
    {
        int cnt = 1;
        while (std::cin >> val)
        {
            if (val == currVal)
                ++cnt;
            else
            {
                std::cout << currVal << " occurs " << cnt << " times " << std::endl;
                currVal = val;
                cnt = 1;
            }
        }
        // 记住打印文件中最后一个值的个数
        std::cout << currVal << " occurs " << cnt << "times" << std::endl;
    }

    return 0;
}