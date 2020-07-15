#ifndef VISITOR_H
#define VISITOR_H
#include <string>
#include <iostream>
using namespace std;

class Visitor
{
	private:
		string name, address;
		double id, code;
		
	public:

		Visitor()
		{
			string n,a;
			name=n;
			address=a;
		}
		void setName()
		{
			cout<<"Enter your name: ";
			getline(cin,name);
			
		}
		void setAddress()
		{
			cout<<"Enter your address: ";
			getline(cin,address);
			
		}
		string getName(){return name;}
		string getAddress(){return address;}
};
#endif
