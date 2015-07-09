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
	/// Resumen de MatriculaForm
	/// </summary>
	public ref class MatriculaForm : public System::Windows::Forms::Form
	{
	public:
		MatriculaForm(void)
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
	private: System::Windows::Forms::TextBox^  txNivel;
	private: System::Windows::Forms::TextBox^  txtSeccion;
	private: System::Windows::Forms::Button^  btnAdd1Alumno;
	private: System::Windows::Forms::Button^  btnAddListaAlumnos;
	private: System::Windows::Forms::DataGridView^  dgvMatricula;


	private: System::Windows::Forms::DataGridViewTextBoxColumn^  id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  nombreAlumno;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ApPaterno;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  sexoAlumno;






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
			this->txNivel = (gcnew System::Windows::Forms::TextBox());
			this->txtSeccion = (gcnew System::Windows::Forms::TextBox());
			this->btnAdd1Alumno = (gcnew System::Windows::Forms::Button());
			this->btnAddListaAlumnos = (gcnew System::Windows::Forms::Button());
			this->dgvMatricula = (gcnew System::Windows::Forms::DataGridView());
			this->id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->nombreAlumno = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ApPaterno = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->sexoAlumno = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMatricula))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(53, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(36, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Grado";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(53, 60);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(26, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Año";
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
			this->label4->Location = System::Drawing::Point(53, 120);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(46, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Seccion";
			// 
			// txtGrado
			// 
			this->txtGrado->Location = System::Drawing::Point(125, 28);
			this->txtGrado->Name = L"txtGrado";
			this->txtGrado->Size = System::Drawing::Size(100, 20);
			this->txtGrado->TabIndex = 4;
			// 
			// txtAño
			// 
			this->txtAño->Location = System::Drawing::Point(125, 60);
			this->txtAño->Name = L"txtAño";
			this->txtAño->Size = System::Drawing::Size(100, 20);
			this->txtAño->TabIndex = 5;
			// 
			// txNivel
			// 
			this->txNivel->Location = System::Drawing::Point(125, 90);
			this->txNivel->Name = L"txNivel";
			this->txNivel->Size = System::Drawing::Size(100, 20);
			this->txNivel->TabIndex = 6;
			// 
			// txtSeccion
			// 
			this->txtSeccion->Location = System::Drawing::Point(125, 120);
			this->txtSeccion->Name = L"txtSeccion";
			this->txtSeccion->Size = System::Drawing::Size(100, 20);
			this->txtSeccion->TabIndex = 7;
			// 
			// btnAdd1Alumno
			// 
			this->btnAdd1Alumno->Location = System::Drawing::Point(508, 85);
			this->btnAdd1Alumno->Name = L"btnAdd1Alumno";
			this->btnAdd1Alumno->Size = System::Drawing::Size(69, 48);
			this->btnAdd1Alumno->TabIndex = 8;
			this->btnAdd1Alumno->Text = L"Agregar 1 Alumno";
			this->btnAdd1Alumno->UseVisualStyleBackColor = true;
			// 
			// btnAddListaAlumnos
			// 
			this->btnAddListaAlumnos->Location = System::Drawing::Point(320, 368);
			this->btnAddListaAlumnos->Name = L"btnAddListaAlumnos";
			this->btnAddListaAlumnos->Size = System::Drawing::Size(75, 23);
			this->btnAddListaAlumnos->TabIndex = 9;
			this->btnAddListaAlumnos->Text = L"Matricular";
			this->btnAddListaAlumnos->UseVisualStyleBackColor = true;
			// 
			// dgvMatricula
			// 
			this->dgvMatricula->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvMatricula->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->id, this->nombreAlumno,
					this->ApPaterno, this->sexoAlumno
			});
			this->dgvMatricula->Location = System::Drawing::Point(81, 184);
			this->dgvMatricula->Name = L"dgvMatricula";
			this->dgvMatricula->Size = System::Drawing::Size(443, 143);
			this->dgvMatricula->TabIndex = 10;
			this->dgvMatricula->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MatriculaForm::dataGridView1_CellContentClick);
			// 
			// id
			// 
			this->id->HeaderText = L"Codigo";
			this->id->Name = L"id";
			this->id->Width = 80;
			// 
			// nombreAlumno
			// 
			this->nombreAlumno->HeaderText = L"Nombre";
			this->nombreAlumno->Name = L"nombreAlumno";
			this->nombreAlumno->Width = 120;
			// 
			// ApPaterno
			// 
			this->ApPaterno->HeaderText = L"Apellido";
			this->ApPaterno->Name = L"ApPaterno";
			this->ApPaterno->Width = 140;
			// 
			// sexoAlumno
			// 
			this->sexoAlumno->HeaderText = L"Sexo";
			this->sexoAlumno->Name = L"sexoAlumno";
			this->sexoAlumno->Width = 60;
			// 
			// MatriculaForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(662, 418);
			this->Controls->Add(this->dgvMatricula);
			this->Controls->Add(this->btnAddListaAlumnos);
			this->Controls->Add(this->btnAdd1Alumno);
			this->Controls->Add(this->txtSeccion);
			this->Controls->Add(this->txNivel);
			this->Controls->Add(this->txtAño);
			this->Controls->Add(this->txtGrado);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MatriculaForm";
			this->Text = L"MatriculaForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMatricula))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	}
};
}
