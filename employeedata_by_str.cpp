#include<iostream>
using namespace std;

struct employee{
	int id;
	float compensation;
};

int main()
{
	employee emp1, emp2, emp3;
	emp1.id = 12674;
	emp1.compensation = 500;
	emp2.id = 23145;
	emp2.compensation = 900;
	cout<<"\n\t*********************************************************************************"<<endl;
	cout<<"\t*                                 Assignment-1                                  *"<<endl;
	cout<<"\t*                                                                               *"<<endl;
	cout<<"\t* Name: Abdullah Maroof                                                         *"<<endl;
	cout<<"\t* Roll no: BAIM-F19-007                                                         *"<<endl;
	cout<<"\t* Department: BS Software Engineering                                           *"<<endl;
	cout<<"\t* Session: 2-A                                                                  *"<<endl;
	cout<<"\t*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*"<<endl;
	cout<<"\t* Question: print employee data?                                                *"<<endl;
	cout<<"\t*                                                                               *"<<endl;
	cout<<"\t* Program:-                                                                     *"<<endl;
	cout<<"\t*                                                                               *"<<endl;
	cout<<"\t* Enter employee data:                                                          *"<<endl;
	cout<<"\t* 		employee id(should have 5 digits): ";
	cin>>emp3.id;
	cout<<"\t* 		employee compensation(in dollars-maximum 999): ";
	cin>>emp3.compensation;
	cout<<"\t*                                                                               *"<<endl;
	cout<<"\t*  ---------------------------------------------------------------------------  *"<<endl;
	cout<<"\t*                                Phone numbers                                  *"<<endl;
	cout<<"\t*                                                                               *"<<endl;
	cout<<"\t*                  -------------------------------------------                  *"<<endl;
	cout<<"\t*                  |    Employe id    |     Compensation     |                  *"<<endl;
	cout<<"\t*                  |------------------|----------------------|                  *"<<endl;
	cout<<"\t*                  |      "<<emp1.id<<"       |          "<<emp1.compensation<<"$        |                  *"<<endl;
	cout<<"\t*                  |      "<<emp2.id<<"       |          "<<emp2.compensation<<"$        |                  *"<<endl;
	cout<<"\t*                  |      "<<emp3.id<<"       |          "<<emp3.compensation<<"$        |                  *"<<endl;
	cout<<"\t*                  -------------------------------------------                  *"<<endl;
	cout<<"\t*                                                                               *"<<endl;
	cout<<"\t*********************************************************************************"<<endl;
	return 0;
}
