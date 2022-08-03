#include "Task.h"


//-----------------------------------Default Constructor--------------------------------------------------------//
Task::Task()
{

	TaskID = 0;
	Title = "\0";
	Status = "";
	maxc = 0;
	maxm = 0;
	Fromdate.setday(1);
	Fromdate.setmonth(7);
	Fromdate.setyear(2020);
	Fromdate.Validate_Date();

	Todate.setday(9);
	Todate.setmonth(12);
	Todate.setyear(2020);
	Todate.Validate_Date();

	for (int i = 0; i < getmaximumrecources(); i++)
	{
		Resource[i].id = { 0 };
	}
	for (int i = 0; i < getmaximumMembers(); i++)
	{
		Team_Members[i].member_id = { 0 };
	}
	//	cout << "default constructor is called from task class\n";

}

//-----------------------------------Parameterized Constructor--------------------------------------------------------//
Task::Task(int tID, int projectID, string title, Date fdate, Date tdate, resources  R[Max_Size], string status, members T[Max_Size])
{

	TaskID = tID;
	Title = title;
	Fromdate = fdate;
	Todate = tdate;
	Project_ID = projectID;
	for (int i = 0; i < getmaximumrecources(); i++)
	{
		Resource[i].id = R[i].id;
	}
	for (int i = 0; i < getmaximumMembers(); i++)
	{
		Team_Members[i].member_id = T[i].member_id;
	}
	Status = status;
	//cout << "Parametric constructor is called" << endl;
}

void Task::setmaximumrecources()
{
	cout << "\nEnter Maximum No. of recources  present :";
	cin >> maxc;

}
int Task::getmaximumrecources()
{
	return maxc;

}
void	Task::setmaximumMembers()
{
	cout << "\nEnter Maximum No. of Team Members :";

	cin >> maxm;

}
int Task::getmaximumMembers()
{
	return maxm;
}


//-----------------------------------Task ID--------------------------------------------------------//

void Task::validTaskID(int t)
{

	if (!(isdigit(t)))
	{
		t = -1;
	}

}

void Task::Set_TaskID(int T)
{
	validTaskID(T);
	Title = T;

}
int Task::Get_TaskID()
{
	return TaskID;
}


//-----------------------------------Project ID--------------------------------------------------------//

void Task::isvalid_id()
{

	if ((isdigit(Project_ID)))
	{
		cout << "Project id is valid\n";
	}
	else {

		cout << "Project id is not valid";

	}
}


//-----------------------------------Title--------------------------------------------------------//

void Task::validTitle(string title)
{
	int x = title.length();
	for (int i = 0; i < x; i++)
	{
		if (!((isalpha(title[i])) || (isdigit(title[i])) || (isspace(title[i]))))
		{
			title[i] = -1;
		}
	}
}

void Task::Set_Title(string title)
{
	validTitle(title);
	Title = title;
}
string Task::Get_Title()
{
	return Title;

}
//-----------------------------------From Date--------------------------------------------------------//
void Task::Set_Fromdate(Date d1)
{
	d1.Validate_Date();

	Fromdate.setday((d1.day));
	Fromdate.setmonth((d1.month));
	Fromdate.setyear((d1.year));

}

Date Task::Get_Fromdate()
{
	Fromdate.day;
	cout << "/";
	Fromdate.month;
	cout << "/";
	Fromdate.year;
	return Fromdate;
}

//-----------------------------------To Date--------------------------------------------------------//

void Task::Set_Todate(Date d)
{
	d.Validate_Date();
	Todate.setday((d.day));
	Todate.setmonth((d.month));
	Todate.setyear((d.year));

}

Date Task::Get_Todate()
{
	Todate.day;
	cout << "/";
	Todate.month;
	cout << "/";
	Todate.year;
	return Todate;
}


//-----------------------------------Resources--------------------------------------------------------//
void Task::Set_Resources(resources r[Max_Size])
{
	for (int i = 0; i < getmaximumrecources(); i++)
	{

		Resource[i].id = r[i].id;

	}


}
int Task::Get_Resource()
{

	for (int i = 0; i < getmaximumrecources(); i++)
	{

		return	Resource[i].id;

	}

}
void Task::reservedResource()
{
	Date pd;
	cout << "Enter Present Date:\nDay: ";
	cin >> pd.day;
	cout << "\nMonth: ";
	cin >> pd.month;
	cout << "\nYear: ";
	cin >> pd.year;
	if (Todate.day > pd.day)

	{
		if (Todate.month > pd.month)
		{

			if (Todate.year > pd.year)
			{
				for (int i = 0; i < getmaximumrecources(); i++)
				{

					cout << "The Resource id " << Resource[i].id << "   is already reserved\n";

				}
			}
		}
	}


}
//-----------------------------------Status--------------------------------------------------------//
void Task::Set_Status(string s)
{
	if ((s == "done") || (s == "notdone"))
	{
		Status = s;
	}

}
string  Task::get_Status()
{
	return Status;
}

//-----------------------------------Team Members--------------------------------------------------------//
void Task::Set_Team_Members(members m[Max_Size])
{
	for (int i = 0; i < getmaximumMembers(); i++)
	{
		Team_Members[i].member_id = m[i].member_id;

	}

}

int  Task::Get_Team_Members()
{

	for (int i = 0; i < getmaximumMembers(); i++)
	{

		return	Team_Members[i].member_id;

	}
}




void Task::member_task()
{
	cout << "Enter the task id to check the members allocated to this task id:" << endl;
	int id_2;
	cin >> id_2;
	if (TaskID == id_2)
	{
		cout << "Member Id" << id_2;
	}
	else {
		cout << "enter again Task id:" << endl;
	}

}



