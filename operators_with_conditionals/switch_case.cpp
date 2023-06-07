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

void switch_case1(){ //on this language, switch_case oonly works with data type int, and char
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

void switch_case2(){   // nested switch cases
    char initialLanguage, category;
    cout << "Writhe the initial character of language:" <<endl;
    cout << "E: Spanish" <<endl;
    cout << "I: English" <<endl;
    cout << "Write only the character: ";
    cin >>initialLanguage;
    initialLanguage = toupper(initialLanguage);

    switch(initialLanguage){
        case 'E': cout << "Haz seleccionado español" << endl;
             cout <<"Selecciona la categoría (L: Libros, R: Ropa, T: Tecnología)";
             cin >> category;  
             category = toupper(category);
             switch(category){
                case 'L': cout << "Haz escogido liros"; break;
                case 'R': cout << "Haz escogido ropa"; break;
                case 'T': cout << "Haz escogido  tecnología"; break;
                default: cout << category << " No es valido" <<endl; break;
             }
            break;


        case 'I': cout << "You have selected english" << endl;
             cout <<"Select any category (B: Books, C: Clothes, T: Technology)";
             cin >> category;  
             category = toupper(category);
             switch(category){
                case 'B': cout << "You have chosen Books"; break;
                case 'C': cout << "You have chosen Clothes"; break;
                case 'T': cout << "You have chosen Technology"; break;
                default: cout << category << " is not a valid character" << endl; break;
             }
            break;


        default : cout<< "["<< initialLanguage <<"] is not valid";
            break;
    }
}

int main(int argc, char **argv){
    // switch_case1();
    switch_case2();
    return 0;
}