#include <iostream>
#include <vector>
using namespace std;


void fristNestedLoop(){
    const int Min_num = 1;
    const int Max_num = 10;

    for(int i = Min_num; i <= Max_num; i++){
        cout<<"Multiplicarion of : [ "<<i<<" ] : \n";

        for (int j = Min_num; j <= Max_num; j++){
            cout<< i << " X " << j << " = " << i*j << endl;

        }
        cout<<"------------------------------------------------------------- \n\n";

    }

}
int main(int argc, char **argv){
    fristNestedLoop();
    return 0;
}