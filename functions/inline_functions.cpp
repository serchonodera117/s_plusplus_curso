#include <iostream>
using namespace std;

/*  inline functions are functions that spend less memmory in execution time, 
    because their behaviour consists in execute a little amount of instrucctions
     directly in the scope that are required, then code lines are copied and are set
     on the place where they are called
*/

//its sintaxis is: 
inline int sum(int a, int b){
    return a + b;
}
/*
Adventages: 
    - performance optimization
    - less excecution time
    - compiler decides 

Disadventages:
    - code size increases after compilation
    - 
*/

int main(int argc, char **argv){
    cout << "Sum by an inline function: "<< sum(5,10);
    return 0;
}