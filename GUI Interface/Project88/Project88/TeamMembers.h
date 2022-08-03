#pragma once
#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
#include<conio.h>
#include<cctype>
#include<sstream>
using namespace std;
const int Max_Size = 20;

class  members
{
public:
	int member_id;
	string name ;
	string address;
	int phone;
	string email;

	//MEMBERS//


	//CONSTRUCTOR//
	members();
	//parametric constructor//
	members(int m_id, string m_n , string addr, int ph, string email_1);

	bool isValidate_ID(int member_id);

	bool isValidate_name(string n);

	string op, E;
	void  setoption(string s);

		string getoption();
	void  setE(string s);
	string   getE ();
 
	void take_input();
	//EDIT INFORMATION//

	void Edit_Input();

	//DELETE INFORMATION//

void delete_input(string i );

	//GETTERS//
	int get_memberID();
	string  get_name();
	string get_address();
	int  get_phone();
	string  get_email();

	//SETTERS//


	void set_name(string n );
	void set_ID(string me);
	void set_address(string a);
	void set_phone(string ph);
	void set_email(string e);

};