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
int main(int argc, char **argv){ 
    //variable_simple();
    cout << var_simple();
    return 0;
}
