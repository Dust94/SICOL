#pragma once
#include "BuscarAlumnosForm.h"
namespace SICOL_GUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SICOL_Library;
	using namespace SICOL_Controller;
	using namespace System::Collections::Generic;
	using namespace System::Threading;

	/// <summary>
	/// Resumen de MatriculaForm
	/// </summary>
	public ref class MatriculaForm : public System::Windows::Forms::Form
	{
	private: Thread ^ myThread; //Creo un hilo
	public:
		MatriculaForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			//Inicializo mi hilo "myThread" con el constructor Thread()
			//ThreadStart == delegado. Puntero a Metodo
			//ThreadStart es un delegado para Trehad que apuntara a un metodo que se va a ejecutar cuando el hilo empiece a correr.
			/*Cuando se crea un subproceso administrado, 
			el método que se ejecuta en el subproceso queda representado por un delegado ThreadStart o ParameterizedThreadStart
			que se haya pasado al constructor Thread. 
			Pero el subproceso no comenzará a ejecutarse hasta que se llame al método Thread::Start. 
			La ejecución comenzará en la primera línea del método representado por el delegado ThreadStart o ParameterizedThreadStart.*/
			//ThreadStart() = argumento = metodo que se ejecutara cuando el hilo comience a correr.
			myThread = gcnew Thread(gcnew ThreadStart(this, &MatriculaForm::MyRun));
			myThread->Start(); //Empieza a correr el hilo
		}
		void MyRun(){ //Desde este hilo(algoritmo del hilo == metodo) 
			//no puedo acceder a los datos de otro hilo(hilo de esta ventana). Por eso se utiliza Invoke
			Thread::Sleep(2000);
			while (true) {
				DateTime^ now = DateTime::Now;
				// Invoke() recive como parametro un nuevo delegado y una cadena de caracteres. Para poder llamar a ciertos delegados.
				// A traves de Invoke puedo llamar a un metodo del hilo de la ventana.
				Invoke(gcnew delegateUpdateTitle(this, &MatriculaForm::UpdateTitle), //Crea una instancia de la definicion del delegado "delegateUpdateTitle"
					gcnew array<String^>{"Matricula " + now->ToString("hh:mm:ss")});
				Thread::Sleep(1000); //en milisegundos
				if (!this->Visible)
					return;
			}
		}
		//Cualquier metodo que reciva como parametro un String
		delegate void delegateUpdateTitle(String^); //Definicion de un Delegado

		void UpdateTitle(String ^newTitle){
			this->Text = newTitle;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		~MatriculaForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  txtGrado;
	private: System::Windows::Forms::TextBox^  txtAño;

	private: System::Windows::Forms::TextBox^  txtSeccion;
	private: System::Windows::Forms::Button^  btnAdd1Alumno;
	private: System::Windows::Forms::Button^  btnMatricular;








	private: System::Windows::Forms::ComboBox^  combNivel;
	private: System::Windows::Forms::DataGridView^  dgvAlumnos;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dni;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Apellido_Pa;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Apellido_Ma;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  nacimiento;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  sexo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  telefono;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  direccion;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ingreso;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  codigo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  apoderado;
	private: System::Windows::Forms::Button^  btnDeleteAlumno;






	protected:

	private:
		/// <summary>
		/// Variable del diseñador requerida.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido del método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtGrado = (gcnew System::Windows::Forms::TextBox());
			this->txtAño = (gcnew System::Windows::Forms::TextBox());
			this->txtSeccion = (gcnew System::Windows::Forms::TextBox());
			this->btnAdd1Alumno = (gcnew System::Windows::Forms::Button());
			this->btnMatricular = (gcnew System::Windows::Forms::Button());
			this->combNivel = (gcnew System::Windows::Forms::ComboBox());
			this->dgvAlumnos = (gcnew System::Windows::Forms::DataGridView());
			this->id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dni = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Apellido_Pa = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Apellido_Ma = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->nacimiento = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->sexo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->telefono = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->direccion = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ingreso = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->codigo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->apoderado = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnDeleteAlumno = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvAlumnos))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(53, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(112, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Identificador de Grado";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(53, 60);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(82, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Año Academico";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(53, 90);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(31, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Nivel";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(317, 26);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(122, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Identificador de Seccion";
			// 
			// txtGrado
			// 
			this->txtGrado->Location = System::Drawing::Point(171, 25);
			this->txtGrado->Name = L"txtGrado";
			this->txtGrado->Size = System::Drawing::Size(100, 20);
			this->txtGrado->TabIndex = 4;
			// 
			// txtAño
			// 
			this->txtAño->Location = System::Drawing::Point(171, 60);
			this->txtAño->Name = L"txtAño";
			this->txtAño->Size = System::Drawing::Size(100, 20);
			this->txtAño->TabIndex = 5;
			// 
			// txtSeccion
			// 
			this->txtSeccion->Location = System::Drawing::Point(445, 25);
			this->txtSeccion->Name = L"txtSeccion";
			this->txtSeccion->Size = System::Drawing::Size(100, 20);
			this->txtSeccion->TabIndex = 7;
			// 
			// btnAdd1Alumno
			// 
			this->btnAdd1Alumno->Location = System::Drawing::Point(387, 55);
			this->btnAdd1Alumno->Name = L"btnAdd1Alumno";
			this->btnAdd1Alumno->Size = System::Drawing::Size(69, 48);
			this->btnAdd1Alumno->TabIndex = 8;
			this->btnAdd1Alumno->Text = L"Agregar Alumno";
			this->btnAdd1Alumno->UseVisualStyleBackColor = true;
			this->btnAdd1Alumno->Click += gcnew System::EventHandler(this, &MatriculaForm::btnAdd1Alumno_Click);
			// 
			// btnMatricular
			// 
			this->btnMatricular->Location = System::Drawing::Point(295, 383);
			this->btnMatricular->Name = L"btnMatricular";
			this->btnMatricular->Size = System::Drawing::Size(75, 23);
			this->btnMatricular->TabIndex = 9;
			this->btnMatricular->Text = L"Matricular";
			this->btnMatricular->UseVisualStyleBackColor = true;
			this->btnMatricular->Click += gcnew System::EventHandler(this, &MatriculaForm::btnMatricular_Click);
			// 
			// combNivel
			// 
			this->combNivel->FormattingEnabled = true;
			this->combNivel->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Primaria", L"Secundaria" });
			this->combNivel->Location = System::Drawing::Point(171, 90);
			this->combNivel->Name = L"combNivel";
			this->combNivel->Size = System::Drawing::Size(121, 21);
			this->combNivel->TabIndex = 11;
			this->combNivel->SelectedIndexChanged += gcnew System::EventHandler(this, &MatriculaForm::combNivel_SelectedIndexChanged);
			// 
			// dgvAlumnos
			// 
			this->dgvAlumnos->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvAlumnos->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(12) {
				this->id, this->dni,
					this->nombre, this->Apellido_Pa, this->Apellido_Ma, this->nacimiento, this->sexo, this->telefono, this->direccion, this->ingreso,
					this->codigo, this->apoderado
			});
			this->dgvAlumnos->Location = System::Drawing::Point(37, 136);
			this->dgvAlumnos->Name = L"dgvAlumnos";
			this->dgvAlumnos->Size = System::Drawing::Size(611, 228);
			this->dgvAlumnos->TabIndex = 20;
			// 
			// id
			// 
			this->id->HeaderText = L"Id";
			this->id->Name = L"id";
			this->id->Width = 40;
			// 
			// dni
			// 
			this->dni->HeaderText = L"DNI";
			this->dni->Name = L"dni";
			this->dni->Width = 70;
			// 
			// nombre
			// 
			this->nombre->HeaderText = L"Nombre";
			this->nombre->Name = L"nombre";
			// 
			// Apellido_Pa
			// 
			this->Apellido_Pa->HeaderText = L"Apellido Paterno";
			this->Apellido_Pa->Name = L"Apellido_Pa";
			// 
			// Apellido_Ma
			// 
			this->Apellido_Ma->HeaderText = L"Apellido Materno";
			this->Apellido_Ma->Name = L"Apellido_Ma";
			// 
			// nacimiento
			// 
			this->nacimiento->HeaderText = L"Fecha de Nacimiento";
			this->nacimiento->Name = L"nacimiento";
			this->nacimiento->Width = 80;
			// 
			// sexo
			// 
			this->sexo->HeaderText = L"Sexo";
			this->sexo->Name = L"sexo";
			this->sexo->Width = 40;
			// 
			// telefono
			// 
			this->telefono->HeaderText = L"Numero de Telefono";
			this->telefono->Name = L"telefono";
			this->telefono->Width = 70;
			// 
			// direccion
			// 
			this->direccion->HeaderText = L"Direccion";
			this->direccion->Name = L"direccion";
			// 
			// ingreso
			// 
			this->ingreso->HeaderText = L"Fecha de Ingreso";
			this->ingreso->Name = L"ingreso";
			this->ingreso->Width = 80;
			// 
			// codigo
			// 
			this->codigo->HeaderText = L"Codigo";
			this->codigo->Name = L"codigo";
			this->codigo->Width = 70;
			// 
			// apoderado
			// 
			this->apoderado->HeaderText = L"Apoderado";
			this->apoderado->Name = L"apoderado";
			// 
			// btnDeleteAlumno
			// 
			this->btnDeleteAlumno->Location = System::Drawing::Point(541, 107);
			this->btnDeleteAlumno->Name = L"btnDeleteAlumno";
			this->btnDeleteAlumno->Size = System::Drawing::Size(107, 23);
			this->btnDeleteAlumno->TabIndex = 21;
			this->btnDeleteAlumno->Text = L"Eliminar Alumno";
			this->btnDeleteAlumno->UseVisualStyleBackColor = true;
			this->btnDeleteAlumno->Click += gcnew System::EventHandler(this, &MatriculaForm::btnDeleteAlumno_Click);
			// 
			// MatriculaForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(672, 431);
			this->Controls->Add(this->btnDeleteAlumno);
			this->Controls->Add(this->dgvAlumnos);
			this->Controls->Add(this->combNivel);
			this->Controls->Add(this->btnMatricular);
			this->Controls->Add(this->btnAdd1Alumno);
			this->Controls->Add(this->txtSeccion);
			this->Controls->Add(this->txtAño);
			this->Controls->Add(this->txtGrado);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MatriculaForm";
			this->Text = L"MatriculaForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvAlumnos))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: void RefreshDGVAlumnos(){
		List<Alumno^>^ listAlumnos = SICOLManager::QueryAllAlumnos();
		dgvAlumnos->Rows->Clear();

		for (int i = 0; i < listAlumnos->Count; i++){
			String^ sexo_StringI = gcnew String(listAlumnos[i]->sexo, 1);
			dgvAlumnos->Rows->Add(gcnew array<String^>{
				"" + listAlumnos[i]->id,
					listAlumnos[i]->dni,
					listAlumnos[i]->nombre,
					listAlumnos[i]->apellido_Pa,
					listAlumnos[i]->apellido_Ma,
					listAlumnos[i]->fechaNacimiento,
					sexo_StringI,
					listAlumnos[i]->telefono,
					listAlumnos[i]->direccion,
					listAlumnos[i]->fechaIngreso,
					listAlumnos[i]->codigo,
					"" + listAlumnos[i]->apoderado->id});
		}//Fin del For
	}//Fin del Metodo RefreshDGVAlumnos
	private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	}
