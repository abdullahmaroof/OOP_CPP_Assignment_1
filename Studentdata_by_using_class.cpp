#include<iostream>
using namespace std;

class stdrecord{
	private:
		int rollno;
		string name;
		string fathername;
		string dob;
		string phoneno;
	public:
		void recorddata(int stdrollno,string stdname,string stdfathername,string stddob, string stdphoneno)
		{
			rollno = stdrollno;
			name = stdname;
			fathername = stdfathername;
			dob = stddob;
			phoneno = stdphoneno;
		}
		void showdata()
		{
			cout<<"*Roll No: "<<rollno<<endl;
			cout<<"*Name: "<<name<<endl;
			cout<<"*Father Name: "<<fathername<<endl;
			cout<<"* Date of birth: "<<dob<<endl;
			cout<<"*Mobile No: "<<phoneno<<endl;			
		}
};

int main()
{
	stdrecord std1, std2, std3;
	std1.recorddata(12,"Rehan","Mumtaz Ali","11-MAY-1997","+92300-3454211");
	std2.recorddata(11,"Hamza","Ali","23-MAY-1998","+92300-32344213");
	std3.recorddata(20,"Rehan","Mumtaz Ali","23-SEP-1998","+92300-9861243");
	cout<<"Student-1"<<endl;
	std1.showdata();
	cout<<"Student-2"<<endl;
	std2.showdata();
	cout<<"Student-3"<<endl;
	std3.showdata();
	return 0;
}
