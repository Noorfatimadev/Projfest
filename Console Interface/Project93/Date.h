#pragma once
#include<iostream>
#include<iomanip>
#include<fstream>
#include<string> 
#include<iostream>
#include<string>
#include<sstream>
#include<cstring>
#include<string.h>
using namespace std;
class Date
{
public:
	int day;
	int month;
	int year;
	Date();
	Date(int d, int m, int y);
	void setday(int x);
	void setmonth(int h);

	void setyear(int n);
	int getday();
	int getmon();
	int getyear();
	bool Validate_Date();
};

 