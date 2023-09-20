#include <iostream>

using namespace std;

void dowhile(){//dowhile this bucle is executed at least one time
int opcion;
    do{
        cout << "Option menu; \n";
        cout << "1.- Option 1 \n";
        cout << "2.- Option 2 \n";
        cout << "3.- Option 3 \n";

        cin >> opcion;
        if(opcion!=3) cout << "You have chosen option"<<opcion<<"\n\n";
    
    }while (opcion!=3);
}
int main(int argc, char **argv){
    dowhile();
    return 0;
}