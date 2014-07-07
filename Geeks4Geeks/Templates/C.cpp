#include <iostream>
 
using namespace std;
 
template <typename T>void fun(T x)
{
  static double i = 10.5;
  cout << ++i;
  return;
}
 
int main()
{   
  fun<int>(1);  // prints 11
  cout << endl;
  fun<int>(2);  // prints 12
  cout << endl;
  
  fun<double>(1.1); // prints 11
  cout << endl;

  fun<int>(2);  // prints 12
  cout << endl;

  return 0;
}
