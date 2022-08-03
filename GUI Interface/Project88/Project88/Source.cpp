 
#include "LoginPage.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace   Project88;

[STAThread]

void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	LoginPage ProjectManagement;
	Application::Run(% ProjectManagement);



}   