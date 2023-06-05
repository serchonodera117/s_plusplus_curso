#include <iostream>
using namespace std;

void torLowerCase(string &cadena){ //the use of & before variable, is used to indicate that this variable is a reference
    for(int i = 0; i <cadena.length(); i++){ //therefore, the parameter will modify the original variable that is used as a parameter when you call the function. 
        cadena[i] = tolower(cadena[i]);
    }
}

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

void logicOperators(){
     int age;
     string medic_exam;

    cout << "How are you: ";
    cin >> age;

    cout << "Have you succesfully passed the medic exam ? (yes/no) : ";
    cin >> medic_exam;

    torLowerCase(medic_exam);

    if(age >= 18 && medic_exam == "yes"){
        cout << "You are legally Authorized to drive cars" <<endl;
    }else{
        cout << "You are NOT legally Authorized to drive cars, you don't meet the requirements" <<endl;
    }

}

int main(){
    logicOperators();
    // conditionals();
    return 0;
}