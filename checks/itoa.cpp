// iota example
#include <iostream>     // std::cout
#include <numeric>      // std::iota
//using namespace std;
int main () {
  int init = 100;
  int numbers[10];

  std::iota (numbers,numbers+10,100);

  std::cout << "numbers:";
  for (int i=1; i<10; i++) std::cout << ' ' << i;
  std::cout << '\n';

  return 0;
}
