#include <iostream>
using namespace std;

//the use of the classes has the same logic as other subjects
//the execution sequense is like a waterfall, starts on the top 
//and ends on the bottom, so declare a class is to create any type of variable created by your self 
//with your own behaviour, and then  the syntaxis is relatively strange.
//"class NameClass{} pubic: to set public variables and methods and private to the private variables and methods"

class User{
    public:
    void setName(string name){
        this->name = name;
    }
    void consoleLog(){
        cout << "the name is " << name;
    }

    
    private:
        string name;
        int age;

};


int main(int argc, char** argv){
    User myUser;
    myUser.setName("Serch");
    myUser.consoleLog();
    return 0;
}
