#include<iostream>
#include<vector>
using namespace std;
int main(){

vector<int> vec={1,2,3,4};
cout<<"size:"<<vec.size()<<endl;
cout<<"capacity:"<<vec.capacity()<<endl;

vec.push_back(5);
cout<<"after pushback()(size):"<<vec.size()<<endl;
cout<<"after pushback()(capacity):"<<vec.capacity()<<endl;

vec.push_back(6);
cout<<"after 6 pushback()(size):"<<vec.size()<<endl;
cout<<"after 6 pushback()(capacity):"<<vec.capacity()<<endl;

vec.push_back(7);
cout<<"after 7 pushback()(size):"<<vec.size()<<endl;
cout<<"after 7 pushback()(capacity):"<<vec.capacity()<<endl;

vec.push_back(8);
cout<<"after 8 pushback()(size):"<<vec.size()<<endl;
cout<<"after 8 pushback()(capacity):"<<vec.capacity()<<endl;

vec.push_back(9);
cout<<"after 9 pushback()(size):"<<vec.size()<<endl;
cout<<"after 9 pushback()(capacity):"<<vec.capacity()<<endl;

    return 0;
}   