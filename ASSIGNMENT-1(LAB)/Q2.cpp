#include<iostream>
using namespace std;
struct Phone{
	int area;
	int exchange;
	int number;
};
struct Doctor{
	string name;
	string address;
	Phone ph_no;
};
int main()
{
	Doctor doc1, doc2;
	doc1.name = "John";
	doc1.address = "House # 12, Block U, Gulberg, Lahore";
	doc1.ph_no.area = 300;
	doc1.ph_no.exchange = 211;
	doc1.ph_no.number = 2345;
	doc2.name = "Sam";
	doc2.address = "House # 32, Block A, Gulberg, Lahore";
	doc2.ph_no.area = 313;
	doc2.ph_no.exchange = 908;
	doc2.ph_no.number = 8765;
	cout<<"\n***************Info of Doctor 1******************"<<endl;
	cout<<"*Name: "<<doc1.name<<endl;
	cout<<"*Address: "<<doc1.address<<endl;
	cout<<"*Contact: "<<"("<<doc1.ph_no.area<<")"<< doc1.ph_no.exchange<<"-"<<doc1.ph_no.number<<endl<<endl;
	cout<<"\n**************Info of Doctor 2*******************"<<endl;
	cout<<"*Name: "<<doc2.name<<endl;
	cout<<"*Address: "<<doc2.address<<endl;
	cout<<"*Contact: "<<"("<<doc2.ph_no.area<<")"<< doc2.ph_no.exchange<<"-"<<doc2.ph_no.number<<endl;
	
	return 0;
}
