#include<iostream>
#include "dice.h"
#include "loadeddice.h"
using namespace std;

int main() {
    LoadedDice dTen(100), dFive(5);

    for(int i=0; i<10; i++) {
        cout << "Roll #" << i+1 << " " << rollTwoDice(dTen, dFive) << endl;
    }


}
