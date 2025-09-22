#include <iostream>
using namespace std;



int main(){
double n1,n2,result;
char op;


cout<<"Enter two numbers:";
cin>>n1>>n2;


cout<<"Enter operation(+ - * /):";
cin>>op;


 if 

(op=='+'){ result =n1+n2;
}

else if(op=='-'){ result =n1-n2;
}


else if(op=='x'){ result =n1*n2;
}

else if(op=='/')
if(n2 !=0)
{ result =n1/n2;
}
else{

    cout<<"Error division by zero";
}

else{
    cout<<"Invalid operator!";
}


cout <<"Result = "<<result<<endl;


return 0;
}
