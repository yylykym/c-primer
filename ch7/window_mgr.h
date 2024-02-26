#include <string>
#include <vector>

class Screen; // 前向声明 Screen 类

class Window_mgr
{
 public:
  // 窗口中每个屏幕的编号
  using ScreenIndex = std::vector<Screen>::size_type;
  void clear(ScreenIndex);

private:
	std::vector<Screen> screens;
};



