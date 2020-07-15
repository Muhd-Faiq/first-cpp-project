#ifndef BODYTEMP_H
#define BODYTEMP_H
#include <string>
#include <iostream>

using namespace std;

class BodyTemp
{
	private:
		string comBTP;
		
	public:
		BodyTemp();
		BodyTemp(string a)
		{
			
			comBTP=a;
		}
		void setBTP(double temp, int age)
		{
			if (age>=0 && age<=2)
			{
				if (temp>=35.5 && temp<=37.5)
				{
					comBTP="Normal Body Temperature";
				}
				else if (temp<35.5)
				{
					comBTP="Body Temperature Below Normal";
				}
				else 
				{
					comBTP="Body Temperature Above Normal";
				}
			}
			else if (age>=3 && age<=10)
			{
				if (temp>=35.5 && temp<=37.5)
				{
					comBTP="Normal Body Temperature";
				}
				else if (temp<35.5)
				{
					comBTP="Body Temperature Below Normal";
				}
				else 
				{
					comBTP="Body Temperature Above Normal";
				}
			}
			else if (age>=11 && age<=65)
			{
				if (temp>=36.4 && temp<=37.6)
				{
					comBTP="Normal Body Temperature";
				}
				else if (temp<36.4)
				{
					comBTP="Body Temperature Below Normal";
				}
				else 
				{
					comBTP="Body Temperature Above Normal";
				}
			}
			else 
			{
				if (temp>=35.8 && temp<=36.9)
				{
					comBTP="Normal Body Temperature";
				}
				else if (temp<35.8)
				{
					comBTP="Body Temperature Below Normal";
				}
				else 
				{
					comBTP="Body Temperature Above Normal";
				}
			}
			
		}
		string getBTP(){return comBTP;}
};
#endif
