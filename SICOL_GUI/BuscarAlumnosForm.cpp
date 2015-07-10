#include "BuscarAlumnosForm.h"
#include "MatriculaForm.h"
using namespace SICOL_GUI;

System::Void BuscarAlumnosForm::dgvAlumnos_CellContentClick(System::Object^  sender,
	System::Windows::Forms::DataGridViewCellEventArgs^  e){ 
	if (e->RowIndex < 0) return;
	int selectedRow = e->RowIndex;
	dgvAlumnos->Rows[selectedRow]->Selected = true;
	if (selectedRow >= 0){
		String^ idAlumno_String = dgvAlumnos->Rows[selectedRow]->Cells[0]->Value->ToString();
		idAlumno = Int32::Parse(idAlumno_String);

		Alumno^ a = SICOLManager::QueryAlumnoById(idAlumno);
		((MatriculaForm^)matriculaForm)->AddAlumnoToDGV(a);
		this->Close();
	}//Fin del If
}//Fin del Metodo
