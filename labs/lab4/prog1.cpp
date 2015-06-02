#include <iostream>
#include <array>
#include <cmath>
using namespace std;

//calculates the avgerage of the numbers in the array
double calcavg(int testvals[], const int sizeOfArray); 
//calculates the variance of the numbers in the array
double variance(int testvals[], const int sizeOfArray, double avg); 

int main(){
    int testvals[14]= {89,95,72,83,99,53,86,75,92,73,79,75,82,73};
    const int sizeOfArray = 14;
    double avg, vari;
    avg = calcavg(testvals, sizeOfArray);
    cout << "Average: " << avg << endl;
    cout << "Variance: " << variance(testvals, sizeOfArray, avg) << endl;

}

double calcavg(int testvals[], const int sizeOfArray) {
    double avg;
    for(int i=0; i < sizeOfArray; i++) {
        avg += testvals[i];
    }

    avg = avg / sizeOfArray;
    return avg;
}

double variance(int testvals[], const int sizeOfArray, double avg) {
    double vari;
    for(int i=0; i < sizeOfArray; i++) {
        vari += pow((double (testvals[i] - avg)), 2.0);
    }
    vari = vari / sizeOfArray;
    return vari;

}
