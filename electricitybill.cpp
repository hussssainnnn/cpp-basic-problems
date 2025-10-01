#include <iostream>
#include <string>
using namespace std;

int main(){
int consumer_number;
string consumer_name;
int previous_month_reading,current_month_reading;
string type_of_eb;

cout<<"Enter consumer name: ";
cin>>consumer_name;

cout<<"Enter consumer number: ";
cin>>consumer_number;

cout<<"Enter previous month reading: ";
cin>>previous_month_reading;

cout<<"Enter current month reading:";
cin>>current_month_reading;

cout<<"Enter type of EB connection(domestic/commercial): ";
cin>>type_of_eb;
int units = current_month_reading-previous_month_reading;
double amount = 0;

if (type_of_eb=="domestic"){
    if (units <=100)
    amount = units * 1;
    else if 
    (units <=200)
    amount=(100*1)+(units-100)*2.50;
  else if 
    (units <=500)
    amount=(100*1)+(100*2.50)+(units-200)*4.0;

      else 
    
    amount=(100*1)+(units*2.50)+(300*4)+(units-500)*6;
}

  else if (type_of_eb == "commercial") {
        if (units <= 100)
            amount = units * 2;
        else if (units <= 200)
            amount = (100 * 2) + (units - 100) * 4.50;
        else if (units <= 500)
            amount = (100 * 2) + (100 * 4.50) + (units - 200) * 6;
        else
            amount = (100 * 2) + (100 * 4.50) + (300 * 6) + (units - 500) * 7;
    }
    else {
        cout << "Invalid EB type entered!" << endl;
        return 0;
    }

    cout << "\n----- Electricity Bill -----\n";
    cout << "Consumer No: " << consumer_number << endl;
    cout << "Consumer Name: " << consumer_name << endl;
    cout << "Units Consumed: " << units << endl;
    cout << "Connection Type: " << type_of_eb << endl;
    cout << "Bill Amount: Rs. " << amount << endl;

    return 0;
}


