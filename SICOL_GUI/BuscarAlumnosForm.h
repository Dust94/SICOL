#pragma once

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

	/// <summary>
	/// Summary for BuscarAlumnosForm
	/// </summary>
	public ref class BuscarAlumnosForm : public System::Windows::Forms::Form
	{
		Form^ matriculaForm; //Creo un Form para acceder a "MatriculaForm.h". 
	public:
		BuscarAlumnosForm(Form^ matriculaForm)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->matriculaForm = matriculaForm;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~BuscarAlumnosForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  txtCodigo;
	private: System::Windows::Forms::Button^  QueryAlumno;
	protected:


	private: System::Windows::Forms::TextBox^  txtDni;

	private: System::Windows::Forms::Label^  label2;
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
	private: System::Windows::Forms::Button^  btnQueryAllAlumnos;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtCodigo = (gcnew System::Windows::Forms::TextBox());
			this->QueryAlumno = (gcnew System::Windows::Forms::Button());
			this->txtDni = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
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
			this->btnQueryAllAlumnos = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvAlumnos))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(167, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(162, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Busqueda de Alumno por Codigo";
			// 
			// txtCodigo
			// 
			this->txtCodigo->Location = System::Drawing::Point(345, 24);
			this->txtCodigo->Name = L"txtCodigo";
			this->txtCodigo->Size = System::Drawing::Size(100, 20);
			this->txtCodigo->TabIndex = 1;
			// 
			// QueryAlumno
			// 
			this->QueryAlumno->Location = System::Drawing::Point(280, 84);
			this->QueryAlumno->Name = L"QueryAlumno";
			this->QueryAlumno->Size = System::Drawing::Size(75, 23);
			this->QueryAlumno->TabIndex = 2;
			this->QueryAlumno->Text = L"Buscar";
			this->QueryAlumno->UseVisualStyleBackColor = true;
			this->QueryAlumno->Click += gcnew System::EventHandler(this, &BuscarAlumnosForm::QueryAlumno_Click);
			// 
			// txtDni
			// 
			this->txtDni->Location = System::Drawing::Point(345, 58);
			this->txtDni->Name = L"txtDni";
			this->txtDni->Size = System::Drawing::Size(100, 20);
			this->txtDni->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(167, 61);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(162, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Busqueda de Alumno por su DNI";
			// 
			// dgvAlumnos
			// 
			this->dgvAlumnos->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvAlumnos->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(12) {
				this->id, this->dni,
					this->nombre, this->Apellido_Pa, this->Apellido_Ma, this->nacimiento, this->sexo, this->telefono, this->direccion, this->ingreso,
					this->codigo, this->apoderado
			});
			this->dgvAlumnos->Location = System::Drawing::Point(26, 164);
			this->dgvAlumnos->Name = L"dgvAlumnos";
			this->dgvAlumnos->Size = System::Drawing::Size(611, 228);
			this->dgvAlumnos->TabIndex = 19;
			this->dgvAlumnos->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &BuscarAlumnosForm::dgvAlumnos_CellContentClick);
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
			// btnQueryAllAlumnos
			// 
			this->btnQueryAllAlumnos->Location = System::Drawing::Point(26, 118);
			this->btnQueryAllAlumnos->Name = L"btnQueryAllAlumnos";
			this->btnQueryAllAlumnos->Size = System::Drawing::Size(90, 40);
			this->btnQueryAllAlumnos->TabIndex = 20;
			this->btnQueryAllAlumnos->Text = L"Mostrar Todos los Alumnos";
			this->btnQueryAllAlumnos->UseVisualStyleBackColor = true;
			this->btnQueryAllAlumnos->Click += gcnew System::EventHandler(this, &BuscarAlumnosForm::btnQueryAllAlumnos_Click);
			// 
			// BuscarAlumnosForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(649, 404);
			this->Controls->Add(this->btnQueryAllAlumnos);
			this->Controls->Add(this->dgvAlumnos);
			this->Controls->Add(this->txtDni);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->QueryAlumno);
			this->Controls->Add(this->txtCodigo);
			this->Controls->Add(this->label1);
			this->Name = L"BuscarAlumnosForm";
			this->Text = L"Busqueda de Alumnos";
			this->Load += gcnew System::EventHandler(this, &BuscarAlumnosForm::BuscarAlumnosForm_Load);
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
public: void RefreshDGV_1Alumno(Alumno^ a){
	dgvAlumnos->Rows->Clear();
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
}//Fin del Metodo RefreshDGV_1Alumno
public:	Alumno^ a = gcnew Alumno();
		int idAlumno;

public: bool ValidacionQuery(){
	bool dni = String::Equals(txtDni->Text, ""); //Vacio = true. //Llenado = false
	bool codigo = String::Equals(txtCodigo->Text, ""); //Vacio = true. //Llenado = false
	if (!codigo && !dni){
		MessageBox::Show("Sólo debe ingresar un criterio de búsqueda");
		return false;
	}
	if (!codigo && dni){ //Si solo se ha llenado el campo de codigo
		String^ codigo = txtCodigo->Text; //Codigo Ingresado por Usuario
		a = SICOLManager::QueryAlumnoByCodigo(codigo);
		if (a != nullptr) return true; //Se ha encontrado el usuario
		else {
			MessageBox::Show("El Codigo de Alumno es Incorrecto");
			return false;
		}
	}
	if (codigo && !dni){ //Si solo se ha llenado el campo de dni
		String^ dni = txtDni->Text; //Codigo PUCP Ingresado por Usuario
		a = SICOLManager::QueryAlumnoByDni(dni);
		if (a != nullptr) return true; //Se ha encontrado el usuario
		else {
			MessageBox::Show("DNI Incorrecto");
			return false;
		}
	}
	if (codigo && dni){ //Si todos los campos estan vacios
		MessageBox::Show("Ingrese algun Campo de Busqueda");
		return false;
	}
}// Fin de Metodo ValidacionQuery

	private: System::Void BuscarAlumnosForm_Load(System::Object^  sender, System::EventArgs^  e) {
		RefreshDGVAlumnos();
	}
private: System::Void QueryAlumno_Click(System::Object^  sender, System::EventArgs^  e) {
	if (ValidacionQuery()){
		RefreshDGV_1Alumno(a);
	}
	else MessageBox::Show("No se ha encontrado al Alumno");
}
private: System::Void dgvAlumnos_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e);
private: System::Void btnQueryAllAlumnos_Click(System::Object^  sender, System::EventArgs^  e) {
	RefreshDGVAlumnos();
}
}; //Fin de la Clase BuscarAlumnosForm
}//Fin del Namespace
