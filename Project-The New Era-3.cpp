#include <iostream>
using namespace std;
class Time 
{
	public:
    int hrs;
    int min;
    int sec;
};
main() 
{
    Time t1;
    int t;

    cout << "Enter time in seconds: ";
    cin >>t;
    
    t1.hrs = t/3600;
    t1.min = (t%3600)/60;
    t1.sec = (t%3600)%60;
    
    cout<<"The Time = "<<t1.hrs<<":"<<t1.min<<":"<<t1.sec;
}

