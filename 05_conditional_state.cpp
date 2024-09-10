#include <iostream>
using namespace std;
#define i int
i main()
{

    // i age = 14;
    // if (age >= 18)
    // {
    //     cout << "can vote" << endl;
    // }
    // else
    // {
    //     cout << "can't vote" << endl;
    // }

//TERNARY OPERATOR

// bool isAdult;
// i age;
// cout<<"enter age:";
// cin>>age;
// if (age>=18){
//     isAdult=true;
// }
// else{
//     isAdult=false;
// }
// isAdult=age>=18?true:false;

// i num=34;

// bool eo=num%2==0?true:false;


i day;

cin>>day;

switch(day){
    case 1:cout<<"monday";
    break;//prekeyword
    case 2:cout<<"tuesday";
    break;
     case 3:cout<<"wednesday";
    break;
    case 4:cout<<"thursday";
    break;
    default:cout<<"invalide";
}
    return 0;
}
