#include<iostream>
using namespace std;

class doctor{
	private:
		string reg_no;
		string name;
		string specialization;
		int phone_no_code;
		int phone_no_exchange;
		int phone_no;
	public:
		void getdetail(string dreg_no, string dname, string dspecialization, int dphone_no_code, int dphone_no_exchange, int dphone_no)
		{
			name = dname;
			reg_no = dreg_no;
			specialization = dspecialization;
			phone_no_code = dphone_no_code;
			phone_no_exchange = dphone_no_exchange;
			phone_no = dphone_no;
		}
		void printdetail()
		{
			cout<<"        Doctor info         "<<endl;
			cout<<"Name: "<<name<<endl;
			cout<<"Registration No: "<<reg_no<<endl;
			cout<<"Specialization: "<<specialization<<endl;
			cout<<"Phone No: ("<<phone_no_code<<")"<<phone_no_exchange<<"-"<<phone_no<<endl;
		}
};

int main()
{
	doctor doct;
	doct.getdetail("12au121-192", "John", "Heart", 300,457,7237);
	doct.printdetail();
	return 0;
}
