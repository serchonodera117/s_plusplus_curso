#include <iostream>
#include <Windows.h>

using namespace std;

void sumNumbers(){
    int num1, num2;
        cout << "Set the value of number 1 : ";
        cin >> num1;
        cout << "Set the value of number 2 : ";
        cin >> num2;
        
        cout << "The sum result is: "<< num1+num2;
}

void switch_case1(){
    int option;
    bool is_valid = false;
    do{    
        cout << "Option menu : "<< endl;
        cout << "1.- Show message. "<< endl;
        cout << "2.- Calculate a sum."<< endl;
        cout << "3.- Get out the program"<< endl;
        cout << "Write your code: ";
        cin >> option;

        switch (option)
        {
        case 1: cout << "you have selected the option of show message"; 
            is_valid = true; 
            break;
        case 2: sumNumbers();
            is_valid = true; 
            break;

        case 3: is_valid = true;
             cout << "you have selected the exit, good bye";
             break;
        
        default : cout << "["<< option << "] is not valid, try again";
            is_valid = false;
            break;
        }
    }while (is_valid == false);

}

int main(int argc, char **argv){
    switch_case1();
    return 0;
}