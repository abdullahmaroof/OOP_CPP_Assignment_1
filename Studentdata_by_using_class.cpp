#include<iostream>
using namespace std;

class stdrecord{
	private:
		string roll_no;
		string name;
		string father_name;
		string email;
		int age;
		string dob;
		string phone_no;
	public:
		void saveddata(string std_roll_no, string std_name, string std_father_name, string std_email, int std_age, string std_dob, string std_phone_no)
		{
			roll_no = std_roll_no;
			name = std_name;
			father_name = std_father_name;
			email = std_email;
			age = std_age;
			dob = std_dob;
			phone_no = std_phone_no;
		}
		void getdata()
		{
			cout<<"\t* Roll No: "<<roll_no<<endl;
			cout<<"\t* Name: "<<name<<endl;
			cout<<"\t* Father Name: "<<father_name<<endl;
			cout<<"\t* Email: "<<email<<endl;
			cout<<"\t* Age: "<<age<<" year old"<<endl;
			cout<<"\t* Date of birth: "<<dob<<endl;
			cout<<"\t* Mobile No: "<<phone_no<<"                                                     *"<<endl;			
		}
};

int main()
{
	stdrecord std1, std2;
	std1.saveddata("BAIM-S20-015","Shifa Rafique","Rafique Gill","baim-f19-007@superior.edu.pk",19,"11-MAY-2000","+92300-8723713");
	std2.saveddata("BAIM-F19-007","Abdullah Maroof","Maroof Hussain","baim-f19-007@superior.edu.pk",19,"1-NOV-2000","+92312-2002221");
	cout<<"\n\t*********************************************************************************"<<endl;
	cout<<"\t*                                 Assignment-1                                  *"<<endl;
	cout<<"\t*                                                                               *"<<endl;
	cout<<"\t* Name: Abdullah Maroof                                                         *"<<endl;
	cout<<"\t* Roll no: BAIM-F19-007                                                         *"<<endl;
	cout<<"\t* Department: BS Software Engineering                                           *"<<endl;
	cout<<"\t* Session: 2-A                                                                  *"<<endl;
	cout<<"\t*-------------------------------------------------------------------------------*"<<endl;
	cout<<"\t* Question: print student data?                                                 *"<<endl;
	cout<<"\t*                                                                               *"<<endl;
	cout<<"\t* Program:-                                                                     *"<<endl;
	cout<<"\t*                                                                               *"<<endl;
	cout<<"\t*                               Student Record                                  *"<<endl;
	cout<<"\t*                                                                               *"<<endl;
	cout<<"\t*  ---------------------------------------------------------------------------  *"<<endl;
	cout<<"\t*                             Student 1 Record                                  *"<<endl;
	std1.getdata();
	cout<<"\t*  ---------------------------------------------------------------------------  *"<<endl;
	cout<<"\t*                             Student 2 Record                                  *"<<endl;
	std2.getdata();
	cout<<"\t*                                                                               *"<<endl;
	cout<<"\t*********************************************************************************"<<endl;
	
	return 0;
}
