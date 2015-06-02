#include <iostream>
#include <string>
using namespace std;

void getInput(double &p0, double &p1, double &p2);
void calculate(double p0, double p1, double p2);
void getOutput(double inf1, double inf2, string infRate);

int main() {
    double p0, p1, p2;
    getInput(p0, p1, p2);
    calculate(p0, p1, p2);
}

//function to get input
void getInput(double &p0, double &p1, double &p2) {
    cout << "Enter the price of an Item for this year: ";
    cin >> p0;

    cout << "Enter the price of an Item for last year: ";
    cin >> p1;

    cout << "Enter the price of an Item for two years ago: ";
    cin >> p2;
}

//function to get calculte inflation and deterine if interest rate is increasing or decreasing
void calculate(double p0, double p1, double p2) {
    double inf1, inf2;
    string infRate;

    inf1 = (p0 - p1) / p1;
    inf2 = (p1 - p2) / p2;

    if(inf1 > inf2) {
        infRate = "increasing";
    }
    else if(inf1 < inf2) {
        infRate = "decreasing";
    }
    else {
        infRate = "the same for both years";
    }


    getOutput(inf1, inf2, infRate);
}

//function to post output
void getOutput(double inf1, double inf2, string infRate) {
    cout << "the inflation rate between this year and last year is " << inf1 << endl;
    cout << "the inflation rate between last year and two years ago is " << inf2 << endl;
    cout << "The rate of inflation is " << infRate << endl;

}
