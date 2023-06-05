#include <iostream>
using namespace std;


//To use the operators of this language, I developed an algorithm to indentify id any number is prime or not
void primos(){
    int num;
    bool es_primo = true;

    cout <<"introduce a number: "  << endl;
    cin >> num;

    for (int i = 2; i <= num/2; i++)
    {
        if(num % i == 0){
            es_primo = false;
            break;
        }
    }
    if(es_primo){
        cout << "Number " << num << " is prime" << endl;
    }else{
        cout << "Number " << num << " is not prime" << endl;
    }
    
}
void operatorsChangeType(){ //the language will change the data type if one of the data on a single operation is changed
                           //created by many data types, so they will change to the most precise data type.
    //auto, automatically identify the data type of yout variable
    auto n = 3;
    int a = 3;
    float b = 4.0f;     
    double c = 8.0;

    auto result = (a+b+c+n)/4;

    cout << "Data Type: [" << typeid(result).name() << "] resutlt: "<< result << endl; //data tyme of the operation is float because it's decimals after dot, so is more precise than int


}
int main(int argc, char**){
    operatorsChangeType();
    // primos();
    return 0;
}