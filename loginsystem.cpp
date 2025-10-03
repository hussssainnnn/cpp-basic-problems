#include<iostream>
#include<string>
using namespace std;

int main(){


string name;
string correctname ="admin";

string password;
string correctpassword = "1234";

cout<<"Enter name:";
getline(cin,name);

cout<<"Enter password:";
cin>>password;

if (name!=correctname || password!=correctpassword)
{
    cout<<"Access Denied";
}
else
cout<<"Access Granted";






    return 0;
}