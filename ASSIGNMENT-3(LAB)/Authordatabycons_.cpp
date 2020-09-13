#include<iostream>
using namespace std;

class author{
	private:
		string name;
		string email;
		char gender;
	public:
		author(){
			cout<<"\n\nPrinting author info through constructor"<<endl<<endl;
			getvalues();
		}
		void getvalues()
		{
			cout<<"--------Enter information of book's' author---------"<<endl;
			cout<<"\n* Author Name: ";
			cin>>name;
			cout<<"* Author Email: ";
			cin>>email;
			cout<<"* Author Gender: ";
			cin>>gender;
			cout<<"------------------------------"<<endl<<endl;
			printauthorinfo();
		}
		void printauthorinfo()
		{
			cout<<"--------------Author Info---------------------"<<endl;
			cout<<"\n* Name of Author: "<<name<<endl;
			cout<<"* Email of Author: "<<name<<endl;
			cout<<"* Gender of Author: "<<gender<<endl;
			cout<<"------------------------------"<<endl;
		}
};

int main()
{
	author  bookauthor;
	return 0;
}
