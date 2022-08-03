#pragma once
#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
#include<conio.h>
#include<cctype>
#include<sstream>

using namespace std;
//const int Max_Size = 20;

//Parent class //
class Project
{
	//Private Data Members//
public:
	int Project_ID;
	 
	string    Project_Name;
 
	//Default Constructor//
	Project();
	

	Project(int pID, string n);

	// Setter Functions//
	void SetName(string s);
	
	void SetID(string i);
	
	// Getter Functions//
	string GetName();
	int GetID();

	// Public Function Decleration //
	void AddProject();
	void ReadProject();
	string op, en;
	void setoption(string s);
	string getoption();
	void setEname(string s);
	string getEname();

	void EditProject(string op, string name);

	void DeleteProject(string op);

	void  DisplayProject();

};
