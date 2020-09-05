#include<iostream>
using namespace std;

struct phone_no{
	string code;
	int exchange;
	int number;
};

int main()
{
	phone_no mynum, yournum;
	mynum.code = "+92";
	mynum.exchange = 301;
	mynum.number = 92743114;
	cout<<"\n\t*********************************************************************************"<<endl;
	cout<<"\t*                                 Assignment-1                                  *"<<endl;
	cout<<"\t*                                                                               *"<<endl;
	cout<<"\t* Name: Abdullah Maroof                                                         *"<<endl;
	cout<<"\t* Roll no: BAIM-F19-007                                                         *"<<endl;
	cout<<"\t* Department: BS Software Engineering                                           *"<<endl;
	cout<<"\t* Session: 2-A                                                                  *"<<endl;
	cout<<"\t*_______________________________________________________________________________*"<<endl;
	cout<<"\t* Question: print phone no?                                                     *"<<endl;
	cout<<"\t*                                                                               *"<<endl;
	cout<<"\t* Program:-                                                                     *"<<endl;
	cout<<"\t*                                                                               *"<<endl;
	cout<<"\t* Enter your phone no:                                                          *"<<endl;
	cout<<"\t* 		Your phone code: ";
	cin>>yournum.code;
	cout<<"\t* 		Your phone exchange: ";
	cin>>yournum.exchange;
	cout<<"\t* 		Your phone number: ";
	cin>>yournum.number;
	cout<<"\t*                                                                               *"<<endl;
	cout<<"\t*  ---------------------------------------------------------------------------  *"<<endl;
	cout<<"\t*                                Phone numbers                                  *"<<endl;
	cout<<"\t*                                                                               *"<<endl;
	cout<<"\t* My phone number: ("<<mynum.code<<") "<<mynum.exchange<<"-"<<mynum.number<<"                                           *"<<endl;
	cout<<"\t* Your phone number: ("<<yournum.code<<") "<<yournum.exchange<<"-"<<yournum.number<<endl;
	cout<<"\t*                                                                               *"<<endl;
	cout<<"\t*********************************************************************************"<<endl;
	return 0;
}
