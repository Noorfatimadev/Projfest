 
#include"Project.h"
using namespace std;
//const int Max_Size = 20;

//Parent class //
  //-----------------------------------Default Constructor--------------------------------------------------------//
 
	Project :: Project()
	{
		Project_Name = "\0";
		Project_ID = 0;
	//	cout << "default constructor of project class is called\n";
	}

 //-----------------------------------Parameterized Constructor--------------------------------------------------------//

	Project::Project(int pID, string n)
	{
		Project_ID = pID;
		Project_Name = n;
		cout << "parametric constructor is called from project class\n";
	}

	//-----------------------------------Setter Functions--------------------------------------------------------//

	void 	Project::SetName(string s)
	{
		if (s == "\n" || s == " ")
		{
			Project_Name = "\n";
		}
		else
		{
			//	cin.ignore();
				//cout << "Enter Project Name : ";
				// getline(cin,s );
			Project_Name = s;

		}


	}
	void 	Project:: SetID(string i)
	{ 
	  	//cout << "Enter Project ID : ";cin >> id;

		Project_ID = stoi(i);
	 
	}

 // -----------------------------------Getter Functions--------------------------------------------------------//

	string 	Project:: GetName()
	{
	//	cout << "your project name outcome is:";

		cout << Project_Name;
		cout << "\n";
		return this->Project_Name;
	}
	int 	Project:: GetID()
	{
	//	cout << "your project id result:";
		cout << Project_ID;
		return (Project_ID);
	}

	// Public Function Decleration //
	void 	Project:: AddProject()
	{
		ofstream myfile;
		myfile.open("adding.txt", ios::app);
		if (myfile.is_open())

		{
			 
			int a = GetID();
			string s = GetName();

 
			myfile << a << s;
			 
		}

		myfile.close();
	}
	void 	Project:: ReadProject()
	{
		ifstream myfile_1;
		myfile_1.open("adding.txt", ios::in | ios::app | ios::ate);
		if (myfile_1.fail())
		{
			cout << "it is not opened\n";
		}
		else
		{
			char data;
			while (!myfile_1.eof())
			{
				data = myfile_1.get();
				cout << "Your record is Added :" << data << endl;
			}
			myfile_1.close();
		}

	}

	void Project::setoption(string s)
	{
		op = s;
	}
	string Project::getoption() {
		return op;
	}
	void Project::setEname(string s)
	{
		en = s;
	}
	string  Project::getEname()
	{
		return en ;
	}
	void 	Project::EditProject(string op, string name)

	{
		int option = stoi(op);

		ofstream myfile;
		myfile.open("adding_2.txt", ios::out | ios::app);
		if (myfile.is_open())
			 
		{

			 
			if (option == this->Project_ID)
			{
				//Project_Name[20] = name_1[20];
				SetName(name);
			}
			 
			myfile << Project_ID << "\n";
			myfile << Project_Name << "\n";
			 

			//cout << "Your record id edited\n";
			myfile.close();
			 
			 
		}
	 

	}

	void 	Project::DeleteProject(string op)
	{
		int option = stoi(op);
		ofstream myfile_3;
		myfile_3.open("adding.txt", ios::app | ios::ate);
		if (myfile_3.is_open())

		{
			 
				//cout << "what project id record u want to delete\n";
				//cout << "enter ur project id:";
			 
			if (option == this->Project_ID)
			{

				for (int i = 0; i < 3; i++)
				{
					if (i != option)
					{
						myfile_3 << Project_ID;
						myfile_3 << Project_Name;

					}
				}
				myfile_3.close();

			}
		}

	}

	void Project::DisplayProject()
	{
		cout << "\n " << GetID() << "  " << GetName();
		cout << endl;
	}


