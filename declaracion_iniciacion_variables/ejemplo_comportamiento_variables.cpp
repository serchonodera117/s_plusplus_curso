#include <iostream>
using namespace std;

int main(int argc, char** argv){
    string nombre = "Serch";
    int edad {21};
    float salario;



    cout << "introduce el salario del empledo: "; //reead console
    cin >> salario;

    cout <<"Datos del empledo:"<<endl;
    cout <<"Nombre:" << nombre << ". edad;"<< edad <<". Salario:" << salario; 


  cout <<"----------------------"<< endl;
    cout <<"Modificación de edad, introduzca nueva edad"<<endl;
    cin >> edad;

    cout <<"nueva edad:"<<" "<<edad;

    return 0;
}