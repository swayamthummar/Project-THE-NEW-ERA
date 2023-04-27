#include<iostream>
using namespace std;

class Time
{
	public:
		int sec;
		int min;
		int hr;
};
main()
{
	Time t1;
	
	cout<<"Enter the Time in second ->";
	cin>>t1.sec;
	for(int i=60;i>=t1.sec;i++)
	{
		t1.sec/60;
		
	}
	cout<<t1.min<<":"<<t1.sec;
}
