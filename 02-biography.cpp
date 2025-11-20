#include <iostream>
#include <string>
#include<limits>

using namespace std;
int main(){
    string name;
    string hometown;
    int age;
    // ask user full name
    cout <<"Enter your full name:";
    (cin, name);

    //ask for the name of hometown
    cout<< "Enter your hometown:";
    (cin, hometown);
    //ask age with input
    cout<<"Enter age:";
    while( (cin>>age)){
        cout <<"Invalid input. Enter a number for age:";
        cin.clear();
        // Clear error
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
    }
    //Clear after successful numeric input
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    //Output details
    cout<<"Name:"<< name << endl;
    cout   <<"Hometown:"<<hometown << endl;
    cout  <<"Age:" << age << endl;


    return 0;
}