#include <iostream>
using namespace std;
#define bu int
int butter(bu n)
{
  bu i, j;

  for (i = 1; i <= 4; i++)
  {

    for (j = 1; j < 4; j++)
    {
      cout << " ";
    }

    for (j = 1; j <= i; j++)
    {
      if (i == 2 && j == 1 || i == 3 && j == 2 || i == 4 && j == 3 ||
          i == 3 && j == 1 || i == 4 && j == 2 ||
          i == 4 && j == 1)
      {

        cout << " ";
      }

      else
      {
        cout << "*";
      }
    }
    for (j = 1; j <= 2 * (4 - i); j++)
    {
      cout << " ";
    }
    for (j = 1; j <= i; j++)
    {
      if (i == 1 && j == 1 ||
          i == 2 &&
              j == 2 ||
          i == 3 && j == 2 ||
          i == 4 && j == 1)
      {
        cout << "*";
      }
    }

    cout << endl;
  }

  for (int i = 1; i <= 4; i++)
  {

    for (int j = 1; j <= 4 - i; j++)
    {
      cout << " ";
    }
    for (int j = 1; j <= 2 * i - 1; j++)
    {
      cout << "*";
    }
    for (j = 1; j <= 2 * (4 - i); j++)
    {
      cout << " ";
    }
    for (j = 1; j <= i; j++)
    {
      cout << "*";
    }
    for (j = 2; j <= i; j++)
    {
      cout << "*";
    }

    cout << endl;
  }

  for (int i = 4; i >= 1; i--)
  {

    for (int j = 1; j <= 4 - i; j++)
    {
      cout << " ";
    }
    for (int j = 1; j <= 2 * i - 1; j++)
    {
      cout << "*";
    }

    for (j = 4; j >= i; j--)
    {
      cout << " ";
    }
    for (j = 3; j >= i; j--)
    {
      cout << " ";
    }
    for (j = 1; j <= i; j++)
    {
      cout << "*";
    }
    for (j = 1; j < i - 1; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
}

int main()
{

  bu n = 5;
  butter(n);

  return 0;
}