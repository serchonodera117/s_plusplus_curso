#include <iostream>
#include <vector>
using namespace std;

void fristExampleBREAK(){
    vector<string> names = {"serch","carlos","pedro", "ana", "kayolica"};

    for(int i = 0; i < names.size(); i++){//will print all names until it finds the value of he condition
        if(names[i] == "pedro"){
            cout << "Persona encontrada: " << names[i] << "  encontrada en la poscion "<< i << endl;
            break;
        }
        else{
            cout <<  names[i]  << endl;

        }
    }
} 

void secondExampleCONTINUE(){
    
    vector<string> names = {"serch","carlos","pedro", "ana", "kayolica"};

    for(int i = 0; i < names.size(); i++){
        if(names[i] == "serch"){ //this example won't print the name or value tha find
            continue;
        }
            cout <<  names[i]  << endl;
    }
}

 int main(int argc, char **argv){
    //fristExampleBREAK();
    secondExampleCONTINUE();
    return 0;
 }