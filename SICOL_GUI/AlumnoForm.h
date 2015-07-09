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
	/// Resumen de AlumnoForm
	/// </summary>
	public ref class AlumnoForm : public System::Windows::Forms::Form
	{
	public:
		AlumnoForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		~AlumnoForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  txtApPaterno;
	protected:
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  txtQueryCodigo;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  btnQueryAlumnos;
	private: System::Windows::Forms::Button^  btnAddAlumno;
	private: System::Windows::Forms::DataGridView^  dgvAlumnos;











	private: System::Windows::Forms::TextBox^  txtNombre;
	private: System::Windows::Forms::TextBox^  txtDni;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  lbldni;

	private: System::Windows::Forms::Label^  label5;

	private: System::Windows::Forms::TextBox^  txtApMaterno;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  txtIdApoderado;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  txtCodigoAlumno;

	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  txtDireccion;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  txtTelefono;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  txtQueryDNI;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Button^  btnQueryCodigo;
	private: System::Windows::Forms::Button^  btnQueryDNI;
	private: System::Windows::Forms::DateTimePicker^  dtpNacimiento;
	private: System::Windows::Forms::RadioButton^  rbtnFemenino;
	private: System::Windows::Forms::RadioButton^  rbtnMasculino;











	private: System::Windows::Forms::Button^  btnDelete;
	private: System::Windows::Forms::DateTimePicker^  dtpIngreso;
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
	private: System::Windows::Forms::Button^  btnUpdateAlumno;













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
			this->txtApPaterno = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtQueryCodigo = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btnQueryAlumnos = (gcnew System::Windows::Forms::Button());
			this->btnAddAlumno = (gcnew System::Windows::Forms::Button());
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
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->txtDni = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lbldni = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtApMaterno = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtIdApoderado = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtCodigoAlumno = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txtDireccion = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtTelefono = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->txtQueryDNI = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->btnQueryCodigo = (gcnew System::Windows::Forms::Button());
			this->btnQueryDNI = (gcnew System::Windows::Forms::Button());
			this->dtpNacimiento = (gcnew System::Windows::Forms::DateTimePicker());
			this->rbtnFemenino = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnMasculino = (gcnew System::Windows::Forms::RadioButton());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->dtpIngreso = (gcnew System::Windows::Forms::DateTimePicker());
			this->btnUpdateAlumno = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvAlumnos))->BeginInit();
			this->SuspendLayout();
			// 
			// txtApPaterno
			// 
			this->txtApPaterno->Location = System::Drawing::Point(177, 76);
			this->txtApPaterno->Name = L"txtApPaterno";
			this->txtApPaterno->Size = System::Drawing::Size(100, 20);
			this->txtApPaterno->TabIndex = 26;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(45, 76);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(84, 13);
			this->label4->TabIndex = 25;
			this->label4->Text = L"Apellido Paterno";
			// 
			// txtQueryCodigo
			// 
			this->txtQueryCodigo->Location = System::Drawing::Point(577, 221);
			this->txtQueryCodigo->Name = L"txtQueryCodigo";
			this->txtQueryCodigo->Size = System::Drawing::Size(100, 20);
			this->txtQueryCodigo->TabIndex = 24;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(413, 221);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(158, 13);
			this->label3->TabIndex = 23;
			this->label3->Text = L"Consultar por Codigo de Alumno";
			// 
			// btnQueryAlumnos
			// 
			this->btnQueryAlumnos->Location = System::Drawing::Point(48, 312);
			this->btnQueryAlumnos->Name = L"btnQueryAlumnos";
			this->btnQueryAlumnos->Size = System::Drawing::Size(113, 23);
			this->btnQueryAlumnos->TabIndex = 21;
			this->btnQueryAlumnos->Text = L"Consultar Alumnos";
			this->btnQueryAlumnos->UseVisualStyleBackColor = true;
			// 
			// btnAddAlumno
			// 
			this->btnAddAlumno->Location = System::Drawing::Point(416, 108);
			this->btnAddAlumno->Name = L"btnAddAlumno";
			this->btnAddAlumno->Size = System::Drawing::Size(100, 23);
			this->btnAddAlumno->TabIndex = 20;
			this->btnAddAlumno->Text = L"Agregar Alumno";
			this->btnAddAlumno->UseVisualStyleBackColor = true;
			this->btnAddAlumno->Click += gcnew System::EventHandler(this, &AlumnoForm::btnAddAlumno_Click);
			// 
			// dgvAlumnos
			// 
			this->dgvAlumnos->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvAlumnos->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(12) {
				this->id, this->dni,
					this->nombre, this->Apellido_Pa, this->Apellido_Ma, this->nacimiento, this->sexo, this->telefono, this->direccion, this->ingreso,
					this->codigo, this->apoderado
			});
			this->dgvAlumnos->Location = System::Drawing::Point(48, 341);
			this->dgvAlumnos->Name = L"dgvAlumnos";
			this->dgvAlumnos->Size = System::Drawing::Size(753, 228);
			this->dgvAlumnos->TabIndex = 18;
			this->dgvAlumnos->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &AlumnoForm::dgvAlumnos_CellContentClick);
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
			// txtNombre
			// 
			this->txtNombre->Location = System::Drawing::Point(177, 44);
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(100, 20);
			this->txtNombre->TabIndex = 17;
			// 
			// txtDni
			// 
			this->txtDni->Location = System::Drawing::Point(177, 15);
			this->txtDni->Name = L"txtDni";
			this->txtDni->Size = System::Drawing::Size(100, 20);
			this->txtDni->TabIndex = 16;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(45, 47);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(99, 13);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Nombre del Alumno";
			// 
			// lbldni
			// 
			this->lbldni->AutoSize = true;
			this->lbldni->Location = System::Drawing::Point(45, 22);
			this->lbldni->Name = L"lbldni";
			this->lbldni->Size = System::Drawing::Size(26, 13);
			this->lbldni->TabIndex = 14;
			this->lbldni->Text = L"DNI";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(45, 169);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(31, 13);
			this->label5->TabIndex = 31;
			this->label5->Text = L"Sexo";
			// 
			// txtApMaterno
			// 
			this->txtApMaterno->Location = System::Drawing::Point(177, 108);
			this->txtApMaterno->Name = L"txtApMaterno";
			this->txtApMaterno->Size = System::Drawing::Size(100, 20);
			this->txtApMaterno->TabIndex = 29;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(45, 137);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(108, 13);
			this->label6->TabIndex = 28;
			this->label6->Text = L"Fecha de Nacimiento";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(45, 108);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(86, 13);
			this->label7->TabIndex = 27;
			this->label7->Text = L"Apellido Materno";
			// 
			// txtIdApoderado
			// 
			this->txtIdApoderado->Location = System::Drawing::Point(531, 69);
			this->txtIdApoderado->Name = L"txtIdApoderado";
			this->txtIdApoderado->Size = System::Drawing::Size(100, 20);
			this->txtIdApoderado->TabIndex = 38;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(413, 69);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(59, 13);
			this->label8->TabIndex = 37;
			this->label8->Text = L"Apoderado";
			// 
			// txtCodigoAlumno
			// 
			this->txtCodigoAlumno->Location = System::Drawing::Point(531, 37);
			this->txtCodigoAlumno->Name = L"txtCodigoAlumno";
			this->txtCodigoAlumno->Size = System::Drawing::Size(100, 20);
			this->txtCodigoAlumno->TabIndex = 36;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(413, 40);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(40, 13);
			this->label9->TabIndex = 34;
			this->label9->Text = L"Codigo";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(413, 15);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(90, 13);
			this->label10->TabIndex = 33;
			this->label10->Text = L"Fecha de Ingreso";
			// 
			// txtDireccion
			// 
			this->txtDireccion->Location = System::Drawing::Point(177, 236);
			this->txtDireccion->Name = L"txtDireccion";
			this->txtDireccion->Size = System::Drawing::Size(100, 20);
			this->txtDireccion->TabIndex = 42;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(45, 236);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(52, 13);
			this->label1->TabIndex = 41;
			this->label1->Text = L"Dirección";
			// 
			// txtTelefono
			// 
			this->txtTelefono->Location = System::Drawing::Point(177, 204);
			this->txtTelefono->Name = L"txtTelefono";
			this->txtTelefono->Size = System::Drawing::Size(100, 20);
			this->txtTelefono->TabIndex = 40;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(45, 204);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(104, 13);
			this->label11->TabIndex = 39;
			this->label11->Text = L"Numero de Telefono";
			// 
			// txtQueryDNI
			// 
			this->txtQueryDNI->Location = System::Drawing::Point(577, 256);
			this->txtQueryDNI->Name = L"txtQueryDNI";
			this->txtQueryDNI->Size = System::Drawing::Size(100, 20);
			this->txtQueryDNI->TabIndex = 44;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(413, 256);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(144, 13);
			this->label12->TabIndex = 43;
			this->label12->Text = L"Consultar por DNI de Alumno";
			// 
			// btnQueryCodigo
			// 
			this->btnQueryCodigo->Location = System::Drawing::Point(696, 218);
			this->btnQueryCodigo->Name = L"btnQueryCodigo";
			this->btnQueryCodigo->Size = System::Drawing::Size(100, 23);
			this->btnQueryCodigo->TabIndex = 45;
			this->btnQueryCodigo->Text = L"Consultar";
			this->btnQueryCodigo->UseVisualStyleBackColor = true;
			this->btnQueryCodigo->Click += gcnew System::EventHandler(this, &AlumnoForm::btnQueryCodigo_Click);
			// 
			// btnQueryDNI
			// 
			this->btnQueryDNI->Location = System::Drawing::Point(696, 256);
			this->btnQueryDNI->Name = L"btnQueryDNI";
			this->btnQueryDNI->Size = System::Drawing::Size(100, 23);
			this->btnQueryDNI->TabIndex = 46;
			this->btnQueryDNI->Text = L"Consultar";
			this->btnQueryDNI->UseVisualStyleBackColor = true;
			// 
			// dtpNacimiento
			// 
			this->dtpNacimiento->Location = System::Drawing::Point(177, 137);
			this->dtpNacimiento->Name = L"dtpNacimiento";
			this->dtpNacimiento->Size = System::Drawing::Size(200, 20);
			this->dtpNacimiento->TabIndex = 47;
			// 
			// rbtnFemenino
			// 
			this->rbtnFemenino->AutoSize = true;
			this->rbtnFemenino->Location = System::Drawing::Point(265, 172);
			this->rbtnFemenino->Name = L"rbtnFemenino";
			this->rbtnFemenino->Size = System::Drawing::Size(71, 17);
			this->rbtnFemenino->TabIndex = 49;
			this->rbtnFemenino->TabStop = true;
			this->rbtnFemenino->Text = L"Femenino";
			this->rbtnFemenino->UseVisualStyleBackColor = true;
			// 
			// rbtnMasculino
			// 
			this->rbtnMasculino->AutoSize = true;
			this->rbtnMasculino->Location = System::Drawing::Point(177, 172);
			this->rbtnMasculino->Name = L"rbtnMasculino";
			this->rbtnMasculino->Size = System::Drawing::Size(73, 17);
			this->rbtnMasculino->TabIndex = 48;
			this->rbtnMasculino->TabStop = true;
			this->rbtnMasculino->Text = L"Masculino";
			this->rbtnMasculino->UseVisualStyleBackColor = true;
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(726, 312);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(75, 23);
			this->btnDelete->TabIndex = 50;
			this->btnDelete->Text = L"Eliminar";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &AlumnoForm::btnDelete_Click);
			// 
			// dtpIngreso
			// 
			this->dtpIngreso->Location = System::Drawing::Point(531, 9);
			this->dtpIngreso->Name = L"dtpIngreso";
			this->dtpIngreso->Size = System::Drawing::Size(200, 20);
			this->dtpIngreso->TabIndex = 51;
			// 
			// btnUpdateAlumno
			// 
			this->btnUpdateAlumno->Location = System::Drawing::Point(546, 108);
			this->btnUpdateAlumno->Name = L"btnUpdateAlumno";
			this->btnUpdateAlumno->Size = System::Drawing::Size(75, 23);
			this->btnUpdateAlumno->TabIndex = 52;
			this->btnUpdateAlumno->Text = L"Actualizar Alumno";
			this->btnUpdateAlumno->UseVisualStyleBackColor = true;
			this->btnUpdateAlumno->Click += gcnew System::EventHandler(this, &AlumnoForm::btnUpdateAlumno_Click);
			// 
			// AlumnoForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(827, 596);
			this->Controls->Add(this->btnUpdateAlumno);
			this->Controls->Add(this->dtpIngreso);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->rbtnFemenino);
			this->Controls->Add(this->rbtnMasculino);
			this->Controls->Add(this->dtpNacimiento);
			this->Controls->Add(this->btnQueryDNI);
			this->Controls->Add(this->btnQueryCodigo);
			this->Controls->Add(this->txtQueryDNI);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->txtDireccion);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtTelefono);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->txtIdApoderado);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->txtCodigoAlumno);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txtApMaterno);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txtApPaterno);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txtQueryCodigo);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->btnQueryAlumnos);
			this->Controls->Add(this->btnAddAlumno);
			this->Controls->Add(this->dgvAlumnos);
			this->Controls->Add(this->txtNombre);
			this->Controls->Add(this->txtDni);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->lbldni);
			this->Name = L"AlumnoForm";
			this->Text = L"AlumnoForm";
			this->Load += gcnew System::EventHandler(this, &AlumnoForm::AlumnoForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvAlumnos))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: void RefreshDGVAlumnos(){
		List<Alumno^>^ listAlumnos = SICOLManager::QueryAllAlumnos();
		dgvAlumnos->Rows->Clear();
		for (int i = 0; i < listAlumnos->Count; i++){
			dgvAlumnos->Rows->Add(gcnew array<String^>{
				"" + listAlumnos[i]->id,
					listAlumnos[i]->dni,
					listAlumnos[i]->nombre,
					listAlumnos[i]->apellido_Pa,
					listAlumnos[i]->apellido_Ma,
					listAlumnos[i]->fechaNacimiento,
					Convert::ToString(listAlumnos[i]->sexo),
					listAlumnos[i]->telefono,
					listAlumnos[i]->direccion,
					listAlumnos[i]->fechaIngreso,
					listAlumnos[i]->codigo,
				""+	listAlumnos[i]->apoderado->id});
		}//Fin del For
	}//Fin del Metodo RefreshDGVStaff
	public:	int idAlumno;
	private: System::Void btnAddAlumno_Click(System::Object^  sender, System::EventArgs^  e) { //Add
		String^ dni = txtDni->Text;
		String^ nombre = txtNombre->Text;
		String^ ApPaterno = txtApPaterno->Text;
		String^ ApMaterno = txtApMaterno->Text;
		DateTime^ fechaNacimiento_Date = dtpNacimiento->Value;
		String^ fechaNacimiento_String = fechaNacimiento_Date->ToString("dd/mm/yy");
		char sexo;
		if (rbtnMasculino->Checked) sexo = 'M';
		if (rbtnFemenino->Checked) sexo = 'F';
		String^ telefono = txtTelefono->Text;
		String^ direccion = txtDireccion->Text;
		DateTime^ fechaIngreso_Date = dtpIngreso->Value;
		String^ fechaIngreso_String = fechaIngreso_Date->ToString("dd/mm/yy");
		String^ CodigoAlumno = txtCodigoAlumno->Text;
		String^ IdApoderado = txtIdApoderado->Text;

		Alumno^ a = gcnew Alumno();
		a->dni = dni;
		a->nombre = nombre;
		a->apellido_Pa = ApPaterno;
		a->apellido_Ma = ApMaterno;
		a->fechaNacimiento = fechaNacimiento_String;
		a->sexo = sexo;
		a->telefono = telefono;
		a->direccion = direccion;
		a->fechaIngreso = fechaIngreso_String;
		a->codigo = CodigoAlumno;
		a->apoderado->id = Int32::Parse(IdApoderado);
		SICOLManager::AddAlumno(a);
		RefreshDGVAlumnos();
	}//Fin Metodo ADD
