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

void trhidimentionalArray(){
      //example of an excersice
      //  hour/day/month, each index is a part of the date using the prevous examole.  
    int passCars[24][31][12]; 

    //may 15th at 2 am
    passCars[2][14][4] = 4;

    // cout <<"The number of car that passed on may 15th at 2 AM is: "<< passCars[2][14][4];

    //setting the array positions with random numbers
    for(int i = 0; i <24; i++)
    {
        for(int j = 0; j<31; j++)
        {
            for(int h = 0; h<12; h++)
            {
                passCars[i][j][h] = rand()%1000;
            }
        }
    } 
    for(int i = 0; i <24; i++)
    {
        string hour = (i > 12)? "AM": "PM";
        cout <<"Hour "<< i << " "<<hour; 
        for(int j = 0; j<31; j++)
        {
            cout <<"Day :"<< j<< endl; 
            for(int h = 0; h<12; h++)
            {

                cout <<"Total cars that crossed on"<< j<<"/"<<h <<
                " at " << i << " " << hour <<" : "<< passCars[i][j][h] << endl; 
            }
        }
        cout << "\n \n \n"<<endl;
    }    
}
int main(){
        //be reallu careful about those thype of arrays, becasuse their computional complex
        //consumes a very high level of computational resources. 
        //the number of iterations just grows for each cicle, 
        //giving a cuadratic or cubic algorithm or even more complex as a result
        //i don't recoment to use these type os techniques on big projects


    // bidementionalArray();  
    // trhidimentionalArray();
    return 0;
}