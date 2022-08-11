#include <iostream>

using namespace std;

bool prime(int num)
{
  int i, m=0;

  m=num/2;
  for(i = 2; i <= m; i++)
  {
      if(num % i == 0)
      {
          return false;
      }
  }
  return true;
}
int main()
{
    cout << prime(7);

}
