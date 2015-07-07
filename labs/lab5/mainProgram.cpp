#include"dayType.hpp"

int main() {
    dayType myDayType;
    myDayType.setDay("Sun");
    
    myDayType.printDay();
    
    myDayType.getDay();
    cout << "Tommorow is " << myDayType.getNextDay() << endl;
    cout << "Yesterday is " << myDayType.getPrevDay() << endl;
    cout << "Return day is " << myDayType.addDays() << endl;
}
