#include<iostream>
using namespace std;

class doctor{
	private:
		string name;
		string address;
		int phone_no_code;
		int phone_no_exchange;
		int phone_no;
	public:
		void getdetail(string dname, string daddress, int dphone_no_code, int dphone_no_exchange, int dphone_no)
		{
			name = dname;
			address = daddress;
			phone_no_code = dphone_no_code;
			phone_no_exchange = dphone_no_exchange;
			phone_no = dphone_no;
		}
		void printdetail()
		{
			cout<<"* Name: "<<name<<endl;
			cout<<"* Address: "<<address<<endl;
			cout<<"* Phone No: ("<<phone_no_code<<")"<<phone_no_exchange<<"-"<<phone_no<<endl;
		}
};

int main()
{
	doctor doc1, doc2;
	doc1.getdetail("John", "House # 12, Block U, Gulberg, Lahore", 300, 457, 7237);
	doc2.getdetail("Sam", "House # 32, Block A, Gulberg, Lahore", 300, 877, 4328);
	cout<<"----------------Doctor-1 info---------------"<<endl;
	doc1.printdetail();
	cout<<"----------------Doctor-2 info---------------"<<endl;
	doc2.printdetail();
	return 0;
}
