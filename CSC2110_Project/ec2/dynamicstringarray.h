#ifndef DYNAMICSTRINGARRAY_H
#define DYNAMICSTRINGARRAY_H
#include <iostream>
#include <string>
using namespace std;

template <class T>

class DynamicStringArray {
    private:
        T* dynamicArray;
        int size;
    public:
        DynamicStringArray();
        ~DynamicStringArray();
        //DynamicStringArray(string dynamicArray, int size);
        int getSize();
        void addEntry(T s);
        bool deleteEntry(T s);

};

        template <class T>
        DynamicStringArray<T>::DynamicStringArray() {
            dynamicArray = NULL; 
            size = 0;
        }

/*
        DynamicStringArray::DynamicStringArray(string dynamicArray, int size) {
            dynamicArray = new string[size]; 
        }
        */

        template <class T>
        DynamicStringArray<T>::~DynamicStringArray() {
            delete[] dynamicArray;
        }

        template <class T>
        int DynamicStringArray<T>::getSize() {
            return size;
        }

        template <class T>
        void DynamicStringArray<T>::addEntry(T s) {
            //increment size
            size++;
            cout << "added: " << s << " at index " << size << endl;
            //new array 1 larger
            T* newArr;
            newArr = new T[size];
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
        
        template <class T>
        bool DynamicStringArray<T>::deleteEntry(T s) {
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
            T* newArr;
            newArr = new T[size];
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
