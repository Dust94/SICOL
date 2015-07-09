#pragma once
//prueba1
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
	/// Resumen de BuscarAlumnoForm
	/// </summary>
	public ref class BuscarAlumnoForm : public System::Windows::Forms::Form
	{
	public:
		BuscarAlumnoForm(void)
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
		~BuscarAlumnoForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  txtApPaterno;
	protected:
	private: System::Windows::Forms::TextBox^  txtCodigo;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::DataGridView^  dgvAlumnos;











	private: System::Windows::Forms::Button^  btnBuscar;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dni;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Apellido_Pa;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Apellido_Ma;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  nacimiento;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  sexo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  codigo;
	private: System::Windows::Forms::Button^  btnTodos;

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
			this->txtCodigo = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dgvAlumnos = (gcnew System::Windows::Forms::DataGridView());
			this->dni = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Apellido_Pa = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Apellido_Ma = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->nacimiento = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->sexo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->codigo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnBuscar = (gcnew System::Windows::Forms::Button());
			this->btnTodos = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvAlumnos))->BeginInit();
			this->SuspendLayout();
			// 
			// txtApPaterno
			// 
			this->txtApPaterno->Location = System::Drawing::Point(271, 88);
			this->txtApPaterno->Name = L"txtApPaterno";
			this->txtApPaterno->Size = System::Drawing::Size(100, 20);
			this->txtApPaterno->TabIndex = 9;
			// 
			// txtCodigo
			// 
			this->txtCodigo->Location = System::Drawing::Point(271, 56);
			this->txtCodigo->Name = L"txtCodigo";
			this->txtCodigo->Size = System::Drawing::Size(100, 20);
			this->txtCodigo->TabIndex = 8;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(199, 88);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Apellido";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(199, 56);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Codigo";
			// 
			// dgvAlumnos
			// 
			this->dgvAlumnos->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvAlumnos->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->dni, this->nombre,
					this->Apellido_Pa, this->Apellido_Ma, this->nacimiento, this->sexo, this->codigo
			});
			this->dgvAlumnos->Location = System::Drawing::Point(30, 178);
			this->dgvAlumnos->Name = L"dgvAlumnos";
			this->dgvAlumnos->Size = System::Drawing::Size(546, 176);
			this->dgvAlumnos->TabIndex = 19;
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
			// codigo
			// 
			this->codigo->HeaderText = L"Codigo";
			this->codigo->Name = L"codigo";
			this->codigo->Width = 50;
			// 
			// btnBuscar
			// 
			this->btnBuscar->Location = System::Drawing::Point(153, 131);
			this->btnBuscar->Name = L"btnBuscar";
			this->btnBuscar->Size = System::Drawing::Size(75, 23);
			this->btnBuscar->TabIndex = 20;
			this->btnBuscar->Text = L"Buscar";
			this->btnBuscar->UseVisualStyleBackColor = true;
			this->btnBuscar->Click += gcnew System::EventHandler(this, &BuscarAlumnoForm::btnBuscar_Click);
			// 
			// btnTodos
			// 
			this->btnTodos->Location = System::Drawing::Point(403, 131);
			this->btnTodos->Name = L"btnTodos";
			this->btnTodos->Size = System::Drawing::Size(115, 23);
			this->btnTodos->TabIndex = 21;
			this->btnTodos->Text = L"Buscar Todos";
			this->btnTodos->UseVisualStyleBackColor = true;
			this->btnTodos->Click += gcnew System::EventHandler(this, &BuscarAlumnoForm::btnTodos_Click);
			// 
			// BuscarAlumnoForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(618, 410);
			this->Controls->Add(this->btnTodos);
			this->Controls->Add(this->btnBuscar);
			this->Controls->Add(this->dgvAlumnos);
			this->Controls->Add(this->txtApPaterno);
			this->Controls->Add(this->txtCodigo);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"BuscarAlumnoForm";
			this->Text = L"BuscarAlumnoForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvAlumnos))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public: void RefreshDGVPAlumnos(){
				List<Alumno^>^ alumnos = SICOLManager::QueryAllAlumnos();
				dgvAlumnos->Rows->Clear();
				for (int i = 0; i < alumnos->Count; i++){
					dgvAlumnos->Rows->Add(gcnew array < String^ > {
						"" + alumnos[i]->dni,
							alumnos[i]->nombre,
							alumnos[i]->apellido_Pa,
							alumnos[i]->apellido_Ma,
							alumnos[i]->fechaNacimiento,
							alumnos[i]->sexo,
							"" + alumnos[i]->codigo});
				}
	}// Fin de Metodo RefreshDGVPAlumnos
	public: void RefreshDGVP1Alumno(Alumno^ alumno){
					dgvAlumnos->Rows->Clear();
						dgvAlumnos->Rows->Add(gcnew array < String^ > {
							"" + alumno->dni,
								alumno->nombre,
								alumno->apellido_Pa,
								alumno->apellido_Ma,
								alumno->fechaNacimiento,
								alumno->sexo,
								"" + alumno->codigo});
	}// Fin de Metodo RefreshDGVP1Alumno

	private: System::Void btnBuscar_Click(System::Object^  sender, System::EventArgs^  e) {
			String^ codigo = txtCodigo->Text;
			String^ ApPaterno = txtApPaterno->Text;
			int intcodigo = Int32::Parse(codigo);
			if (intcodigo != 0){
				Alumno^ a = SICOLManager::QueryAlumnoByCodigo(intcodigo);
				RefreshDGVP1Alumno(a);
			}			

	}
private: System::Void btnTodos_Click(System::Object^  sender, System::EventArgs^  e) {
	RefreshDGVPAlumnos();
}
};
}
