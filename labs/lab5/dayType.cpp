#include"dayType.hpp"
    string dayType::weekday[7] = {"Sun", "Mon", "Tue", "Wed", "Thur", "Fri", "Sat" };
    //set the day
    void dayType::setDay(string day){
        cout << "Set day to: " ;
        cin >> dayType::day;
        for(int i=0; i<7; i++) {
            if(dayType::weekday[i]==dayType::day) {
                dayType::markDay = i;
            }
        }

    } 

    //print the day
    void dayType::printDay() {
        cout << "Day = " << dayType::day << endl;
    }

    string dayType::getDay(){
       return  dayType::weekday[dayType::markDay]; 
    }

    //print the next day
    string dayType::getNextDay(){
        string next;
        if(markDay == 6){
           next = dayType::weekday[0];
        }
        else{
            next = weekday[markDay+1];
        }

       return  next; 
    }

    //print the previous day
    string dayType::getPrevDay(){
        string prev;
        cout << markDay << endl;
        if(markDay == 0){
            prev =weekday[6];
        }
        else{
            prev = weekday[markDay-1];
        }
       return  prev; 
    }

    //add days
    string dayType::addDays(){
        int addDay = 0, i = markDay, count=0;
        cout << "How many days do you want to add: ";
        cin >> addDay;

        while(count<addDay) {
            if(i == 6){
                i =0;
                count++;
            }
            else{
                i++;
                count++;
            }
        }
       return  dayType::weekday[i]; 

    }

dayType::dayType() //default constructor
    {
        day = "";
    }
dayType::dayType(string day_):day(day_)  //
    {
        day = day_;
    }

