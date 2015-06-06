#include "SICOLForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void Main(array<String^>^ args){
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	SICOL_GUI::SICOLForm myForm;
	Application::Run(%myForm);
}

