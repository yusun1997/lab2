#include <iostream>
#include <cmath>
#include <cstdlib>
#include "BMI.h"
#include <fstream>
using namespace std;

int main()
{
	float h;
	int m;
	BMI bmi;
	ifstream Finput;
	ofstream Foutput;
	Finput.open("file.in",ios::in);
	Foutput.open("file.out",ios::out);


	if(!Finput){
		cerr<<"Failed opening the file"<<endl;
		exit(1);
	}
	if(!Foutput){
		cerr<<"Failed opening the file"<<endl;
		exit(1);
	}


	Foutput <<"Height   " <<"Mass   " <<"BMI   " <<"category "<<endl;
	while(Finput>>h>>m){
		bmi.setBMI( h,m );
		Foutput<<bmi.getheight()<<"     "<<bmi.getmass()<<"     "<<bmi.getBMI(h,m)<<" "<<bmi.category(h,m) << endl;
	}
	
	Finput.close();
	Foutput.close();

	return 0;
}

