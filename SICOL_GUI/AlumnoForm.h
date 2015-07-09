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
	private: System::Windows::Forms::TextBox^  txtNombre;
	private: System::Windows::Forms::TextBox^  txtDni;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  lbldni;
	private: System::Windows::Forms::TextBox^  txtSexo;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  txtFechaNacimiento;
	private: System::Windows::Forms::TextBox^  txtApMaterno;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  txtIdApoderado;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  txtCodigoAlumno;
	private: System::Windows::Forms::TextBox^  txtFechaIngreso;
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
			this->txtSexo = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtFechaNacimiento = (gcnew System::Windows::Forms::TextBox());
			this->txtApMaterno = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtIdApoderado = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtCodigoAlumno = (gcnew System::Windows::Forms::TextBox());
			this->txtFechaIngreso = (gcnew System::Windows::Forms::TextBox());
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvAlumnos))->BeginInit();
			this->SuspendLayout();
			// 
			// txtApPaterno
			// 
			this->txtApPaterno->Location = System::Drawing::Point(220, 76);
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
			this->txtQueryCodigo->Location = System::Drawing::Point(523, 176);
			this->txtQueryCodigo->Name = L"txtQueryCodigo";
			this->txtQueryCodigo->Size = System::Drawing::Size(100, 20);
			this->txtQueryCodigo->TabIndex = 24;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(359, 176);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(158, 13);
			this->label3->TabIndex = 23;
			this->label3->Text = L"Consultar por Codigo de Alumno";
			// 
			// btnQueryAlumnos
			// 
			this->btnQueryAlumnos->Location = System::Drawing::Point(416, 276);
			this->btnQueryAlumnos->Name = L"btnQueryAlumnos";
			this->btnQueryAlumnos->Size = System::Drawing::Size(113, 23);
			this->btnQueryAlumnos->TabIndex = 21;
			this->btnQueryAlumnos->Text = L"Consultar Alumnos";
			this->btnQueryAlumnos->UseVisualStyleBackColor = true;
			// 
			// btnAddAlumno
			// 
			this->btnAddAlumno->Location = System::Drawing::Point(443, 108);
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
			this->dgvAlumnos->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(11) {
				this->dni, this->nombre,
					this->Apellido_Pa, this->Apellido_Ma, this->nacimiento, this->sexo, this->telefono, this->direccion, this->ingreso, this->codigo,
					this->apoderado
			});
			this->dgvAlumnos->Location = System::Drawing::Point(48, 316);
			this->dgvAlumnos->Name = L"dgvAlumnos";
			this->dgvAlumnos->Size = System::Drawing::Size(845, 228);
			this->dgvAlumnos->TabIndex = 18;
			// 
			// dni
			// 
			this->dni->HeaderText = L"DNI";
			this->dni->Name = L"dni";
			this->dni->Width = 50;
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
			this->nacimiento->Width = 50;
			// 
			// sexo
			// 
			this->sexo->HeaderText = L"Sexo";
			this->sexo->Name = L"sexo";
			this->sexo->Width = 50;
			// 
			// telefono
			// 
			this->telefono->HeaderText = L"Numero de Telefono";
			this->telefono->Name = L"telefono";
			this->telefono->Width = 50;
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
			this->ingreso->Width = 50;
			// 
			// codigo
			// 
			this->codigo->HeaderText = L"Codigo";
			this->codigo->Name = L"codigo";
			this->codigo->Width = 50;
			// 
			// apoderado
			// 
			this->apoderado->HeaderText = L"Apoderado";
			this->apoderado->Name = L"apoderado";
			// 
			// txtNombre
			// 
			this->txtNombre->Location = System::Drawing::Point(220, 44);
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(100, 20);
			this->txtNombre->TabIndex = 17;
			// 
			// txtDni
			// 
			this->txtDni->Location = System::Drawing::Point(220, 15);
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
			// txtSexo
			// 
			this->txtSexo->Location = System::Drawing::Point(220, 169);
			this->txtSexo->Name = L"txtSexo";
			this->txtSexo->Size = System::Drawing::Size(100, 20);
			this->txtSexo->TabIndex = 32;
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
			// txtFechaNacimiento
			// 
			this->txtFechaNacimiento->Location = System::Drawing::Point(220, 137);
			this->txtFechaNacimiento->Name = L"txtFechaNacimiento";
			this->txtFechaNacimiento->Size = System::Drawing::Size(100, 20);
			this->txtFechaNacimiento->TabIndex = 30;
			// 
			// txtApMaterno
			// 
			this->txtApMaterno->Location = System::Drawing::Point(220, 108);
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
			this->txtIdApoderado->Location = System::Drawing::Point(534, 72);
			this->txtIdApoderado->Name = L"txtIdApoderado";
			this->txtIdApoderado->Size = System::Drawing::Size(100, 20);
			this->txtIdApoderado->TabIndex = 38;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(359, 72);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(59, 13);
			this->label8->TabIndex = 37;
			this->label8->Text = L"Apoderado";
			// 
			// txtCodigoAlumno
			// 
			this->txtCodigoAlumno->Location = System::Drawing::Point(534, 40);
			this->txtCodigoAlumno->Name = L"txtCodigoAlumno";
			this->txtCodigoAlumno->Size = System::Drawing::Size(100, 20);
			this->txtCodigoAlumno->TabIndex = 36;
			// 
			// txtFechaIngreso
			// 
			this->txtFechaIngreso->Location = System::Drawing::Point(534, 11);
			this->txtFechaIngreso->Name = L"txtFechaIngreso";
			this->txtFechaIngreso->Size = System::Drawing::Size(100, 20);
			this->txtFechaIngreso->TabIndex = 35;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(359, 43);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(40, 13);
			this->label9->TabIndex = 34;
			this->label9->Text = L"Codigo";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(359, 18);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(90, 13);
			this->label10->TabIndex = 33;
			this->label10->Text = L"Fecha de Ingreso";
			// 
			// txtDireccion
			// 
			this->txtDireccion->Location = System::Drawing::Point(220, 236);
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
			this->txtTelefono->Location = System::Drawing::Point(220, 204);
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
			this->txtQueryDNI->Location = System::Drawing::Point(523, 222);
			this->txtQueryDNI->Name = L"txtQueryDNI";
			this->txtQueryDNI->Size = System::Drawing::Size(100, 20);
			this->txtQueryDNI->TabIndex = 44;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(359, 222);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(144, 13);
			this->label12->TabIndex = 43;
			this->label12->Text = L"Consultar por DNI de Alumno";
			// 
			// btnQueryCodigo
			// 
			this->btnQueryCodigo->Location = System::Drawing::Point(642, 173);
			this->btnQueryCodigo->Name = L"btnQueryCodigo";
			this->btnQueryCodigo->Size = System::Drawing::Size(100, 23);
			this->btnQueryCodigo->TabIndex = 45;
			this->btnQueryCodigo->Text = L"Consultar";
			this->btnQueryCodigo->UseVisualStyleBackColor = true;
			this->btnQueryCodigo->Click += gcnew System::EventHandler(this, &AlumnoForm::btnQueryCodigo_Click);
			// 
			// btnQueryDNI
			// 
			this->btnQueryDNI->Location = System::Drawing::Point(642, 222);
			this->btnQueryDNI->Name = L"btnQueryDNI";
			this->btnQueryDNI->Size = System::Drawing::Size(100, 23);
			this->btnQueryDNI->TabIndex = 46;
			this->btnQueryDNI->Text = L"Consultar";
			this->btnQueryDNI->UseVisualStyleBackColor = true;
			// 
			// AlumnoForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(938, 605);
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
			this->Controls->Add(this->txtFechaIngreso);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->txtSexo);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txtFechaNacimiento);
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
		List<Alumno^>^ productList = SICOLManager::QueryAllAlumnos();
				//lstProducts->Items->Clear();
				/*dgvAlumnos->Rows->Clear();
				for (int i = 0; i < productList->Count; i++){
					dgvAlumnos->Rows->Add(gcnew array<String^>{
						"" + productList[i]->GetId(),
							productList[i]->GetName(),
							"" + productList[i]->GetPrice(),
							"" + productList[i]->GetStock()});
				}*/
	}

	private: System::Void btnAddAlumno_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ dni = txtDni->Text;
		String^ nombre = txtNombre->Text;
		String^ ApPaterno = txtApPaterno->Text;
		String^ ApMaterno = txtApMaterno->Text;
		String^ fechaNacimiento = txtFechaNacimiento->Text;
		String^ sexo = txtSexo->Text;
		String^ telefono = txtTelefono->Text;
		String^ direccion = txtDireccion->Text;
		String^ fechaIngreso = txtFechaIngreso->Text;
		String^ CodigoAlumno = txtCodigoAlumno->Text;
		String^ IdApoderado = txtIdApoderado->Text;

		Alumno^ a = gcnew Alumno();
		a->dni = dni;
		a->nombre = nombre;
		a->apellido_Pa = ApPaterno;
		a->apellido_Ma = ApMaterno;
		a->fechaNacimiento = fechaNacimiento;
		a->sexo = sexo;
		a->telefono = Int32::Parse(telefono);
		a->direccion = direccion;
		a->fechaIngreso = fechaIngreso;
		a->codigo = Int32::Parse(CodigoAlumno);
		a->apoderado->id = Int32::Parse(IdApoderado);

		SICOLManager::AddAlumno(a);
		//RefreshDGVProducts();
	}//Fin Metodo ADD
private: System::Void btnQueryCodigo_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void AlumnoForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}
