#include <iostream>
using namespace std;
int main()
{
  int num;
  int sum = 0;
  cout << "\n enter the number (0 to terminate)" << endl ;
  do
  {
    
    cin >> num;
    if (num < 0)
    {
      sum += num;
    }
    // else if(num%2 == 0){
    //   sum += num;
    // }
  } while (num != 0);
  cout << "sum of negative number :" << sum << endl;
  // cout<<"sum of enven numbr is:"<< sum << endl;
}
