#include "AlumnoForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void Main(array<String^>^ args){
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	SICOL_GUI::AlumnoForm myForm;
	Application::Run(%myForm);
}
