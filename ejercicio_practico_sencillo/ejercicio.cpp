#include <iostream>
using namespace std;

int main(){
    cout <<"wellcome to the instalation service of floor"<<endl;

    int metros_calidad_media{0};

    cout <<"\n how many meters of medium quality do u want to install";
    cin >> metros_calidad_media;


    int metros_calidad_alta{0};

    cout <<"\n how many meters of high quality do u want to install";
    cin >> metros_calidad_alta;

    const float precioMedia{35.5f}; 
    const float precioAlta{75.5f}; 
    const float impuestoIVa{0.21};
    const int expiracionFecga{30};

    cout <<"\n budget of floor installation"<<endl;
    cout <<"number of metters if medium quality: "<<metros_calidad_media<<endl;
    cout <<"number of metters if high quality: "<<metros_calidad_alta<<endl;
    cout <<"price of high quality: "<<precioAlta<<
    "price of medium quality: "<<precioMedia << endl;

    cout <<"iva taxe of medium quality without : "<< precioMedia*metros_calidad_media<<
     "price of high without iva taxe: "<< precioAlta*metros_calidad_alta<<endl;

    cout <<"iva taxe of medium quality with : "<< impuestoIVa*(precioMedia*metros_calidad_media)<<
     "price of high with iva taxe: "<< impuestoIVa*(precioAlta*metros_calidad_alta)<<endl;


     cout <<"------------------------------"<< endl;
     cout<<"TOTAL OF HIGH QUALITY: "<<
     (precioAlta*metros_calidad_alta)+(impuestoIVa*(precioAlta*metros_calidad_alta))
     <<endl;

     cout<<"TOTAL OF medium QUALITY: "<<
     (precioMedia*metros_calidad_media)+(impuestoIVa*(precioMedia*metros_calidad_media))
     <<endl;



    return 0; 
}