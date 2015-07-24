#include <iostream>
#include <string>
#include "dynamicstringarray.h"
using namespace std;

int main() {
    string str;
    DynamicStringArray a;

    a.addEntry("woop");
    a.addEntry("woop1");
    a.addEntry("woop2");
        
    if (a.deleteEntry("woop1") == false) {
        cout << "not found" << endl;
    }
    else
        cout << "found and deleted "<< endl;


}
