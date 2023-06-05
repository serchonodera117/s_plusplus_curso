#include <iostream>
using namespace std;

void conditionals(){
    int age;

    cout << "How are you: ";
    cin >> age;

    if(age >= 18){
        cout << "You are legally old to drive cars" <<endl;
    }else{
        cout << "You are NOT legally old to drive cars" << endl;
    }
}

int main(){
    conditionals();
    return 0;
}