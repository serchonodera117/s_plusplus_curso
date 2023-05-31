#include <iostream>
#include <vector> //is necesary to impoort the vector library to use vectors

using namespace std;

//principal methods:
//at() get an specific position from the vector
//push_back() push a new value into the vector

void vctorsMethods(){
    vector <int> records{777,16,2,4,6,2};
    vector <char> characters{'q','q', 'y'};
    vector <double> base_salary(350, 2125.50); //you can asign a default value jus writing a second parameter 
    vector <int> dynamicVector;


    // int currentPos = records.front(); //get the frist value
    // cout << "method front() : "<< currentPos;
    
    // int returnedData = records.at(2); 
    // cout << "method at() : "<< returnedData;

    dynamicVector.push_back(6);//0
    dynamicVector.push_back(5);//1
    dynamicVector.push_back(4);//2
    dynamicVector.push_back(3);//3
    dynamicVector.push_back(2);//4

    for(int i=0; i<dynamicVector.size(); i++){
        cout << "Position ["<< i<<"] : " << dynamicVector[i] <<endl;
    }
    // dynamicVector.pop(0);

    cout <<"--------------------------"<<endl;

    for(int i=0; i<dynamicVector.size(); i++){
        cout << "Position ["<< i<<"] : " << dynamicVector[i] <<endl;
    }
}

void dynamicVector(){
    vector <int> myDynamicVector;
    int elements;

    cout << "how many numbers do you want for your vector?: ";
    cin >> elements;

    for(int i=0; i< elements; i++){
        int a;
        cout << "introduce thr elenet [" << i << "] :"; //read the value and save it into a variable to push it into the vector
        cin >>a;  

        myDynamicVector.push_back(a);
    }

    cout << "You have introduced: "<<endl;
    for(int i=0; i< myDynamicVector.size(); i++){
     cout << "position ["<<i<<"]: " << myDynamicVector[i] <<endl;
    }

}
int main(){
    // vctorsMethods();
    dynamicVector();
    return 0;
}