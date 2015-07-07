#include<iostream>
#include<array>
using namesapce std;

int main() {
    int twoD[4][5] = {16, 22, 99, 4, 18, -258, 4, 101, 5, 98,};

    int max = twoD[0][0];

    for(int i=0; i < 4; i++) {
        for (int j=0; j<5; j++){
            if(twoD[i][j] > max) {
                max = twoD[i][j];
            }
        }
    }
    
}
