#include<iostream>
#include<string>
using namespace std;
int main() {
    string password="24247", attempt;
    int tries= 5;
    while(tries >0){
        cout<<"Enter Password("<<tries<<"attempts left):";
        cin>>attempt;

        if(attempt==password){
            cout<<"Secure Area" << endl;
            return 0;
        }
        tries--;
        if(tries==0){
            cout<<"Authorities alerted"<<endl;
        }
    }
    return 0;
}