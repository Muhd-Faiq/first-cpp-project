#ifndef BLOODGLUCOSE_H
#define BLOODGLUCOSE_H
#include <string>
#include <iostream>

using namespace std;

class BloodGlucose
{
	private:
		string comBGL;
		
	public:
		BloodGlucose();
		BloodGlucose(string a)
		{
			comBGL=a;
		}
		void setBGL(double glu)
		{
			if(glu<5.6)
			{
				comBGL="Normal Sugar level";
			}
			else if (glu>=5.6 && glu<=6.9)
			{
				comBGL="Prediabetes";
			}
			else
			{
				comBGL="Diabetes";
			}
		}
		
		string getBGL(){return comBGL;}
};
#endif
