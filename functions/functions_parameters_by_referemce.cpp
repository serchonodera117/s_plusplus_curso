#include <iostream>
#include <vector>
using namespace std;



void sum (int num) { //passed by value
    num = 50;
}

void sumv (int &sum){//passed by refference, when is usded & character, the external value changes 
    sum = 100;
}


void duplicateVectorValue(vector<int> &vec){
    for(int &i:vec){
        i*=2;
    }
}


int main(int argc, char** argv){
    // int minum = 10;
    // cout << "mi num = "<< minum << endl;
    // sum(minum);
    // cout << "mi num = "<< minum << endl;
    // sumv(minum);
    // cout << "mi num by reference = "<< minum << endl;

    vector<int> my_vector = {11,2,3,4,5,7};
     cout << "Original values " << endl;
    
     for(int thevalue:my_vector){
        cout << thevalue << endl;
     }
    
    duplicateVectorValue(my_vector);
     cout << "values post function" << endl;
     for(int thevalue:my_vector){
        cout << thevalue << endl;
     }
}