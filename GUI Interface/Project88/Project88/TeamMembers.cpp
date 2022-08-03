#include "TeamMembers.h"
 
	 
//-----------------------------------Default Constructor--------------------------------------------------------//
members :: members()
	{

		member_id = 0;
		name= "asma";
		address = "house";
		phone = 0;
		email = "asmabutt232@gmail.com ";
		//cout << "default constructor of member class is called\n";
	}
//-----------------------------------Parameterized Constructor--------------------------------------------------------//
members::members(int m_id, string m_n , string addr, int ph, string email_1)
	{

		member_id = m_id;
		name  = m_n ;
		address = addr;
		phone = ph;
		email = email_1;
		//cout << "parametric constructor of class memeber is called\n";


	}
//-----------------------------------Getter Functions--------------------------------------------------------//

	int members::get_memberID() {
		return this->member_id;

	}
	string members::get_name() {
		return name ;
	}
	string members::get_address() {
		return  address;
	}
	int members::get_phone() {
		return this->phone;
	}
	string members::get_email() {
		return this->email;
	}

	//-----------------------------------Setter Functions--------------------------------------------------------//
	 
	void members::set_name(string n ) {
		name = n;

	}
	void members::set_ID(string me) {
		member_id = stoi( me);
	}
	void members::set_address(string a) {
		address = a;
	}
	void members::set_phone(string ph) {
		phone = stoi(ph);
	}
	void members::set_email(string e) {
		email = e;
	}



	bool members::isValidate_ID(int member_id)
	{
		if (!(isdigit(member_id)))
		{
	//		cout << "Member Id must be a digit! ";
			return false;
		}
		else
		{
			return true;
		}
	}

	bool members::isValidate_name(string n)
	{


		if (!(isalpha(n[4])))
		{
		//	cout << "Name must be in alphabets! ";
			return false;
		}
		else
		{
			return true;
		}

	}


	void members:: take_input() {

		ofstream newFile;
		newFile.open("newFile.txt", ios::app);
		if (!newFile)
		{   
		
			//storing entries
			int s = get_memberID();
			string n = get_name();
			string e = get_email();
			int p = get_phone();
			string a=get_address();
		 
			//write all information in file//
			newFile << s << setw(10) << n << setw(20) << a << setw(20) << p  << setw(10) << e  << endl;
			newFile.close();
		}
	}

	//EDIT INFORMATION//

	void members::Edit_Input() {

		int id;
		char y;
		cout << "Enter your Member ID: ";
		cin >> id;
		cout << "Enter what you want to edit: (Name, address,phone,email)" << endl;
		cout << "press N for editing name" << endl;
		cout << "press A for editing adress" << endl;
		cout << "press P for editing phone" << endl;
		cout << "press E for editing email" << endl;
		cin >> y;

		if (y == 'N') {
			cout << "Write your name: ";
			if (cin.peek() == '/n') {
				cin.ignore();
			}
			getline(cin, name );

		}
		else if (y == 'A') {
			cout << "Write your address: ";
			if (cin.peek() == '/n') {
				cin.ignore();

			}
			getline(cin, address);

		}
		else if (y == 'P') {
			cout << "Write your phone number: ";
			if (cin.peek() == '/n') {
				cin.ignore();
			}
			cin >> phone;

		}
		else if (y == 'E') {
			cout << "Write your email: ";
			if (cin.peek() == '/n') {
				cin.ignore();
			}
			getline(cin, email);

		}
		else {
			cout << "Choose the given option correctly!";
		}
	};

	

	void members::setoption(string s)
	{
		op = s;
	}
	string members::getoption() {
		return op;
	}
	void members::setE (string s)
	{
		E = s;
	}
	string members::getE()
	{
		return E;
	}

	//DELETE INFORMATION//
	void members::delete_input(string i ) 
	{

		int id = stoi(i);

		cout << "Enter your Member ID: ";
		cin >> id;
		cout << "Enter what you want to delete (Name, address,phone,email)" << endl;
		cout << "press N for deleting name" << endl;
		cout << "press A for deleting adress" << endl;
		cout << "press P for  deleting" << endl;
		cout << "press E for deleting email" << endl;
		string y;
		cin >> y;

		if (y == "N") {

			name = "\0";
			cout << "Your name has been deleted successfully!";
		}
		else if (y == "A") {

			address = "\0";
			cout << "Your address has been deleted successfully!";
		}
		else if (y == "P") {

			phone = 0;
			cout << "Your phone has been deleted successfully!";
		}
		else if (y == "E") {

			email = "\0";
			cout << "Your email has been deleted successfully!";
		}
		else {
			cout << "Choose the given option correctly!";
		}
	}