private: System::Void btnQueryCodigo_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void AlumnoForm_Load(System::Object^  sender, System::EventArgs^  e) {
	RefreshDGVAlumnos();
}
private: System::Void btnUpdateAlumno_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ dni = txtDni->Text;
	String^ nombre = txtNombre->Text;
	String^ ApPaterno = txtApPaterno->Text;
	String^ ApMaterno = txtApMaterno->Text;
	DateTime^ fechaNacimiento_Date = dtpNacimiento->Value;
	String^ fechaNacimiento_String = fechaNacimiento_Date->ToString("dd/mm/yy");
	char sexo;
	if (rbtnMasculino->Checked) sexo = 'M';
	if (rbtnFemenino->Checked) sexo = 'F';
	String^ telefono = txtTelefono->Text;
	String^ direccion = txtDireccion->Text;
	DateTime^ fechaIngreso_Date = dtpIngreso->Value;
	String^ fechaIngreso_String = fechaIngreso_Date->ToString("dd/mm/yy");
	String^ CodigoAlumno = txtCodigoAlumno->Text;
	String^ IdApoderado = txtIdApoderado->Text;

	Alumno^ a = gcnew Alumno();
	a = SICOLManager::QueryAlumnoById(idAlumno);
	a->dni = dni;
	a->nombre = nombre;
	a->apellido_Pa = ApPaterno;
	a->apellido_Ma = ApMaterno;
	a->fechaNacimiento = fechaNacimiento_String;
	a->sexo = sexo;
	a->telefono = telefono;
	a->direccion = direccion;
	a->fechaIngreso = fechaIngreso_String;
	a->codigo = CodigoAlumno;
	a->apoderado->id = Int32::Parse(IdApoderado);
	SICOLManager::UpdateAlumno(a);
	RefreshDGVAlumnos();
}
private: System::Void dgvAlumnos_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e);
private: System::Void btnDelete_Click(System::Object^  sender, System::EventArgs^  e) {
	SICOLManager::DeleteAlumno(idAlumno);
	RefreshDGVAlumnos();
}
};
}
