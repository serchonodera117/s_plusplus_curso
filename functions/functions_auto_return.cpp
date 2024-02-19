#include <iostream>
#include <string>
#include <map>

using namespace std;

// Auto return inf unctions 

auto sum(int a, int b) {
    return a + b;
}


//sum with generics
template <typename T, typename U>
auto sumGenerics(T a, U b){
    return a + b;
}
auto searchMap(const map<string, int>& myMap, const string& key) {
    return myMap.find(key);
}

int main(){
    // cout<<"auto function: " << sum(10,30) << endl;
    // cout<<"auto function with generics : " << sumGenerics(10.6f,30.7) << endl;
    
    //creation of a map
    map<string, int> myMap = {
        {"manzana",1},
        {"platano",2},
        {"naranja",4},
    };
    auto it = searchMap(myMap, "platano");

    //verify if map was found and show it's value
    if(it != myMap.end()){
        cout<<"found 'platano' with key: "<< it->first << " and value: "<<  it->second <<endl;
    }else{
        cout<<"'platano' hasn't been found in map: "<< endl;
    }
    return 0;
}