private: System::Void btnAdd1Alumno_Click(System::Object^  sender, System::EventArgs^  e) {
	BuscarAlumnosForm^ psForm = gcnew BuscarAlumnosForm(this);
	psForm->ShowDialog();

}
public: System::Void AddAlumnoToDGV(Alumno^a){
	String^ sexo_String = gcnew String(a->sexo, 1);
	dgvAlumnos->Rows->Add(gcnew array<String^>{
		"" + a->id,
			a->dni,
			a->nombre,
			a->apellido_Pa,
			a->apellido_Ma,
			a->fechaNacimiento,
			sexo_String,
			a->telefono,
			a->direccion,
			a->fechaIngreso,
			a->codigo,
			"" + a->apoderado->id});
}

private: System::Void combNivel_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void btnMatricular_Click(System::Object^  sender, System::EventArgs^  e) {
	int idGrado = Int32::Parse(txtGrado->Text);
	int añoAcademico = Int32::Parse(txtAño->Text);
	String^ nivel = combNivel->Text; //Primaria o Secundaria
	char idSeccion = txtSeccion->Text[0];
	Grado^ g = gcnew Grado();
	g->id = idGrado;
	g->año_academico = añoAcademico;
	g->nivel = nivel;

	for (int i = 0; i < dgvAlumnos->Rows->Count - 1; i++){
		int idAlumno = Int32::Parse(dgvAlumnos->Rows[i]->Cells[0]->Value->ToString());
		SICOLManager::AddAlumnoBySeccion(g, idSeccion, idAlumno);
		MessageBox::Show("Alumno con id: " + idAlumno + " ha sido matriculado satisfactoriamente");
	}//Fin del For	

}//Fin del Metodo Matricular
private: System::Void btnDeleteAlumno_Click(System::Object^  sender, System::EventArgs^  e) {
	if (dgvAlumnos->CurrentCell != nullptr &&
		dgvAlumnos->CurrentCell->Value != nullptr &&
		dgvAlumnos->CurrentCell->Value->ToString() != "") {

		Int32 rowToDelete = dgvAlumnos->Rows->GetFirstRow(
			DataGridViewElementStates::Selected);
		if (rowToDelete > -1)
		{
			this->dgvAlumnos->Rows->RemoveAt(rowToDelete);
		}

	}
}
};
}
