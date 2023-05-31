#include <iostream>
#include <vector> //is necesary to impoort the vector library to use vectors
using namespace std;


void myVectors(){
    //the main diference to the arrays, is that vectors are dynamic
    //you can change the size of them if you don't asigned any lenght before
    vector <int> records{16,2,4,6,2};
    vector <char> characters{'q','q', 'y'};
    vector <double> base_salary(350, 2125.50); //you can asign a default value jus writing a second parameter 
    vector <int> dynamicVector;
    
        // cout << numberIterations << endl;
        // int numberIterations = rand() % 100;

    
    // for(int i=0; i<350; i++){
    //     cout << i << "  value " << base_salary[i] << endl;
    // }
    int i = 0;
    while (i<base_salary.size()){ //the .size property returns the size of the vector
        base_salary[i] = 800 + rand() % 3000;
        cout <<"position: ["<< i << "]  has the value: " << base_salary[i] << endl;
        i++;
    }
}
int main(){
    myVectors();
    return 0;
}