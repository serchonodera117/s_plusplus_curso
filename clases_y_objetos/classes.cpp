#include <iostream>
using namespace std;


class User{
    private:
        string name;
        int age;

    public:
    void setName(string name){
        this->name = name;
    }
    void consoleLog(){
        cout << "the name is " << name;
    }
};


int main(int argc, char** argv){
    User myUser;
    myUser.setName("Serch");
    myUser.consoleLog();
    return 0;
}
