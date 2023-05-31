#include <iostream>
using namespace std;

void bidementionalArray(){
            //a uncommon way to declare a bidimentional array, by set the values on the same line, and they will be assingned to the respectives positions following a waterfall logic
            //to asign the size, is by multiplying the respective indices
    int uncommonWay [3][5] ={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    
    int matriz [3][4] = {   //the frist index is created for the files, and the second one is used to set a size to the frist column
            {1,2,4,5},
            {8,6,12,15},
            {1,6,42,51},
        };

        //other way to set the value for the array positions
    int theValues [3][3];
      theValues [0][0]=21;
      theValues [0][1]=1;
      theValues [0][2]=3;
      theValues [1][0]=4;
      theValues [1][1]=67;
      theValues [1][2]=1;
      theValues [2][0]=5;
      theValues [2][1]=2;
      theValues [2][2]=21;

      int userValues [2][5];

      for(int i = 0; i < 2; i++){
        for(int j = 0; j < 5; j++){
            cout << "Introduzca el valor [" << i<<"]"<<"[" <<j <<"]: "; 
            cin >> userValues[i][j];
        }
      }

         for(int i = 0; i < 2; i++){

            cout << "row[" << i <<"]: "; 
            for(int j = 0; j < 5; j++){
                cout << "[" << userValues[i][j] << "]"; //values 
            }
            cout << "\n";
        }
}

int main(){
    bidementionalArray();
    return 0;
}