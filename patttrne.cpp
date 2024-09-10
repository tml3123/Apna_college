#include <iostream>
using namespace std;
int main()
{
  int i, j;
  for (i = 1; i <= 4; i++)
  {

    for (j = 1; j <= 4 - i; j++)
    {
      cout << " ";
    }
    for (j = 1; j <= i; j++)
    {
      cout << "*";
    }

    cout << endl;
  }
  // floyds triangle

  int num = 1;
  for (i = 1; i <= 4; i++)
  {

    for (j = 1; j <= i; j++)
    {

    cout<<num++<<" ";
    }
    cout << endl;
  }
  return 0;
}