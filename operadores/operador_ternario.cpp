#include <iostream>
using namespace std;

void conditionIfExample(){//example to compare simple condition with an ternary operator
    int num;
    cout<<"Introduce a number: ";
    cin >> num;

    if(num%2 == 0){
        cout<<num<<" is par ";
    }else{
        cout<<num<<" is NOT par ";
    }
}
void myTernaryOperation(){ //this operator is a simplier version of a traditional if, but is not recomendet to use it many times, only when condition is relatively simple
    int num;
    cout<<"Introduce a number: ";
    cin >> num;

    (num%2 == 0) ? cout<<num<<" is par " : cout<<num<<" is NOT par " ;
}
int main(int argc, char **argv){
    myTernaryOperation();
    return 0;
}