void Task::add_data()
{

	ofstream add;
	add.open("task.txt", ios::app);
	if (!add.is_open())
	{
		cout << "your file is not opened successfuuly" << endl;
	}
	else {
		cout << "File is open successfully" << endl;
		cout << "Enter your TaskID!" << endl;
		cin >> TaskID;
		cout << "Enter the Project Id!" << endl;
		cin >> Project_ID;
		cout << "Enter your Task title!" << endl;
		cin.ignore();
		getline(cin, Title);
		cout << "Enter ur from date " << endl;
		cout << "Day(from date):";
		Date obj;
		cin >> obj.day;
		cout << "MOnth(From date): ";
		cin >> obj.month;
		cout << "Year(From date): ";
		cin >> obj.year;
		Set_Fromdate(obj);
		//todate
		cout << "\n\nEnter ur todate date ";
		cout << "\nDay(todate):";
		Date obj_1;
		cin >> obj_1.day;
		cout << "MOnth(todate): ";
		cin >> obj_1.month;
		cout << "Year(todate): ";
		cin >> obj_1.year;
		Set_Todate(obj_1);



		cout << "\n\nEnter the max team_memmbers for this task" << endl;
		int y;
		cin >> y;
		maxm = y;
		for (int i = 0; i < maxm; i++)
		{
			cout << "\nEnter team member id no. " << i + 1 << ": ";
			int w;
			cin >> w;
			Team_Members[i].set_ID(to_string(w));


		}
		cout << "\n\nEnter your maxi resources!" << endl;
		int  r_no;
		cin >> r_no;
		maxc = r_no;

		for (int i = 0; i < maxc; i++)
		{
			cout << "\nResource no" << " " << i + 1 << ": ";
			int x;
			cin >> x;
			Resource[i].set_id(to_string(x));

		}
		cout << "\n\nEnter your status for task id" << endl;
		cin >> Status;

		add << TaskID << ' ' << Project_ID << ' ' << Title << ' ' << Fromdate.day << '/' << Fromdate.month << '/' << Fromdate.year << ' ' << Todate.day << ' ' << Todate.month << ' ' << Todate.year << ' ';

		add << '[';
		for (int i = 0; i < y; i++)
		{
			add << Team_Members[i].member_id << ' ,';


		}
		add << ']' << ' ' << '[';
		for (int i = 0; i < r_no; i++)
		{
			add << Resource[i].id << ',';


		}

		add << ']' << ' ' << Status << '\n';
		add.close();

	}
}

void Task::edit_dat()
{
	cout << "*********************ENTER THE EDITED ENTRIES*********************";

	cout << "Enter your TaskID!" << endl;
	cin >> TaskID;
	cout << "Enter the Project Id!" << endl;
	cin >> Project_ID;
	cout << "Enter your Task title!" << endl;
	getline(cin, Title);
	cout << "Enter ur from date " << endl;
	cout << "Day(from date):";
	Date obj;
	cin >> obj.day;
	cout << "\n\nMOnth(From date): ";
	cin >> obj.month;
	cout << "Year(From date): ";
	cin >> obj.year;
	Set_Fromdate(obj);
	//todate
	cout << "\n\nEnter ur todate date ";
	cout << "\nDay(todate):";
	Date obj_1;
	cin >> obj_1.day;
	cout << "\nMOnth(todate): ";
	cin >> obj_1.month;
	cout << "\nYear(todate): ";
	cin >> obj_1.year;
	Set_Todate(obj_1);

	cout << "\n\nEnter the max team_memmbers for this task" << endl;
	int y;
	cin >> y;
	for (int i = 0; i < y; i++)
	{
		cout << "\nEnter team member id " << i + 1;
		int w;
		cin >> w;
		Team_Members[i].set_ID(to_string(w));


	}
	cout << "\n\nEnter your maxi resources!" << endl;
	int  r_no;
	cin >> r_no;

	for (int i = 0; i < r_no; i++)
	{
		cout << "\nResource no" << " " << i + 1;
		int x;
		cin >> x;
		Resource[i].set_id(to_string(x));

	}
	cout << "\n\nEnter your status for task id" << endl;
	cin >> Status;

	ofstream edit;
	edit.open("task.txt");
	{edit << TaskID << ' ' << Project_ID << ' ' << Title << ' ' << Fromdate.day << '/' << Fromdate.month << '/' << Fromdate.year << ' ' << Todate.day << ' ' << Todate.month << ' ' << Todate.year << ' ';

	edit << '[';
	for (int i = 0; i < y; i++)
	{
		edit << Team_Members[i].member_id << ' ,';


	}
	edit << ']' << ' ' << '[';
	for (int i = 0; i < r_no; i++)
	{
		edit << Resource[i].id << ',';


	}

	edit << ']' << ' ' << Status << '\n'; }

	edit.close();
}
void Task::delete_data()
{



	cout << "file is open " << endl;

	Project_ID = 0;
	Title = "\n";
	Status = "0 ";
	Date obj;
	obj.day = 0;
	obj.month = 0;
	obj.year = 0;
	Team_Members[Max_Size - 1].member_id = { 0 };
	Resource[Max_Size - 1].id = { 0 };

	ofstream Delete;
	Delete.open("task.txt");
	{
		{Delete << TaskID << Project_ID << Title << Fromdate.day << Fromdate.month << Fromdate.year << Todate.day << Todate.month << Todate.year << Team_Members << Resource << Status << '\n'; }
		cout << "Yor record is deleted" << endl;
	}

	Delete.close();

}



void Task::define_task()
{
	cout << "*******************************************************************************************************\n";
	cout << "**********************************************DEFINE TASK**********************************************\n";
	cout << "Instruction:(Enter the Title)" << endl;
	cin.ignore();
	getline(cin, Title);
	cout << "*******************************************************************************************************\n";
}
