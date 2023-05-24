#include <iostream>
using namespace std;


void variables(){
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
}


static void constantes(){
   const int dobleByte = 16; //it's value must be asigned   
   const string name = "juan";//at the same time you declare the constant
   
   cout <<"2 bytes: "<<dobleByte<<". nombre: "<<name;
}

int main(int argc, char** argv){
    // variables();
    constantes();
    return 0;
}


