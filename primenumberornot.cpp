#include <iostream>
#include <cmath>
using namespace std;
int main(){

    int n;

    cout<<"Enter a number:";
    cin>>n;

   bool prime = (n > 1);
for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) {
        prime = false;
        break;
    }
}

if (prime)
cout<<n<< " is a prime number";
else
cout<<n<<" is not a prime number";



    return 0;
}