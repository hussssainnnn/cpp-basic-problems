#include <iostream>
using namespace std;
int main(){

int n;
cout<<"Enter number of terms:";
cin>>n;


int a=0,b=1;

cout<<a<<""<<b<<"";
for ( int j = 3; j <= n; j++)
{
    int next = a+b;
cout<<next<<"";
a=b;
b=next;
}






    return 0;
}