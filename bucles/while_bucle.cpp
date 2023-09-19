#include <iostream>

using namespace std;
void fizzbuzz(){
    int i {1};
        while (i<=10){
        if(i%2==0){
            cout << "fizz: "<<i<<endl;
        }
        else {
            cout << "buzz: "<<i<<endl;
        }

        i++;
    }
}

void dynamic_sum(){
    int nuber;
    int sum = 0;

    cout << "write a number" << endl;
    while (cin>>nuber && nuber!=0)
    {
        sum+=nuber;
    }
    cout << "the result of the sum is: " << sum << endl;

}
int main(int argc, char **argv){ //excercise fizz buzz with do while
    dynamic_sum();
    return 0;
}