#include<iostream>
using namespace std;

struct points{
	int	x_coordinate;
	int y_cordinate;
};

int main()
{
	points p1, p2, p3;
	cout<<"\n\t**********************************************************************************"<<endl;
	cout<<"\t*                                 Assignment-1                                   *"<<endl;
	cout<<"\t*                                                                                *"<<endl;
	cout<<"\t* Name: Abdullah Maroof                                                          *"<<endl;
	cout<<"\t* Roll no: BAIM-F19-007                                                          *"<<endl;
	cout<<"\t* Department: BS Software Engineering                                            *"<<endl;
	cout<<"\t* Session: 2-A                                                                   *"<<endl;
	cout<<"\t*<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>*"<<endl;
	cout<<"\t* Question: point to model a point?                                              *"<<endl;
	cout<<"\t*                                                                                *"<<endl;
	cout<<"\t* Program:-                                                                      *"<<endl;
	cout<<"\t*                                                                                *"<<endl;
	cout<<"\t* Enter p1 x and y coordinates:                                                  *"<<endl;
	cout<<"\t* 		x-coordinate: ";
	cin>>p1.x_coordinate;
	cout<<"\t* 		y-coordinate: ";
	cin>>p1.y_cordinate;
	cout<<"\t*                                                                                *"<<endl;
	cout<<"\t*  ----------------------------------------------------------------------------  *"<<endl;
	cout<<"\t*                                                                                *"<<endl;
	cout<<"\t* Enter p2 x and y coordinates:                                                  *"<<endl;
	cout<<"\t* 		x-coordinate: ";
	cin>>p2.x_coordinate;
	cout<<"\t* 		y-coordinate: ";
	cin>>p2.y_cordinate;
	cout<<"\t*                                                                                *"<<endl;
	cout<<"\t*  ----------------------------------------------------------------------------  *"<<endl;
	cout<<"\t*                                                                                *"<<endl;
	cout<<"\t* p3 is a sum of p1 and p2                                                       *"<<endl;
	p3.x_coordinate = p1.x_coordinate + p2.x_coordinate;
	p3.y_cordinate = p1.y_cordinate + p2.y_cordinate;
	cout<<"\t* Entered Coordinates of p1: "<<p1.x_coordinate<<" "<<p1.y_cordinate<<"                                                 *"<<endl;
	cout<<"\t* Entered Coordinates of p2: "<<p2.x_coordinate<<" "<<p2.y_cordinate<<"                                                 *"<<endl;
	cout<<"\t* Result of p1  +  p2 =  p3: "<<p3.x_coordinate<<" "<<p3.y_cordinate<<"                                                 *"<<endl;
	cout<<"\t*                                                                                *"<<endl;
	cout<<"\t**********************************************************************************"<<endl;
	return 0;
}
