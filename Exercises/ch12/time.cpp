#include <iostream>
using namespace std;

struct Time {
    int hour, minute;
    double second;
    void print();
    void increment(double secs);
    Time time
};

void Time::print()
{
    cout << hour << ":" << minute << ":" << second << endl;
}

void Time::increment(double secs){
    Time time = *this;
    second += secs;
    if(second < 60.0){
        time.print();
    }else{
        if(second >= 60.0){
            minute++;
            second-=60.0;
        }
        if(minute > 60){
            minute -= 60;
            hour++;
        }
     increment(second);
    }

}
Time::Time(int h, int m, double s)
{
  hour = h; minute = m; second = s;
}

int main(){
    Time current_time = {9, 13, 30.0};
    current_time.increment(500.0);
    return 0;
}
