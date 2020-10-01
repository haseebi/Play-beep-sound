#include <iostream>
#include <windows.h>   // WinApi header file
using namespace std;
int main(int argc, char *argv[])
{
  Beep(200.0000,500);
  Beep(523.2511,500);  // 523.2511 hertz (C5) for 500 milliseconds
  Beep(587.3295,500);
  Beep(590.4565,500);
  Beep(659.2551,500);
  Beep(698.4565,500);
  Beep(783.9909,500);
  
  cin.get(); // wait
  return 0;
}
