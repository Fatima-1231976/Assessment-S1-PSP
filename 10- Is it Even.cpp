#include <iostream>
using namespace std;
//function returns a boolen(true/false)
bool isEven(int num){
    return(num % 2 == 0);
}
int main() {
    int number;
    cout<<"Enter a number:";
    cin>> number;
    if(isEven(number))
    
       cout<<"the number is even."<<endl;
      else 
       cout<<"the number is odd."<< endl;

    return 0;
}
