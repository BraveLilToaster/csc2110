#ifndef FILE_H
#define FILE_H
#include<iostream>
#include<string>
using namespace std;

class File: public Document {
    private:
        string pname;
    public:
        string getPname();
        void setPname(string p);
        File& operator=(const File& thing);
};

string File::getPname() {
    return pname;
}

void File::setPname(string p) {
    pname = p;
}

File& File::operator=(const File& thing) {
    pname = thing.pname;    
    return *this;
}

#endif

