#include <iostream>

using namespace std;

void showMessage(string msg, int veces=1){ //this type of parameter is optional, has already defined a default value. but the default parameter must be the last parameter
    for(int i = 0; i< veces; i++){
        cout << msg << endl;
    }
}


// example

void createWindow(int width=800, int height=600, string title="My window", bool complete=false){
    cout << "crearing window: " << title << endl;
    cout << "width: " << width << endl;
    cout << "height: " << height << endl;
    cout << "Fullsscreen: " << (complete? "yes": "no") << endl;
}

int main(int argc, char **argv){
    // showMessage("only Hello world");
    // showMessage("\nmultiple world", 7);
    cout << "default window: " << endl;
    createWindow();

    cout << "custom windows: " << endl;
    createWindow(300, 300, "Miniscreen");
    return 0;
}