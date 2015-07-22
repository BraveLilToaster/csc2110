#ifndef IMPTOMETRIC_H
#define IMPTOMETRIC_H
#include <iostream>
using namespace std;

class negative {};
class badInput {};

class ImpToMetric {
    private:
        int lenFt, lenIn, lenCm;
    public:
        ImpToMetric(){
            lenFt = 0;
            lenIn = 0;
            lenCm = 0;
        }
        double convertToCm(){
            bool done = false;
            do {
                try {
                    cout << "Enter length in feet and inches: " << endl;
                    cin >> lenFt >> lenIn;

                    if(!cin) {
                        throw(badInput());
                    }
                    else if (lenFt < 0 || lenIn < 0) {
                        throw(negative());
                    }
                    else {
                        done = true;
                    }
                }
                catch (negative){
                    cout << "Error: Negaive Amount" << endl;
                }

                catch (badInput){
                    cout << "Error: Entered a non integer" << endl;
                    cin.clear();
                    cin.ignore(1000, '\n');

                }

            }
            while(!done);

            return  static_cast<double>(lenFt*12.0 + lenIn)*2.54;
        }
};


#endif
