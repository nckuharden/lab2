#include"BMI.h"
#include<iostream>
#include<fstream>
#include<cstdlib>

int main()
{
	float m,h;
	int i = 0 ;
	BMI b[5];
	ifstream inFile("file.in", ios::in);
      if(!inFile) 
	{
         cerr << "Failed opening" << endl;
         exit(1);
      }

	for (i = 0 ;i<5;i++)
	{
		inFile>>h>>m;
		b[i].setmass(m);
		b[i].setheight(h);
	}

	inFile.close();
	
	ofstream outFile("file.out",ios::out);

	for (i=0;i<5;i++)
	{
		m=b[i].getmass();
		h=b[i].getheight();
		outFile<<b[i].getBMI(m,h)<<'\t'<<b[i].fucklab2(b[i].getBMI(m,h)) << endl;
		



	}

}
