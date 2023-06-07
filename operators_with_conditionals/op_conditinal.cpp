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

void logicOperatorAND(){
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

void logicOperatorOR(){
    /*this example is created as an example to provide economic support to students if their calification
    is greater than 8 or if their distance of center is greater than 20 */
    int calification, centerDistance;

    cout << "introduce the calification"<<endl;
    cin >> calification;

    cout << "Introduce the distance of place were you live to the city center: " << endl;
    cin >> centerDistance;

    if(calification >8 || centerDistance > 20){
        cout << "you deserve the support for your profetional education";
    } else{
        cout << "we have seen your request, unfortunately, we decided to review other student, your profile doesn't match with the requeiments to this economic support";
    }
}
int main(){
    logicOperatorOR();
    // logicOperatorAND();
    // conditionals();
    return 0;
}