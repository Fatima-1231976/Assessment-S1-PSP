#include<iostream>
using namespace std;
int main(){
    //loop 1 count up from 0 to 50 in increments of 1
    cout<< "Counting up 0 to 50:"<< endl;
    for(int i = 0; i <= 50;i++) {
        cout << i << endl;
    }
        // loop 2:countdown 50 to 0 in decrements of 1
        cout <<"\ncounting down 50 to 0:" << endl;
        for (int i=50; i>= 0; i--){
            cout<< i<< endl;
        }
            //loop3:count up 30 to 50 in increments of 1
            cout<< "\nCounting up 30 to 50:"<< endl;
            for(int i = 30;i <=50; i++){
                cout<< i << endl;
            }
               // loop:4 count from 50 to 10 in decrements of 2
               cout << "\nCounting down 50 to 10 by 2:" << endl;
               for(int i = 50; i>=10; i -= 2) {
                cout << i << endl;
               }
                //loop 5:Count up 100 to 200 in increments of 5
                cout << "\nCounting up 100 to 200 by 5:" << endl;
                for(int i= 100; i <= 200; i +=5) {
                    cout<< i<< endl;
            
                }
                return 0;
            
            }
              
        
    
