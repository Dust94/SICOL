#include "AlumnoForm.h"
using namespace SICOL_GUI;

System::Void AlumnoForm::dgvAlumnos_CellContentClick(System::Object^  sender, 
	System::Windows::Forms::DataGridViewCellEventArgs^  e) {

	if (e->RowIndex < 0) return;
	int selectedRow = e->RowIndex;
	dgvAlumnos->Rows[selectedRow]->Selected = true;
	if (selectedRow >= 0){
		String^ idAlumno_String = dgvAlumnos->Rows[selectedRow]->Cells[0]->Value->ToString();
		idAlumno = Int32::Parse(idAlumno_String);

		Alumno^ a = SICOLManager::QueryAlumnoById(idAlumno);
		if (a->sexo == 'M') {
			rbtnMasculino->Checked = true;
			rbtnFemenino->Checked = false;
		}
		if (a->sexo == 'F') {
			rbtnMasculino->Checked = false;
			rbtnFemenino->Checked = true;
		}
		txtDni->Text = a->dni;
		txtNombre->Text = a->nombre;
		txtApPaterno->Text = a->apellido_Pa;
		txtApMaterno->Text = a->apellido_Ma;
		txtTelefono->Text = a->telefono;
		txtDireccion->Text = a->direccion;
		txtCodigoAlumno->Text = a->codigo;
		txtIdApoderado->Text = "" + a->apoderado->id;
	} //Fin de If
} //Fin de Metodo
