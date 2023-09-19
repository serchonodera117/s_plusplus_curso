#include <iostream>
#include <vector>
using namespace std;


void foreach(){
    string email = "serchonodera@mmydominiodotcom.com";

    for (auto i : email) {//when we don't know which data type is, whe must use auto ype
        if(i == '@'){
            cout << "found @"<<endl;
        }else{
            cout << "character: " << i <<endl;
        }

    }
}

void dynamic_foreach(){
    vector <int> elements;
    int command;

    cout << "write elements. write 0 to out"<<endl;
    while(cin >> command && command!=0){
        elements.push_back(command);
    }

    cout << "you have introduced the following elements: "<<endl;
    
    for(int i : elements){
        cout << i <<endl;
    }


}
int main(int argc, char** argv){
   //foreach();
   dynamic_foreach(); 
    return 0;
}