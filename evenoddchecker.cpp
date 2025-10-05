#include<iostream>
using namespace std;

void checkEvenOdd(int n){

if (n % 2 ==0)
{
    cout<<n<<" is even"<<endl;
}
else{
    cout<<n<<" is odd"<<endl;
}

}


int main(){

int num;
cout<<"Enter number:";
cin>>num;

checkEvenOdd(num);


return 0;
}



