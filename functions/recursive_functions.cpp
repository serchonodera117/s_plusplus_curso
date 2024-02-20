#include <iostream>
using namespace std;


int myRecursionFactorial(int n){
    if(n==1){
        return 1;
    }
    return myRecursionFactorial(n) * myRecursionFactorial(n-1);
}

int factorialFor(int n){
    int result = n;
    for (int i= n-1; i >= 1; i--){
        result*=i;
    }
    return result;
}

int factorialRecursionFactorial(int n){
    
    if(n==0){
        return 1;
    }else{
        return n*factorialRecursionFactorial(n-1);
    }

}

void printFactorial(){
    int number;
    cout << "Introduce a number to calculate factorial: ";
    cin >> number;

    cout<< "[" << number <<"] factorial is: "<< factorialFor(number) << endl;
}

void printRecursionFactorial(){
    int number;
    cout << "Introduce a number to calculate factorial: ";
    cin >> number;

    cout<< "[" << number <<"] factorial is: "<< factorialRecursionFactorial(number) << endl;
}

int main(int argc, char** argv){
   //printFactorial();
   printRecursionFactorial();

    return 0;
}