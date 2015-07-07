#include<iostream>
#include "figure.h"
using namespace std;


        void Figure::draw() {
            cout <<  "Figure::draw()" << endl;
        }
        void Figure::erase(){
            cout <<  "Figure::erase()" << endl;
        }
        void Figure::center(){
            cout <<  "Figure::Center()" << endl;
            draw();
            erase();
        }
