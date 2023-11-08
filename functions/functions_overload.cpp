#include <iostream>

using namespace std;

int sum(int a, int b) { //overloading is used to set some functions with the same name unlike their parameters, because the call define wich function will be called, only by using the parameters
    return a + b;
}

int sum(int a, int b, int c) {
    return a + b + c;
}
float sum(float a, float b) {
    return a + b;
}


//-----------------------------be careful with the use of overloading if you are using default parameters, because it will break the code, compilatoe won't know wich function call
int pow(){
    return 5;
}
double pow(double a=10,) {
    return a;
}


int main(){
    cout << "first one: " << sum(10,10) << endl;
    cout << "second one: " << sum(10,10,10) << endl;
    cout << "third one: " << sum(15.6f,10.0f) << endl;
    return 0;
}