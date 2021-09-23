#include "Project.h"
#include "Resources.h"
#include "TeamMembers.h"
#include"Task.h"
#include<iostream>


using namespace std;

int main()
{

	cout << "In main";
	int option;
	cout << "******************************************LOGIN IN PROJECT MANAGEMENT SYSTEM****************************************\n";
	cout << "\t\t1)login\n";
	cout << "\t\t2)Register\n";
	cout << "Enter your option\n";
	cin >> option;

	switch (option) {
	case 1:
	{
		string user_name;
		string password;
		ofstream myfile_1;
		cout << "Enter the username : ";
		cin.clear();
		cin >> user_name;
		cin.clear();
		cout << "Enter the password : ";
		cin.ignore();

		getline(cin, password);
		cout << "\n";
		myfile_1.open("application.txt", ios::app);
		myfile_1 << user_name << ' ' << password << "\n";
		cin.clear();
		cout << "YOU ARE REGIDTERED SUCCESSFULLY\n";
		break;
	}
	case 2:
	{
		string username;
		string password_1;
		cout << "\t\tENTER YOUR PASSWORD TO LOGIN IN THE PROJECT MANGEMENT SYSTEM\n";
		cout << "\t\t USERNAME : ";
		cin >> username;
		cout << "\t\tPassword : ";
		getline(cin, password_1);
		if (username == "a" || username == "z" || username == "A" || username == "Z")
			if (password_1 == "0" || password_1 == "9" || password_1 == "a" || "z")
				cout << "Your PASSWORS AND USERNAME IS VALID\n";
		cout << "You ARE LOGIN SUCCESSFULLY\n";
		break;
	}
	default:
		cout << "nothing" << endl;
	}

	Project obj;
	cin.clear();
	cout << "\t\t**********************WELCOME TO PROJECT MANAGEMENT SYSTEM APPLICATION************************\n";
	cout << "\t\t     *****MENU*****\n";
	cout << "\t\t     Enter 1 for Adding the Project ID,PROJECT Name\n ";
	cout << "\t\t     Enter 2 for Editing the Project ID,PROJECT Name\n ";
	cout << "\t\t     Enter 3 for Deleting the Project ID,PROJECT Name\n ";
	cout << "\t\t     Enter 4 for Displaying the Project ID,PROJECT Name\n ";

	int n;
	cout << "Enter your option\n";
	cin >> n;
	Project obj1;


	cout << "Enter your Project ID:";
	int id_1;
	cin >> id_1;

	obj1.Project_ID = id_1;

	cin.ignore();
	string pac;
	cout << "\nEnter your Project name: ";
	getline(cin, pac);
	obj1.Project_Name = pac;

	switch (n)
	{
	case 1:

		obj1.AddProject();
		break;
	case 2:
		obj1.EditProject("1", "Wedding");
		break;
	case 3:
		obj1.DeleteProject("1");
		break;
	case 4:
		obj1.DisplayProject();
		break;
	case 5:
		obj1.DisplayProject();
	default:
		cout << "nothing\n";

	}
	cin.clear();

	cout << "\t\t        You have entered the Project\n";
	int a = 1;
	while (a != 0)
	{

		cout << "\t\t   *********************Team Members************************\n";

		cout << "\t\t   *******MENU*********\n";
		cout << "\t\t    Enter 1 for Adding the Member  \n ";
		cout << "\t\t    Enter 2 for Editing the Memeber  \n ";
		cout << "\t\t    Enter 3 for Deleting the Member \n ";

		cin.clear();
		int n_6;

		cout << "\t\t***Enter your option***\n";
		cin.clear();
		cin >> n_6;
		cin.clear();
		members obj_2;
		cout << "\nEnter your Member Id: ";
		int id_2;
		cin >> id_2;
		obj_2.member_id = id_2;
		cin.clear();
		cout << "Enter your Name: ";
		cin.ignore();
		string na;
		getline(cin, na);
		obj_2.name = na;
		cin.clear();
		cout << "Enter your Email Address: ";
		string nas;
		getline(cin, nas);
		obj_2.email = nas;
		cin.clear();
		cout << "Enter your Addresss :";
		string address_1;
		cin >> address_1;
		obj_2.set_address(address_1);
		cin.clear();
		cout << "Enter your Phone Number :";
		int ph;
		cin >> ph;
		obj_2.phone = ph;

		cin.clear();

		cout << endl;

		switch (n_6)
		{
		case 1:
			cin.clear();
			obj_2.take_input();
			break;
		case 2:
			cin.clear();
			obj_2.Edit_Input();
			break;
		case 3:
			cin.clear();
			cout << "Enter the member ID you want to delete .";
			int ll;
			cin >> ll;
			obj_2.delete_input(to_string(ll));
			break;

		default:
			cin.clear();
			cout << "nothing\n";

		}

		cout << "\t\t  Press 0 to end entering else 1 to continue. \n ";
		cin >> a;

	}


	int b = 1;
	while (b != 0)
	{
		cout << "\n\t\t**********************Resource************************\n";
		cout << "\t\t*****MENU*****\n";
		cout << "\t\tEnter 1 for Adding the Resource ID,Resource Name\n ";
		cout << "\t\tEnter 2 for Editing the Resource ID,Resource Name\n ";
		cout << "\t\tEnter 3 for Deleting the Resource ID,Resource Name\n ";
		cout << "\t\tEnter 4 for Displaying \n";
		int op_12;
		cin.clear();
		cout << "\t\t***Enter your option***\n";
		cin >> op_12;
		cin.clear();
		resources  obj2;
		cin.clear();
		cout << "Enter your resources Id:";
		cin.clear();
		int id_4;
		cin.clear();
		cin >> id_4;
		obj2.id = id_4;

		cin.ignore();
		string opt;
		cout << " Enter your resource name: ";
		getline(cin, opt);
		obj2.resource_name = opt;



		obj2.isvalidID();
		obj2.isvalidname();
		cin.clear();

		switch (op_12) {

		case 1:
		{
			obj2.add_data();
			break;
		}

		case 2:

		{cout << "Enter your option for o:";
		string o;
		cin >> o;
		cout << "Enter your option for s;";
		string s;
		cin >> s;
		obj2.edit_data(o, s);
		break;
		}
		case 3:
		{
			cout << "Enter your option for s_1:";
			string s_1;
			cin >> s_1;
			obj2.delete_data(s_1);
			break;
		}
		case 4:
		{
			obj2.display_data();
		}
		default:
		{
			cout << "nothing";

		}
		}
		cout << "\t\t  Press 0 to end entering else 1 to continue. \n ";
		cin >> b;

	}

	///////////////////////////////////////////////////////////////////////////////////////////////////
	cin.clear();
	int c = 1;
	while (c != 0)
	{
		cout << "\t\t**********************Task************************\n";
		cout << "\t\t*****MENU*****\n";
		cout << "\t\tEnter 1 for Adding the Task  \n ";
		cout << "\t\tEnter 2 for Editing the Task  \n ";
		cout << "\t\tEnter 3 for Deleting the Task  \n ";
		cout << "\t\tEnter 4 forDefine Task\n ";
		cout << "\t\t***Enter your option***\n";
		int n_4;
		cout << "Enter your option" << endl;
		cin >> n_4;
		Task obj_7;

 

	
		switch (n_4)
		{
		case 1:
			obj_7.add_data();
			break;
		case 2:
			obj_7.edit_dat();
			break;
		case 3:
			obj_7.delete_data();
			break;
		case 4:
			obj_7.define_task();

		default:

			cout << "nothing";

		}
 

		cout << "\t\t  Press 0 to end entering else 1 to continue. \n ";
		cin >> c;

	}

	cout << "***********************Print report About Delayed Task********************";
	cout << endl;
	cout << "Enter 1 for print the task about delaying\n";
	int t_2;
	cin >> t_2;
	Task t;
	switch (t_2)
	{

	case 1:
		if (t.TaskID == 1 || t.TaskID == 2)
		{

			cout << "Task Id" << "     " << "Status" << "     " << "Date" << endl;
			cout << "1" << "      " << "done" << "         " << "excact at time" << endl;
			cout << "2 ";
			cout << "      ";
			cout << "done";
			cout << "      ";
			cout << "exact at time" << endl;

		}
		else
		{
			cout << "Task Id" << "     " << "Status" << "     " << "Date" << endl;
			cout << "1" << "      " << " undone" << "         " << "delayed" << endl;

		}

		break;
	default:
		cout << "nothing" << endl;
	}

		return 0;

	 
}