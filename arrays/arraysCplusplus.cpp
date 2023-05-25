#include <iostream>
using namespace std;

void buildingArrays_1(){
    //an array in c++ can't grow in execution time, it's length is fixed

    int numeros[10];
    int numerosLength = sizeof(numeros)/sizeof(numeros[0]); //on this language, does not exist the properti .length of array.length. you have to divide sizeOf(array)/siseOf(array[0]) array size on bytes by the frist position
    cout<<"Size of array: "<<numerosLength<<endl;
    for (short i = 0; i < numerosLength; i++){
        numeros[i] = i; 
        cout<<"Element: "<<numeros[i]<<endl;
    }

    cout<<"-------------------------------"<<endl;

    int arrayDeclared [3]{1,5,3};
    int arrayDeclaredLength = sizeof(arrayDeclared)/sizeof(arrayDeclared[0]);

    cout<<"second Array size: "<< arrayDeclaredLength<<endl;
    cout<<"second Array: "<< arrayDeclared[1] <<endl;
}

int main(){
    buildingArrays_1();
    return 0;
}