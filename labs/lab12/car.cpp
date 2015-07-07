#include<iostream>
#include<cstring>
#include "car.h"


Car::Car(double es, char bs, int cc, char *ptr){
    engine_size = es;
    body_style = bs;
    color_code = cc;
    int size = (strlen(ptr) + 1);
    vinptr = new char[size];
    for(int i=0; i < size; i++) {
        vinptr[i] = ptr[i];
    }
}

void Car::display(){
    cout << "Engine Size: " << engine_size << "\nBody Style: " << body_style << "\nColor Code: " << color_code  << endl;
    if(vinptr){
        cout << "Vin: " << vinptr << endl;
    }
    
}
Car::~Car(){
    delete[] vinptr;
}
Car::Car(const Car &a) {
    engine_size = a.engine_size;
    body_style = a.body_style;
    color_code = a.color_code;
    char* ptr = a.vinptr;
    int size = (strlen(ptr) + 1);
    if(vinptr) {
        //delete[] vinptr;
        vinptr = new char[size];
        for(int i=0; i < size; i++) {
            vinptr[i] = ptr[i];
        }
    }

    else{
        vinptr = nullptr;
    } 

}
