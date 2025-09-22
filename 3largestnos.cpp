#include <iostream>
using namespace std;
int main(){

    int n1,n2,n3;



cout<<"Enter three numbers:";
cin>>n1>>n2>>n3;


if (n1>=n2 && n1 >=n3)
{
    cout<<"the max number is "<<n1<<endl;
}
else
if (n2>=n1 && n2>=n3)
{
    cout<<"the max number is "<<n2<<endl;
}

else if (n3>n2 && n2>=n1)
{
    cout<<"the max number is "<<n3 <<endl;
}



return 0;














    return 0;
}