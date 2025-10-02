#include <iostream>
#include<string>
using namespace std;

int main(){

string password;
string correctpassword ="abcd 123";

cout<<"Enter Password:";
getline(cin,password);

while (password!=correctpassword)
{
    cout<<"Wrong Password.Try again: ";
    cin>>password;
}
cout<<"Access Granted!"<<endl;


    return 0;
}