 #include"Resources.h"
  
//-----------------------------------Default Constructor--------------------------------------------------------//

resources::resources()
	{
		id = 0;
		resource_name = "laptop";
	//	cout << "default constructor is called\n";

	}
//-----------------------------------Parameterized Constructor--------------------------------------------------------//

resources::resources(int id_1, string name)
	{

		id = id_1;
		resource_name = name;

	}

bool resources::isvalidID()
{
	if (isalpha(id))
	{

		//	cout << "enter new id yor id is wrong\n";
		return false;
	}
	else if (isdigit(id))
	{
		//	cout << "Your id is correct\n";
		return true;
	}


}


bool resources::isvalidname()
{


	for (int i = 0; i < resource_name.length(); i++)
	{
		if (isalpha(resource_name == "0"))
		{
			cout << "your resource name is not valid try again\n";
			return false;
		}

		else {

			cout << "your resource name is valid\n";
			return true;
		}
	}


}

//-----------------------------------Setter Functions--------------------------------------------------------//
void resources::set_id(string r_id)

{
	id = stoi(r_id);


}
void resources::set_name(string name_1)
{
	resource_name = name_1;

}

//-----------------------------------Getter Functions--------------------------------------------------------//

int resources::get_id()
	{
	 return  id;

	}

	string resources::get_name()
	{ 
		return  resource_name;
	}
	

	
void resources::display_data()
{
	cout << "resource id:" << id;
	cout << endl;
	cout << "resources name: " << resource_name;
	cout << endl;


}
void resources::setoption(string s)
{
	op = s;
}
string resources::getoption()
{
	return op;
}
void resources::setE(string s)
{
	E = s;
}
string resources::getE()
{
	return E;
}



void resources::add_data()
{
	ofstream file_1;
	file_1.open("application.txt", ios::out | ios::app);

 

	if (file_1.is_open()) {

		file_1 << endl;

		string x = get_name();
		int y = get_id();

		//file_1 << resource_id << "\n " << name << endl;
		for (int i = 0; i < 2; i++)
		{
			file_1 << y << "\n" << x << endl;

		}
		file_1.close();



	}

}

void resources::edit_data(string o , string n)
{
	ifstream myfile;
	int option = stoi(o);

 	if ( myfile.is_open())
	{
	 	//cout << "file is opened successfully\n";
		if (option == this->id)
		{
			//	cout << "enter ur resource name again to edited\n";

			set_name(n);
		}
			 
			myfile >> resource_name  ;

		 
	//	cout << "Your record is edited:" << name;

		}
	myfile.close();

}


 
void resources::delete_data(string n)
{
	ifstream myfile_2;
	resources obj;
	int option=stoi(n);
//	cout << "enter ur option u want to delete it\n";
 	myfile_2.open("application.txt", ios::app);
	 
	if (myfile_2.is_open())
	{
	//	cout << "file is opened successfully\n";
	//	cout << "what resource id u want to delete?\n ";
 

		if (option == this->id)
		{

			string name_2 = "******";

			obj.resource_name = name_2;

			for (int i = 0; i < 3; i++)
			{
			///	cout << "deleted data:" << obj.resource_name;
				myfile_2 >> resource_name[i];
				myfile_2 >> id;


			}



		}


	}
	myfile_2.close();
//	cout << "you file is deelted\n";
}

 





