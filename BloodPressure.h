#ifndef BLOODPRESSURE_H
#define BLOODPRESSURE_H
#include <string>
#include <iostream>

using namespace std;

class BloodPressure
{
	private:
		string comBPR;
		
	public:
		BloodPressure();
		BloodPressure(string c)
		{
			comBPR=c;
		}
		void setBPR(int sys, int dys)
		{
			if (sys>=140)
			{
				comBPR="High Blood Pressure";
			}
			else if (dys>=90)
			{
				comBPR="High Blood Pressure";
			}
			else if (sys<=90)
			{
				comBPR="Low Blood Pressure";
			}
			else if (dys<=60)
			{
				comBPR="Low Blood Pressure";
			}
			else
			{
				comBPR="Normal Blood Pressure";
			}
		}
		
		string getBPR(){return comBPR;}
};
#endif
