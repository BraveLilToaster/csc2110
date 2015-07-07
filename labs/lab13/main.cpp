#include <iostream> 
using namespace std;

class Date
{
  // data declaration section
  private:
    int month;
    int day;
    int year;

  // method declarations
  public:
    Date(int = 7, int = 4, int = 2005);   // constructor
    int operator==(Date &);  // declare the operator== function
    int operator>(Date &);
    int operator<(Date &);
};

// implementation section

Date::Date(int mm, int dd, int yyyy)
{
  month = mm;
  day = dd;
  year = yyyy;
}

int Date::operator==(Date &date2)
{
  if(day == date2.day && month == date2.month && year == date2.year)
    return 1;
  else
    return 0;
}

int Date::operator>(Date &date2) {
        if((year*365 + month*30 + day) > (date2.year*365 + date2.month*30 + date2.day)){
                return 1;
        }
        else{
            return 0;
        }
}

int Date::operator<(Date &date2) {
        if((year*365 + month*30 + day) < (date2.year*365 + date2.month*30 + date2.day)){
                return 1;
        }
        else{
            return 0;
        }
}

int main()
{
  Date a(4,1,2007), b(12,18,2008), c(4,1,2007); // declare 3 objects

    if (a == b)
        cout << "Date a is equal b." << endl;
    else if (a < b)
        cout << "Date a is less than b." << endl;
    else if (a > b)
        cout << "Date a is greater than b." << endl;
    else
        cout << "Date a is not equal to b." << endl;




  return 0;
}

