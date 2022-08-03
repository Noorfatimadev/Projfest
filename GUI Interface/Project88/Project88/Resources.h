#pragma once
#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#include<iomanip>
#include<cctype>
using namespace std;

class resources
{
public:
	int id;
	string resource_name;
 
	resources();
	resources(int id_1, string name);

	int	get_id();

	string get_name();
	void set_id(string r_id);
	string op, E;
	void  setoption(string s);
string getoption();
	void  setE(string s);
	string   getE();

	void set_name(string name_1);
	bool isvalidID();

	bool isvalidname();

	void add_data();
	void edit_data(string o, string n);

	void delete_data(string n);
	void display_data();
};




 