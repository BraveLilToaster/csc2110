#ifndef DYNAMICSTRINGARRAY_H
#define DYNAMICSTRINGARRAY_H
#include <iostream>
#include <string>
using namespace std;

class DynamicStringArray {
    private:
        string* dynamicArray;
        int size;
    public:
        DynamicStringArray();
        ~DynamicStringArray();
        //DynamicStringArray(string dynamicArray, int size);
        int getSize();
        void addEntry(string s);
        bool deleteEntry(string s);

};

        DynamicStringArray::DynamicStringArray() {
            dynamicArray = NULL; 
            size = 0;
        }

        DynamicStringArray::~DynamicStringArray() {
            delete[] dynamicArray;
        }

        int DynamicStringArray::getSize() {
            return size;
        }

        void DynamicStringArray::addEntry(string s) {
            //increment size
            size++;
            cout << "added: " << s << " at index " << size << endl;
            //new array 1 larger
            string* newArr;
            newArr = new string[size];
            //copy elements into new array
            for(int i=0; i<size-1; i++) {
                newArr[i] = dynamicArray[i];
            }
            //add string to end of new array
            newArr[size-1] = s;
            //delete old array
            delete[] dynamicArray;
            //set dynamic array to new array
            dynamicArray = newArr;


        }

        bool DynamicStringArray::deleteEntry(string s) {
            bool found = false;
            int i = 0, ignore;
            //search for string
            for(int k=0; k<size; k++){
                if(dynamicArray[k] == s) {
                    found = true;
                    ignore = k;
                }
            }
            //if not found return false
            if (found == false) 
                return false;
            //decrement size
            size--;
            //if found create new array one smaller
            string* newArr;
            newArr = new string[size];
            //copy all inputs over except ignored string
            int c =0;
            for(int j=0; j<size+1; j++) {
                if(j != ignore) {
                    newArr[c] = dynamicArray[j];
                    c++;
                }
                else
                    cout << "Removed: " << dynamicArray[j] << " at index " << j+1 << endl;
            }
            //delete dynaminc array
            delete[] dynamicArray;
            //set dynamic array to new array
            dynamicArray = newArr;
            //return true
            return true;
        }

#endif
