#include <iostream>
using namespace std;


//To use the operators of this language, I developed an algorithm to indentify id any number is prime or not
void primos(){
    int num;
    bool es_primo = true;

    cout <<"introduce a number: "  << endl;
    cin >> num;

    for (int i = 2; i <= num/2; i++)
    {
        if(num % i == 0){
            es_primo = false;
            break;
        }
    }
    if(es_primo){
        cout << "Number " << num << " is prime" << endl;
    }else{
        cout << "Number " << num << " is not prime" << endl;
    }
    
}

int main(int argc, char**){
    primos();
    return 0;
}