#include<iostream>
using namespace std;
struct Phone{
	int area;
	int exchange;
	int number;
};
struct Doctor{
	string reg_no;
	string name;
	string specialization;
	Phone phone_no;
};

struct Date{
	int date_0f_joining;
	int month_0f_joining;
	int year_0f_joining;
};

int main()
{
	Doctor doct;
	doct.name = "John";
	doct.reg_no = "12au121-192";
	doct.specialization = "Heart";
	doct.phone_no.area = 300;
	doct.phone_no.exchange = 211;
	doct.phone_no.number = 2345;
	Date doc = {12, 8, 2015};
	cout<<"\nDoctor Information"<<endl;
    cout<<"Name: "<<doct.name<<endl;
	cout<<"Registartion No.: "<<doct.reg_no<<endl;
	cout<<"Specialization:"<<doct.specialization<<endl;
	cout<<"Contact Number: "<<"("<<doct.phone_no.area<<")"<< doct.phone_no.exchange<<"-"<<doct.phone_no.number<<endl;
	cout<<"\t*Date of Joining: "<<doc.date_0f_joining<<"-"<<doc.month_0f_joining<<"-"<<doc.year_0f_joining<<endl;
	cout<<"--------------------------------------------\n";
	
	return 0;
}
