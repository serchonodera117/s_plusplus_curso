#include <iostream>
using namespace std;

static void variable_simple(){
     int salario = 3500; 
    cout << salario;
}

int var_simple(){//------variables into methods, just created by knowing the syntaxis
    int salario = 3500; 
    return salario; 
}

static void variable_types(){ //--- every variable has its own range or limit, is not necessary to know it at 100%
    string name = "serch";      //--- but, it depends of your project. 
    char caracter = 'h';       //-- sumaring, char only allows one caracter, string is for many characters, short int and long are for integer numbers, each one has their own limit, short is 2bytes and long long is the bigger
    short myShort = 0;        //-- the same aplies for float, but it is designed for decimals 
    int myInt = 10;            //-- finally bool, only allows 2 type of values, true or false (1, or 0)
    long myLong = 100000;
    long long myLongLong = 100000;
    float myFloat = 1.5f;  //must have the f at the final 
    double myDouble = 2.325232;
    long double myLong = 2312121278;
    bool myBool = false;

    //unsigned int; applied on number types, unsigned only allows positive values, 
    //

    cout << name << caracter << myShort << myInt << myFloat << myDouble << myLong << myLongLong << myBool;

}
int main(int argc, char **argv){ 
    //variable_simple();
    variable_types();
    cout << var_simple();
    return 0;
}
