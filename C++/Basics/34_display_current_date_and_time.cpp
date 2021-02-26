#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;

int main(){

    time_t t = time(NULL);
    tm*tPtr = localtime(&t);
    cout << " seconds = " << (tPtr->tm_sec) << endl;
    cout << " miniute = " << (tPtr->tm_min) << endl;
    cout << " hour = " << (tPtr->tm_hour) << endl;
    cout << " day of month = " << (tPtr->tm_mday) << endl;
    cout << " month = " << (tPtr->tm_mon) << endl;
    cout << " year = " << (tPtr->tm_year)+1900 << endl;
    cout << " weekday = " << (tPtr->tm_wday) << endl;
    cout << " day of year = " << (tPtr->tm_yday) << endl;
    cout << " daylight saving = " << (tPtr->tm_isdst) << endl;

return 0;
}