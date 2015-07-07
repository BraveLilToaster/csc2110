#ifndef DAYTYPE_HPP
#define DAYTYPE_HPP

#include<string>
#include<iostream>

using namespace std;

class dayType {
    //everything can access these
    public:
        static string weekday[7];
        void setDay(string day); //set the day
        void printDay(); //print the day
        string getDay();
        string getNextDay();
        string getPrevDay();
        string addDays();

        dayType(); //default constructor
        dayType(string day);  //

    //only accessable by class children
    protected:
    //only accessable by class 
    private:
        int markDay ;
        string day ;

    
};

#endif

