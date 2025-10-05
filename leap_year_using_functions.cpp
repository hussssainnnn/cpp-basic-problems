#include <iostream>
using namespace std;

void checkLeapYear(int year){
if (year % 400 == 0 )
{
    cout<<year<<"is a leap year";
}

else if (year % 100 ==0)
{
    cout<<year<<"is not a leap year";
}
else if (year % 4 ==0)
{
    cout<<year<<" is  a leap year";
}

else{
cout<<year<<" is not a leap year";
}
}
int main(){
    

    int year;
    cout<<"Enter year:";
    cin>>year;

checkLeapYear(year);
return 0;

}
