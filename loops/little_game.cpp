#include <iostream>

using namespace std;

void generateNumber(){
    char command = 's';
    int attempts = 1;
    int number;
    int userNumber;

    while (command =='s' || command == 'S')
    {
        number = rand() % 100+1;

        cout<<"A randon mumber was generated, try to guess which one has been. Good Luck"<<endl;
        while (attempts <= 5 && userNumber!=number)
        {
            cout<<  "attempt: ["<< attempts <<"]/5 " << "write the number you think: ";
            cin >> userNumber;

            if(userNumber!=number){
                if(userNumber > number){
                    cout<<"The generated number is lower than "<< userNumber <<endl;
                }
                else{
                    cout<<"The generated number is greater than "<< userNumber <<endl;
                }
            }
            attempts++;
        }

        std::string message =  (number==userNumber)? "congratulations you got it right, generated number was" + to_string(number) + "press s if you want to keep playing: ":
                     "Sorry limit of attpempts has been reached, the number was " + to_string(number) + ",press s if you want to try again: ";

        cout<< message;
        cin>> command;

        attempts = 1;
    }
    
}
int main(int argc, char **argv){
    generateNumber();
    return 0;
}