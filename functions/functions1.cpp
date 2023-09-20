#include <iostream>
#include <cmath>
using namespace std;

//prototype functions are declared before the be declared, this can be used to declare the functions in any place of the program and then can be called by the compiler
double potencia(double base, double exponent); //this is the prototype, this is because the execution order goes from top to bottom

int main(int argc, char **argv){                                                     //     |
    cout <<"result is : "<< potencia(5,2);                                           //     |
    return 0;                                                                        //   \   /
}                                                                                    //    \/

double potencia(double base, double exponent){//this is the function already delcared
    return pow(base, exponent);
} 
