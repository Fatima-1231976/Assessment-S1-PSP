#include <iostream>
#include <string>
using namespace std;
int main(){
    //initialise array names
    string names[6] = {"Jake", "Zac", "Ian", "Ron","Sam","Dave"};
    string searchTerm;
    bool found= false;
    // allow user to enter asearch term
    cout<< "Enter a name to search:";
    cin>> searchTerm;
    //loop through array and test each
    for(int i = 0; i < 6; i ++){
        if(names[i] == searchTerm){
            found = true;
            break;
        }
    }
    // output result
    if(found) {
        cout<< "The name'"<< searchTerm <<"'was found in the list."<< endl;
    }else{
        cout<<"The name'"<< searchTerm<<"'was not found in the list." << endl;
    }
    return 0;
    }
