#ifndef NURSE_H
#define NURSE_H
#include <string>
#include <iostream>
#include "BmiCalc.h"
#include "BloodPressure.h"
#include "BloodGlucose.h"
#include "BodyTemp.h"
using namespace std;

class Nurse
{
	private:
		double  bloodGl, weight, height, bmi, bodyTemp;
		int age,bloodDys,bloodSys;
		string  bloodTy, name, address,ftele, tele, gender;
		BmiCalc b1;
		BloodPressure p1;
		BloodGlucose g1;
		BodyTemp t1;
	
	public:
		Nurse()
		{
			bloodDys=0;
			bloodSys=0;
			age=0;		
			bloodGl=0.0; 
			weight=0.0; 
			height=0.0; 
			bmi=0.0; 
			bodyTemp=0.0;
		}
		Nurse(string a, string n, string Pr, string Ty, string f, string t)
		{
			address=a;
			name=n;
			bloodTy=Ty;
			ftele=f;
			tele=t;
		}
		Nurse(string comBTP, string combmi, string comBPR, string comBGL):t1(comBTP),b1(combmi),p1(comBPR),g1(comBGL){}
		void setFamTele()
		{
			cout<<"Enter family's telephone number: ";
			getline(cin,ftele);
			

		}
		void setAddress()
		{
			cout<<"Enter patient's address: ";
			getline(cin,address);
			

		}
		void setTelephone()
		{
			cout<<"Enter patient's telephone number: ";
			getline(cin,tele);
			

		}
		void setbloodTy()
		{
			cout<<"Enter patient's blood type: ";			
			getline(cin,bloodTy);

		}
		void setbloodSys()
		{
			cout<<"Enter patient's blood pressure (Systol) (in mmHg): ";
			cin>>bloodSys;
			cin.ignore();

		}
		void setbloodDys()
		{
			cout<<"Enter patient's blood pressure (Dystol) (in mmHg): ";
			cin>>bloodDys;
			cin.ignore();

		}
		void setbloodGl()
		{
			cout<<"Enter patient's blood glucose (in mmol/L): ";
			cin>>bloodGl;
			cin.ignore(); 

		}
		void setweight()
		{
			cout<<"Enter patient's weight (in kg): ";
			cin>>weight;
			cin.ignore();

		}
		void setheight()
		{
			cout<<"Enter patient's height (in meter): ";
			cin>>height;
			cin.ignore();

		}
		void setbmi()
		{
			bmi=getWeight()/(getHeight()*getHeight());
		}
		void setbodyTemp()
		{
			cout<<"Enter patient's body temperature (in celcius): ";
			cin>>bodyTemp;
			cin.ignore();

		}
		void setAge()
		{
			cout<<"Enter patient's age: ";
			cin>>age;
			cin.ignore();
		}
		void setGender()
		{
			cout<<"Enter patient's gender (M/F): ";
			cin>>gender;
			cin.ignore();
		}
		void setTemp(double temp,int age)
		{
			t1.setBTP(temp,age);
		}
		void setPressure(int sys, int dys)
		{
			p1.setBPR(sys,dys);
		}
		void setCalc(double bmi, int age, string gender)
		{
			b1.setBmiComm(bmi, age, gender);
		}
		void setGlucose(double glu)
		{
			g1.setBGL(glu);
		}
		
		string getTemp(){return t1.getBTP();}
		string getCalc(){return b1.getBmiCalc();}
		string getPressure(){return p1.getBPR();}
		string getGlucose(){return g1.getBGL();}
		string getBloodTy(){return bloodTy;}
		double getBloodGl(){return bloodGl;}
		double getWeight(){return weight;}
		double getHeight(){return height;}
		double getBmi(){return weight/(height*height);}
		double getBodyTemp(){return bodyTemp;}
		string getAddress(){return address;}
		string getTele(){return tele;}
		string getFamTele(){return ftele;}
		int getAge(){return age;}
		string getGender(){return gender;}
		int getBloodSys(){return bloodSys;}
		int getBloodDys(){return bloodDys;}
		
		
		
};
#endif
