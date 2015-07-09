#include "SalonForm.h"
using namespace SICOL_GUI;

System::Void SalonForm::dgvSalon_CellContentClick(System::Object^  sender,
	System::Windows::Forms::DataGridViewCellEventArgs^  e){
	if (e->RowIndex < 0) return;
	int selectedRow = e->RowIndex;
	dgvSalon->Rows[selectedRow]->Selected = true;
	if (selectedRow >= 0){
		String^ idSalon_String = dgvSalon->Rows[selectedRow]->Cells[0]->Value->ToString();
		idSalon = Int32::Parse(idSalon_String);

		Salon^ s = SICOLManager::QuerySalonById(idSalon);
		if (s->estado == 'A') cbEstado->Checked = true;
		if (s->estado == 'I') cbEstado->Checked = false;
		if (s->proyector == 'Y') cbProyector->Checked = true;
		if (s->proyector == 'N') cbProyector->Checked = false;
		if (s->wifi == 'Y') cbWifi->Checked = true;
		if (s->wifi == 'N') cbWifi->Checked = false;

		txtNombre->Text = s->nombre;
		txtCapacidad->Text = ""+ s->capacidad;
		combTipoSalon->Text = s->tipo_Aula;
		combTipoPizarra->Text = s->tipo_Pizarra;
		txtPiso->Text = "" + s->piso;
	} //Fin de If
}//Fin del metodo
