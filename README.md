#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include "Nurse.h"
#include "Visitor.h"
#include "BmiCalc.h"
#include "BloodPressure.h"
#include "BloodGlucose.h"
#include "BodyTemp.h"

using namespace std;



BloodGlucose::BloodGlucose()
{
	
}

BodyTemp::BodyTemp()
{
	
}

BloodPressure::BloodPressure()
{
	
}


int main()
{
	
	int desi, id,age,sys,dys;
	string gender;
	double bmi,glu,temp;
	
	
	cout<<"==================================="<<endl;
	cout<<"              MENU"<<endl;
	cout<<"==================================="<<endl;
	cout<<"Are you:"<<endl;
	cout<<"         1= Hospital Management"<<endl;
	cout<<"         2= Nurse"<<endl;
	cout<<"         3= Visitor"<<endl;
	cout<<"         4= Exit"<<endl;
	cout<<endl;
	cout<<"Choose an operation   => ";
	
	cin>>desi;
	
	
	
	time_t tt;  
    struct tm * ti; 
    time (&tt); 
    ti = localtime(&tt); 
	
	
	
	while(desi!=4)
	{
	if (desi==1)
	{
		system("CLS");
		int num;
		string doctor,input,code, id,kp;
		fstream doctorfile, codeDfile;
		doctorfile.open("Nama Doctor.txt", ios::in);
		codeDfile.open("Code Doctor.txt", ios::in);
		
		
		
		
		cout<<"==================================="<<endl;
		cout<<"             LOG IN"<<endl;
		cout<<"==================================="<<endl;
		cout<<"Enter username: ";
		cin>>doctor;
		cout<<"Enter your ID: ";
		cin>>id;
		cout<<endl;
		system("CLS");
		do
		{
			doctorfile>>input;
			codeDfile>>code;
			if(doctor==input && id==code)
			num=1;
			else
			num=0;
		}while(num==0 && !doctorfile.eof() && !codeDfile.eof());
		if (num==1)
		{			
			string name,id,ward,room,file, file2;
			string input;
			fstream opfile,wardfile;
			cout<<"==================================="<<endl;
			cout<<"          PATIENT'S RECORD'"<<endl;
			cout<<"==================================="<<endl;
			cout<<"Enter patient's identification number: ";
			cin>>kp;
			file=kp+".txt";
			opfile.open(file.c_str(), ios::in);
			while(!opfile.eof())
			{
				getline(opfile, input);
				cout<<input<<endl;
			}
			opfile.close();
			cout<<"==================================="<<endl;
			cout<<"            ASSIGN WARD"<<endl;
			cout<<"==================================="<<endl;
			cout<<"Enter patient's id: ";
			cin>>id;
			file2=id+".txt";
			wardfile.open(file2.c_str(), ios::out);			
			cout<<"Enter patient's ward: ";
			cin>>ward;
			cout<<"Enter patient's room number: ";
			cin>>room;
			wardfile<<"Patients ID: "<<id<<endl;
			wardfile<<"Patient's ward: "<<ward<<endl;
			wardfile<<"Patient's room: "<<room<<endl;
			wardfile<<endl;
			wardfile<<"Assigned by Mr. "<<doctor<<endl;
			wardfile.close();							
		}
		else
		{
			cout<<endl;
			cout<<"Invalid username or code";
			
		}
		doctorfile.close();
		cout<<endl;
		system("pause");
		system("CLS");
	}
	
	else if (desi==2)
	{
		system("CLS");
		int num;
		string input,code,nurse,id,kp;
		fstream nursefile,codeNfile;
		nursefile.open("Nama Nurse.txt", ios::in);
		codeNfile.open("Code Nurse.txt", ios::in);
		
		cout<<"==================================="<<endl;
		cout<<"             LOG IN"<<endl;
		cout<<"==================================="<<endl;
		cout<<"Enter username:  ";
		cin>>nurse;
		cout<<"Enter your ID: ";
		cin>>id;
		system("CLS");
	
		do
		{
			nursefile>>input;
			codeNfile>>code;
			if (input==nurse && code==id)
			{
				num=1;
			}
			else 
			{
				num=0;
			}
		}while(num==0 && !nursefile.eof() && !codeNfile.eof());
		
		if (num==1)
		{			
			string name, file;
			
			cout<<"==================================="<<endl;
			cout<<" Enter the information of patient"<<endl;
			cout<<"==================================="<<endl;
			cout<<"Enter patient's identification number: ";
			cin>>kp;
			file=kp+".txt";
			cin.ignore();
			fstream pfile;
			pfile.open(file.c_str(), ios::out);
			cout<<"Enter patient's name: ";
			getline(cin,name);
			Nurse n1; 
			n1.setAddress();
			n1.setTelephone();
			n1.setFamTele();
			n1.setAge();
			n1.setGender();
			n1.setbloodTy();
			n1.setbloodSys();
			n1.setbloodDys();
			n1.setbloodGl();
			n1.setbodyTemp();
			n1.setheight();
			n1.setweight();
			age=n1.getAge();
			gender=n1.getGender();
			bmi=n1.getBmi();
			sys=n1.getBloodSys();
			dys=n1.getBloodDys();
			glu=n1.getBloodGl();
			temp=n1.getBodyTemp();
			n1.setCalc(bmi,age,gender);
			n1.setPressure(sys,dys);
			n1.setGlucose(glu);
			n1.setTemp(temp, age);
			pfile<<left<<setw(22)<<"Name: "<<setw(25)<<name<<endl;
			pfile<<left<<setw(22)<<"Address: "<<setw(25)<<n1.getAddress()<<endl;
			pfile<<left<<setw(22)<<"Mobile number: "<<setw(25)<<n1.getTele()<<endl;
			pfile<<left<<setw(22)<<"Family mobile number: "<<setw(25)<<n1.getFamTele()<<endl;
			pfile<<left<<setw(22)<<"Age: "<<setw(25)<<n1.getAge()<<endl;
			pfile<<left<<setw(22)<<"Gender: "<<setw(25)<<n1.getGender()<<endl;
			pfile<<left<<setw(22)<<"Blood Pressure: "<<right<<setw(3)<<n1.getBloodSys()<<setw(1)<<"/"<<left<<setw(3)<<n1.getBloodDys()<<setw(18)<<"(mmHg)"<<endl;
			pfile<<left<<setw(22)<<"Blood Glucose level: "<<setw(4)<<n1.getBloodGl()<<setw(21)<<"(mmol/L)"<<endl;
			pfile<<left<<setw(22)<<"Blood Type: "<<setw(25)<<n1.getBloodTy()<<endl;
			pfile<<left<<setw(22)<<"Body Temperature: "<<setw(4)<<n1.getBodyTemp()<<setw(21)<<"(C)"<<endl;
			pfile<<left<<setw(22)<<"Height: "<<n1.getHeight()<<"(m)"<<endl;
			pfile<<left<<setw(22)<<"Weight: "<<n1.getWeight()<<"(kg)"<<endl;
			pfile<<left<<setw(22)<<"BMI: "<<setw(7)<<n1.getBmi()<<setw(18)<<endl;
			pfile<<endl;
			pfile<<"Patient may have: "<<endl;
			pfile<<"1. "<<n1.getPressure()<<endl;
			pfile<<"2. "<<n1.getGlucose()<<endl;
			pfile<<"3. "<<n1.getTemp()<<endl;
			pfile<<"4. "<<n1.getCalc()<<endl;
			pfile<<endl;
			pfile<<endl; 
			pfile<<"Checked by nurse "<<nurse<<" ("<<id<<")"<<endl;
			pfile<<"Time: "<<asctime(ti)<<endl;
			pfile.close();
		}			
		else
		{
			cout<<endl;
			cout<<"Invalid username or code";
			 
		}	
		nursefile.close();
		cout<<endl;
		system("pause");
		system("CLS");
	}
	
	else if (desi==3)
	{
		system("CLS");
		string id, input, visitor, nid;
		int num;
		cout<<"==================================="<<endl;
		cout<<"              WELCOME"<<endl;
		cout<<"==================================="<<endl;
		Visitor v1;
		fstream visitfile,wardfile, patientID;
		visitfile.open("Visitor.txt", ios::out | ios::app);
		patientID.open("patientID.txt", ios::in);
		cout<<"Enter patient's ID: ";
		cin>>id;
		nid=id+".txt";
		
		
		do
		{
			patientID>>visitor;
			if (visitor==id)
			{
				num=1;
			}
			else 
			{
				num=0;
			}
		}while(num==0);
		
		if (num==1)
		{
			cin.ignore();
			v1.setName();
			v1.setAddress();
			system("CLS");
			visitfile<<"Patient's id: "<<id<<endl;
			visitfile<<"Name: "<<v1.getName()<<endl;
			visitfile<<"Address: "<<v1.getAddress()<<endl;
			visitfile<<"Time Visit: "<<asctime(ti)<<endl;
			visitfile<<endl; 
			wardfile.open(nid.c_str(), ios::in);
			cout<<"==================================="<<endl;
			cout<<"==================================="<<endl;
			cout<<endl;
			while(!wardfile.eof())
			{
				getline(wardfile,input);
				cout<<input<<endl;
			}
			cout<<"==================================="<<endl;
			cout<<"          HAVE A NICE DAY"<<endl;
			cout<<"==================================="<<endl;
		}
		
		
		else
		{
			cout<<endl;
			cout<<"INVALID ID";
		}
		visitfile.close();
		patientID.close();
		cout<<endl;
		system("pause");
		system("CLS");
	}
	
	else
	{
		cout<<"ERROR"<<endl;
		cout<<endl;
		system("pause");	
		system("CLS");
	}
	
	cout<<"==================================="<<endl;
	cout<<"              MENU"<<endl;
	cout<<"==================================="<<endl;
	cout<<"Are you:"<<endl;
	cout<<"         1= Doctor"<<endl;
	cout<<"         2= Nurse"<<endl;
	cout<<"         3= Visitor"<<endl;
	cout<<"         4= Exit"<<endl;
	cout<<endl;
	cout<<"Choose an operation   => ";
	cin>>desi;
	}
	return 0;
	
}
