#include<iostream>
#include<string.h>
using namespace std;
class house
{
	public:
	int housen;
	char loc[100];
	int nur;
	char sizer[20];
	int nuf;
};
main()
{
	house h1,h2;
	
	cout<<"Enter House Number->";
	cin>>h1.housen;
	cout<<"Enter Number Of Room->";
	cin>>h1.nur;
	cout<<"Enter Size Of Room->";
	cin>>h1.sizer;
	cout<<"Enter Number Of Floor->";
	cin>>h1.nuf;
	cout<<"Enter Te Address of House->";
	cin>>h1.loc;
	
	cout<<endl;
	
	cout<<"Enter House Number->";
	cin>>h2.housen;
	cout<<"Enter Number Of Room->";
	cin>>h2.nur;
	cout<<"Enter Size Of Room->";
	cin>>h2.sizer;
	cout<<"Enter Number Of Floor->";
	cin>>h2.nuf;
	cout<<"Enter Te Address of House->";
	cin>>h2.loc;
	
	cout<<endl;
		
	cout<<"--------------------------------------------"<<endl;
	
	cout<<"Houes Number ->"<<h1.housen<<endl;
	cout<<"Number Of Rooms ->"<<h1.nur<<endl;
	cout<<"Size Of Rooms ->"<<h1.sizer<<endl;
	cout<<"Number Of Floors ->"<<h1.nuf<<endl;
	cout<<"The Address Of House ->"<<h1.loc<<endl;
	
	cout<<endl;
	
	cout<<"Houes Number ->"<<h2.housen<<endl;
	cout<<"Number Of Rooms ->"<<h2.nur<<endl;
	cout<<"Size Of Rooms ->"<<h2.sizer<<endl;
	cout<<"Number Of Floors ->"<<h2.nuf<<endl;
	cout<<"The Address Of House ->"<<h2.loc<<endl;
	
	cout<<endl;
}
