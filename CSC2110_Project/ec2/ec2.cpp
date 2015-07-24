#include <iostream>
#include <string>
#include "dynamicstringarray.h"
using namespace std;

int main() {
    string str;
    DynamicStringArray<int> a;

    a.addEntry(2);
    a.addEntry(45);
    a.addEntry(6);
        
    if (a.deleteEntry(45) == false) {
        cout << "not found" << endl;
    }
    else
        cout << "found and deleted "<< endl;


}
