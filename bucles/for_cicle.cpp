#include <iostream>
using namespace std;

int main(int argc, char **argv){//simple for
   int edades[] = {10,10,33,32,12,345,24};
   int eLength =  sizeof(edades) / sizeof(edades[0]);
        cout << eLength  << endl;
   

    for(int i = 0; i < eLength; i++){//for(counter: condition: counter increment or decrement)
        cout << "edad de persona : "<< i << " es: "<< edades[i]  << endl;
    }
    return 0; 
}