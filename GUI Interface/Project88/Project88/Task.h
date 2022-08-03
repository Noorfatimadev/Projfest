#pragma once
#include<iostream>
#include"Date.h"
#include "TeamMembers.h" 
#include "Project.h" 
#include "Resources.h" 
#include<sstream>
#include<string>


using namespace std;

class Task : public Project
{

public:
	int TaskID;
	string Title;
	Date Fromdate;
	Date Todate;
	resources  Resource[Max_Size];
	string 	Status;
	members Team_Members[Max_Size];
	int maxc, maxm;
	Task();
	//Parameterized constructor
	Task(int tID, int projectID, string title, Date fdate, Date tdate, resources  R[Max_Size], string status, members T[Max_Size]);

	void	setmaximumrecources();
	int getmaximumrecources();
	void setmaximumMembers();
	int getmaximumMembers();
	//Task ID
	int Get_TaskID();
	void Set_TaskID(int T);
	void validTaskID(int t);
	//Project Id
	void isvalid_id();
	//title
	string Get_Title();
	void  validTitle(string title);
	void Set_Title(string title);

	//dates
	void Set_Fromdate(Date d);
	void Set_Todate(Date d);
	Date Get_Fromdate();
	Date Get_Todate();

	//resource
	void Set_Resources(resources r[Max_Size]);
	int Get_Resource();
	void reservedResource();
	//status
	void	Set_Status(string s);
	string get_Status();
	//team members
	void Set_Team_Members(members m[Max_Size]);
	int Get_Team_Members();


	void delete_data();
	void add_data();
	void edit_dat();

	void member_task();
	void  define_task();
};