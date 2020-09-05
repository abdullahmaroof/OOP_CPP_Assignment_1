#include<iostream>
using namespace std;

struct Distance{
	int foot;
	float inches;
}; 

struct volume{
	Distance length;
	Distance width;
	Distance height;
};

int main()
{
	float l, w, h;
	volume room;
	cout<<"\n\t*********************************************************************************"<<endl;
	cout<<"\t*                                 Assignment-1                                  *"<<endl;
	cout<<"\t*                                                                               *"<<endl;
	cout<<"\t* Name: Abdullah Maroof                                                         *"<<endl;
	cout<<"\t* Roll no: BAIM-F19-007                                                         *"<<endl;
	cout<<"\t* Department: BS Software Engineering                                           *"<<endl;
	cout<<"\t* Session: 2-A                                                                  *"<<endl;
	cout<<"\t*&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&*"<<endl;
	cout<<"\t* Question: calculate room volume?                                              *"<<endl;
	cout<<"\t*                                                                               *"<<endl;
	cout<<"\t* Program:-                                                                     *"<<endl;
	cout<<"\t*                                                                               *"<<endl;
	cout<<"\t* Enter room length:                                                            *"<<endl;
	cout<<"\t* 		Length in foot: ";
	cin>>room.length.foot;
	cout<<"\t* 		Length in inches: ";
	cin>>room.length.inches;
	cout<<"\t*                                                                                *"<<endl;
	cout<<"\t*  ----------------------------------------------------------------------------  *"<<endl;
	cout<<"\t*                                                                                *"<<endl;
	cout<<"\t* Enter room width:                                                              *"<<endl;
	cout<<"\t* 		Width in foot: ";
	cin>>room.width.foot;
	cout<<"\t* 		Width in inches: ";
	cin>>room.width.inches;
	cout<<"\t*                                                                                *"<<endl;
	cout<<"\t*  ----------------------------------------------------------------------------  *"<<endl;
	cout<<"\t*                                                                                *"<<endl;
	cout<<"\t* Enter room height:                                                             *"<<endl;
	cout<<"\t* 		Height in foot: ";
	cin>>room.height.foot;
	cout<<"\t* 		Height in inches: ";
	cin>>room.height.inches;
	cout<<"\t*                                                                                *"<<endl;
	cout<<"\t*  ----------------------------------------------------------------------------  *"<<endl;
	cout<<"\t*                                                                                *"<<endl;
	cout<<"\t* Length of room: Length in foot + Length in inches/12                           *"<<endl;
	cout<<"\t* Length of room: "<<room.length.foot<<" + "<<room.length.inches<<"/12                                                     *"<<endl;
	cout<<"\t* Width of  room: Width  in foot + Width  in inches/12                           *"<<endl;
	cout<<"\t* Width of room: "<<room.width.foot<<" + "<<room.width.inches<<"/12                                                      *"<<endl;
	cout<<"\t* Height of room: Height in foot + Height in inches/12                           *"<<endl;
	cout<<"\t* Height of room: "<<room.height.foot<<" + "<<room.height.inches<<"/12                                                     *"<<endl;
	cout<<"\t*                                                                                *"<<endl;
	cout<<"\t*  ----------------------------------------------------------------------------  *"<<endl;
	cout<<"\t*                                                                                *"<<endl;
	l = room.length.foot + room.length.inches/12;
	cout<<"\t* Length in a room: "<<l<<endl;
	w = room.width.foot + room.width.inches/12;
	cout<<"\t* Width in  a room: "<<w<<endl;
	h = room.height.foot + room.height.inches/12;
	cout<<"\t* Height in a room: "<<h<<endl;
	cout<<"\t*                                                                                *"<<endl;
	cout<<"\t*  ----------------------------------------------------------------------------  *"<<endl;
	cout<<"\t*                                                                                *"<<endl;
	cout<<"\t* Volume = length * width * height                                               *"<<endl;
	cout<<"\t* Volume of Room = "<<l<<" * "<<w<<" * "<<h<<endl;
	cout<<"\t* Volume of Room = "<<l*w*h<<endl;
	cout<<"\t*                                                                                *"<<endl;
	cout<<"\t*********************************************************************************"<<endl;
	return 0;
}
