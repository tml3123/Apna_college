#include <iostream>
using namespace std;
int main()
{
  int rows = 7;
  for (int i = 1; i <= 4; i++)
  {
     if(i==1||i==2||i==3)
      {
       cout << "            ";
      }


    for (int j = 1; j <= i; j++)
    {
       cout<<"*";
        if (i == 4)
      {
        for(i=1;i<4;i++){
          cout<<"*";
        }
      }
    }

    cout << endl;
  }
 

  for (int i = 1; i <= 3; i++)
  { // my logic
      cout << "            ";
    for (int j = 3; j >= i; j--)
    {
       cout<<"*";
    }
    cout << endl;
  }

  return 0;
}