#include <iostream>
#include<iomanip>

using namespace std;
int main()
{
    int age = 25;
    int marks = -877;
    char grade = 'A';
    bool isAdult = false;

    cout << "bool=" << isAdult << endl;
    cout << "grade=" << grade << "\nsize of char=" << sizeof(char) << endl;
    cout << "marks=" << marks << endl;
    cout << "size of int=" << sizeof(int) << endl;

  //  float flt=3.24243535332;
  //  double dbl=56.45983275287593;

  // cout<<setprecision(12)<<"float:"<<flt<<endl;
  // cout<<setprecision(12)<<"double:"<<dbl<<endl;

    return 0;
}