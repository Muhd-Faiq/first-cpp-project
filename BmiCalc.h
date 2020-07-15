#ifndef BMICALC_H
#define BMICALC_H
#include <string>
#include <iostream>

using namespace std;


class BmiCalc
{
	private:
		string combmi,gender;
		int age;
		double bmi;

	public: 
	BmiCalc()
	{
		age=0;
		bmi=0;
	}
	BmiCalc(string b)
	{
		combmi=b;
	}
	
	void setBmiComm(double bmi, int age, string gender)
	{
		if (age>=6 && age<=18)
		{
			if (gender=="M" || gender=="m")
			{
				if(bmi<16)
				{
					combmi="Severely Underweight";
				}
				else if (bmi>=16 && bmi<16.5)
				{
					combmi="Underweight";
				}
				else if (bmi>=16.5 && bmi<27.5)
				{
					combmi="Normal weight";
				}
				else if (bmi>=27.5 && bmi<30)
				{
					combmi="Overweight";
				}
				else
				{
					combmi="Obesity";
				}		
			}
			else if (gender=="F" || gender=="f")
			{
				if(bmi<16)
				{
					combmi="Severely Underweight";
				}
				else if (bmi>=16 && bmi<16.5)
				{
					combmi="Underweight";
				}
				else if (bmi>=16.5 && bmi<26)
				{
					combmi="Normal weight";
				}
				else if (bmi>=26 && bmi<28.5)
				{
					combmi="Overweight";
				}
				else
				{
					combmi="Obesity";
				}
			}
		}
		else if (age>=19 && age<=24)
		{
			if (gender=="M" || gender=="m")
			{
				if(bmi<16)
				{
					combmi="Severely Underweight";
				}
				else if (bmi>=16 && bmi<19)
				{
					combmi="Underweight";
				}
				else if (bmi>=19 && bmi<25)
				{
					combmi="Normal weight";
				}
				else if (bmi>=25 && bmi<30)
				{
					combmi="Overweight";
				}
				else
				{
					combmi="Obesity";
				}		
			}
			else if (gender=="F" || gender=="f")
			{
				if(bmi<16)
				{
					combmi="Severely Underweight";
				}
				else if (bmi>=16 && bmi<19)
				{
					combmi="Underweight";
				}
				else if (bmi>=19 && bmi<25)
				{
					combmi="Normal weight";
				}
				else if (bmi>=25 && bmi<30)
				{
					combmi="Overweight";
				}
				else
				{
					combmi="Obesity";
				}
			}
		}

		else if (age>=25 && age<=34)
		{
			if (gender=="M" || gender=="m")
			{
				if(bmi<17)
				{
					combmi="Severely Underweight";
				}
				else if (bmi>=16 && bmi<20)
				{
					combmi="Underweight";
				}
				else if (bmi>=20 && bmi<26)
				{
					combmi="Normal weight";
				}
				else if (bmi>=26 && bmi<31)
				{
					combmi="Overweight";
				}
				else
				{
					combmi="Obesity";
				}		
			}
			else if (gender=="F" || gender=="f")
			{
				if(bmi<17)
				{
					combmi="Severely Underweight";
				}
				else if (bmi>=16 && bmi<20)
				{
					combmi="Underweight";
				}
				else if (bmi>=20 && bmi<26)
				{
					combmi="Normal weight";
				}
				else if (bmi>=26 && bmi<31)
				{
					combmi="Overweight";
				}
				else
				{
					combmi="Obesity";
				}
			}	
		}
		else if (age>=35 && age<=44)
		{
			if (gender=="M" || gender=="m")
			{
				if(bmi<18)
				{
					combmi="Severely Underweight";
				}
				else if (bmi>=18 && bmi<21)
				{
					combmi="Underweight";
				}
				else if (bmi>=21 && bmi<27)
				{
					combmi="Normal weight";
				}
				else if (bmi>=27 && bmi<32)
				{
					combmi="Overweight";
				}
				else
				{
					combmi="Obesity";
				}		
			}
			else if (gender=="F" || gender=="f")
			{
				if(bmi<18)
				{
					combmi="Severely Underweight";
				}
				else if (bmi>=18 && bmi<21)
				{
					combmi="Underweight";
				}
				else if (bmi>=21 && bmi<27)
				{
					combmi="Normal weight";
				}
				else if (bmi>=27 && bmi<32)
				{
					combmi="Overweight";
				}
				else
				{
					combmi="Obesity";
				}
			}
		}
		else if (age>=45 && age<=54)
		{
			if (gender=="M" || gender=="m")
			{
				if(bmi<19)
				{
					combmi="Severely Underweight";
				}
				else if (bmi>=19 && bmi<22)
				{
					combmi="Underweight";
				}
				else if (bmi>=22 && bmi<28)
				{
					combmi="Normal weight";
				}
				else if (bmi>=28 && bmi<33)
				{
					combmi="Overweight";
				}
				else
				{
					combmi="Obesity";
				}		
			}
			else if (gender=="F" || gender=="f")
			{
				if(bmi<19)
				{
					combmi="Severely Underweight";
				}
				else if (bmi>=19 && bmi<22)
				{
					combmi="Underweight";
				}
				else if (bmi>=22 && bmi<28)
				{
					combmi="Normal weight";
				}
				else if (bmi>=28 && bmi<33)
				{
					combmi="Overweight";
				}
				else
				{
					combmi="Obesity";
				}
			}
		}
			else if (age>=55 && age<=64)
		{
			if (gender=="M" || gender=="m")
			{
				if(bmi<20)
				{
					combmi="Severely Underweight";
				}
				else if (bmi>=20 && bmi<23)
				{
					combmi="Underweight";
				}
				else if (bmi>=23 && bmi<29)
				{
					combmi="Normal weight";
				}
				else if (bmi>=29 && bmi<34)
				{
					combmi="Overweight";
				}
				else
				{
					combmi="Obesity";
				}	
			}
			else if (gender=="F" || gender=="f")
			{
				if(bmi<20)
				{
					combmi="Severely Underweight";
				}
				else if (bmi>=20 && bmi<23)
				{
					combmi="Underweight";
				}
				else if (bmi>=23 && bmi<29)
				{
					combmi="Normal weight";
				}
				else if (bmi>=29 && bmi<34)
				{
					combmi="Overweight";
				}
				else
				{
					combmi="Obesity";
				}
			}
		}
		else if (age>=65)
		{
			if (gender=="M" || gender=="m")
			{
				if(bmi<21)
				{
					combmi="Severely Underweight";
				}
				else if (bmi>=21 && bmi<24)
				{
					combmi="Underweight";
				}
				else if (bmi>=24 && bmi<30)
				{
					combmi="Normal weight";
				}
				else if (bmi>=30 && bmi<35)
				{
					combmi="Overweight";
				}
				else
				{
					combmi="Obesity";
				}		
			}
			else if (gender=="F" || gender=="f")
			{
				if(bmi<21)
				{
					combmi="Severely Underweight";
				}
				else if (bmi>=21 && bmi<24)
				{
					combmi="Underweight";
				}
				else if (bmi>=24 && bmi<30)
				{
					combmi="Normal weight";
				}
				else if (bmi>=30 && bmi<35)
				{
					combmi="Overweight";
				}
				else
				{
					combmi="Obesity";
				}
			}
		}
	}
	
	string getBmiCalc(){return combmi;}
};
#endif
