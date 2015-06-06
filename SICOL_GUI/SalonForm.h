#pragma once

namespace SICOL_GUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace System::Threading;
	using namespace SICOL_Library;
	using namespace SICOL_Controller;

	/// <summary>
	/// Summary for SalonForm
	/// </summary>
	public ref class SalonForm : public System::Windows::Forms::Form
	{
	public:
		SalonForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SalonForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::ComboBox^  combTipoSalon;
	private: System::Windows::Forms::ComboBox^  combTipoPizarra;






	private: System::Windows::Forms::TextBox^  txtNombre;
	private: System::Windows::Forms::TextBox^  txtCapacidad;
	private: System::Windows::Forms::TextBox^  txtPiso;

	private: System::Windows::Forms::TextBox^  txtEstado;
	private: System::Windows::Forms::Button^  btnAdd;
	private: System::Windows::Forms::Button^  btnUpdate;
	private: System::Windows::Forms::Button^  btnDelete;
	private: System::Windows::Forms::CheckBox^  cbProyector;
	private: System::Windows::Forms::CheckBox^  cbWifi;
	private: System::Windows::Forms::DataGridView^  dgvSalon;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  capacidad;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  tipo_salon;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  tipo_pizarra;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  piso;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  estado;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  proyector;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  wifi;
	private: System::Windows::Forms::Button^  btnQueryAll;




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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->combTipoSalon = (gcnew System::Windows::Forms::ComboBox());
			this->combTipoPizarra = (gcnew System::Windows::Forms::ComboBox());
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->txtCapacidad = (gcnew System::Windows::Forms::TextBox());
			this->txtPiso = (gcnew System::Windows::Forms::TextBox());
			this->txtEstado = (gcnew System::Windows::Forms::TextBox());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->cbProyector = (gcnew System::Windows::Forms::CheckBox());
			this->cbWifi = (gcnew System::Windows::Forms::CheckBox());
			this->dgvSalon = (gcnew System::Windows::Forms::DataGridView());
			this->nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->capacidad = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tipo_salon = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tipo_pizarra = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->piso = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->estado = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->proyector = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->wifi = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnQueryAll = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvSalon))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(50, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nombre";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(50, 67);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(141, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Capacidad Minima del Salon";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(50, 102);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(73, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Tipo de Salon";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(402, 71);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(81, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Estado del Aula";
			this->label4->Click += gcnew System::EventHandler(this, &SalonForm::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(402, 32);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(180, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Piso en el que se encuentra el Salon";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(50, 137);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(78, 13);
			this->label6->TabIndex = 3;
			this->label6->Text = L"Tipo de Pizarra";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(402, 146);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(55, 13);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Tiene Wifi";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(402, 105);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(135, 13);
			this->label8->TabIndex = 6;
			this->label8->Text = L"Tiene Proyector Multimedia";
			// 
			// combTipoSalon
			// 
			this->combTipoSalon->FormattingEnabled = true;
			this->combTipoSalon->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Aula", L"Laboratorio" });
			this->combTipoSalon->Location = System::Drawing::Point(223, 97);
			this->combTipoSalon->Name = L"combTipoSalon";
			this->combTipoSalon->Size = System::Drawing::Size(121, 21);
			this->combTipoSalon->TabIndex = 8;
			this->combTipoSalon->SelectedIndexChanged += gcnew System::EventHandler(this, &SalonForm::comboBox1_SelectedIndexChanged);
			// 
			// combTipoPizarra
			// 
			this->combTipoPizarra->FormattingEnabled = true;
			this->combTipoPizarra->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Acrilica", L"Para Tiza" });
			this->combTipoPizarra->Location = System::Drawing::Point(223, 138);
			this->combTipoPizarra->Name = L"combTipoPizarra";
			this->combTipoPizarra->Size = System::Drawing::Size(121, 21);
			this->combTipoPizarra->TabIndex = 9;
			// 
			// txtNombre
			// 
			this->txtNombre->Location = System::Drawing::Point(223, 25);
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(100, 20);
			this->txtNombre->TabIndex = 12;
			// 
			// txtCapacidad
			// 
			this->txtCapacidad->Location = System::Drawing::Point(223, 64);
			this->txtCapacidad->Name = L"txtCapacidad";
			this->txtCapacidad->Size = System::Drawing::Size(100, 20);
			this->txtCapacidad->TabIndex = 13;
			// 
			// txtPiso
			// 
			this->txtPiso->Location = System::Drawing::Point(617, 32);
			this->txtPiso->Name = L"txtPiso";
			this->txtPiso->Size = System::Drawing::Size(100, 20);
			this->txtPiso->TabIndex = 14;
			// 
			// txtEstado
			// 
			this->txtEstado->Location = System::Drawing::Point(617, 68);
			this->txtEstado->Name = L"txtEstado";
			this->txtEstado->Size = System::Drawing::Size(100, 20);
			this->txtEstado->TabIndex = 15;
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(269, 187);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(75, 23);
			this->btnAdd->TabIndex = 16;
			this->btnAdd->Text = L"Agregar";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &SalonForm::btnAdd_Click);
			// 
			// btnUpdate
			// 
			this->btnUpdate->Location = System::Drawing::Point(360, 187);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(75, 23);
			this->btnUpdate->TabIndex = 17;
			this->btnUpdate->Text = L"Actualizar";
			this->btnUpdate->UseVisualStyleBackColor = true;
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(462, 187);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(75, 23);
			this->btnDelete->TabIndex = 18;
			this->btnDelete->Text = L"Eliminar";
			this->btnDelete->UseVisualStyleBackColor = true;
			// 
			// cbProyector
			// 
			this->cbProyector->AutoSize = true;
			this->cbProyector->Location = System::Drawing::Point(617, 105);
			this->cbProyector->Name = L"cbProyector";
			this->cbProyector->Size = System::Drawing::Size(15, 14);
			this->cbProyector->TabIndex = 19;
			this->cbProyector->UseVisualStyleBackColor = true;
			// 
			// cbWifi
			// 
			this->cbWifi->AutoSize = true;
			this->cbWifi->Location = System::Drawing::Point(617, 146);
			this->cbWifi->Name = L"cbWifi";
			this->cbWifi->Size = System::Drawing::Size(15, 14);
			this->cbWifi->TabIndex = 20;
			this->cbWifi->UseVisualStyleBackColor = true;
			// 
			// dgvSalon
			// 
			this->dgvSalon->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvSalon->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->nombre, this->capacidad,
					this->tipo_salon, this->tipo_pizarra, this->piso, this->estado, this->proyector, this->wifi
			});
			this->dgvSalon->Location = System::Drawing::Point(107, 239);
			this->dgvSalon->Name = L"dgvSalon";
			this->dgvSalon->Size = System::Drawing::Size(568, 152);
			this->dgvSalon->TabIndex = 21;
			// 
			// nombre
			// 
			this->nombre->HeaderText = L"Nombre del Salon";
			this->nombre->Name = L"nombre";
			this->nombre->Width = 60;
			// 
			// capacidad
			// 
			this->capacidad->HeaderText = L"Capacidad Minima del Salon";
			this->capacidad->Name = L"capacidad";
			this->capacidad->Width = 80;
			// 
			// tipo_salon
			// 
			this->tipo_salon->HeaderText = L"Tipo de Salon";
			this->tipo_salon->Name = L"tipo_salon";
			this->tipo_salon->Width = 60;
			// 
			// tipo_pizarra
			// 
			this->tipo_pizarra->HeaderText = L"Tipo de Pizarra";
			this->tipo_pizarra->Name = L"tipo_pizarra";
			this->tipo_pizarra->Width = 60;
			// 
			// piso
			// 
			this->piso->HeaderText = L"Piso en el que se encuentra";
			this->piso->Name = L"piso";
			// 
			// estado
			// 
			this->estado->HeaderText = L"Estado";
			this->estado->Name = L"estado";
			this->estado->Width = 50;
			// 
			// proyector
			// 
			this->proyector->HeaderText = L"Tiene Proyector";
			this->proyector->Name = L"proyector";
			this->proyector->Width = 60;
			// 
			// wifi
			// 
			this->wifi->HeaderText = L"Tiene Wifi";
			this->wifi->Name = L"wifi";
			this->wifi->Width = 60;
			// 
			// btnQueryAll
			// 
			this->btnQueryAll->Location = System::Drawing::Point(107, 210);
			this->btnQueryAll->Name = L"btnQueryAll";
			this->btnQueryAll->Size = System::Drawing::Size(75, 23);
			this->btnQueryAll->TabIndex = 22;
			this->btnQueryAll->Text = L"Salones";
			this->btnQueryAll->UseVisualStyleBackColor = true;
			this->btnQueryAll->Click += gcnew System::EventHandler(this, &SalonForm::btnQueryAll_Click);
			// 
			// SalonForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(792, 424);
			this->Controls->Add(this->btnQueryAll);
			this->Controls->Add(this->dgvSalon);
			this->Controls->Add(this->cbWifi);
			this->Controls->Add(this->cbProyector);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->txtEstado);
			this->Controls->Add(this->txtPiso);
			this->Controls->Add(this->txtCapacidad);
			this->Controls->Add(this->txtNombre);
			this->Controls->Add(this->combTipoPizarra);
			this->Controls->Add(this->combTipoSalon);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"SalonForm";
			this->Text = L"SalonForm";
			this->Load += gcnew System::EventHandler(this, &SalonForm::SalonForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvSalon))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public: void RefreshDGVPSalones(){
		List<Salon^>^ salones = SICOLManager::QueryAllSalones();
		dgvSalon->Rows->Clear();
		for (int i = 0; i < salones->Count; i++){
			dgvSalon->Rows->Add(gcnew array < String^ > {
				"" + salones[i]->id,
					salones[i]->nombre,
					"" + salones[i]->capacidad,
					salones[i]->tipo_Aula,
					salones[i]->tipo_Pizarra,
					"" + salones[i]->piso,
					salones[i]->estado,
					"" + salones[i]->proyector,
					"" + salones[i]->wifi});
		}
	}// Fin de Metodo RefreshDGVPSalones

	public: bool ValidacionCapacidad(int capacidad){
		if (capacidad <= 0) return false;
		if (capacidad%10 !=0 ) return false;
		return true;
	}
	public: bool ValidacionPiso(int piso){
		if (piso <= 0) return false;
		if (piso > 4) return false;
		return true;
	}

	private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void btnAdd_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ nombre = txtNombre->Text;
	String^ capacidad = txtCapacidad->Text;
	String^ tipo_Salon = combTipoSalon->Text;
	String^ tipo_pizarra = combTipoPizarra->Text;
	String^ piso = txtPiso->Text;
	String^ estado = txtEstado->Text;
	int intcapacidad = Int32::Parse(capacidad);
	int intpiso = Int32::Parse(piso);

	if (ValidacionCapacidad(intcapacidad) && ValidacionPiso(intpiso)){
			Salon^ s = gcnew Salon();
			if (nombre != nullptr)
				s->nombre = nombre;
			if (tipo_Salon != nullptr)
				s->tipo_Aula = tipo_Salon;
			if (tipo_pizarra != nullptr)
				s->tipo_Pizarra = tipo_pizarra;
			if (estado != nullptr)
				s->estado = estado;
			if (intcapacidad != 0)
				s->capacidad = intcapacidad;
			if (intpiso != 0)
				s->piso = intpiso;
			if (cbProyector->Checked) s->proyector = 'Y';
			else s->proyector = 'N';
			if (cbWifi->Checked) s->wifi = 'Y';
			else s->wifi = 'N';
			SICOLManager::AddSalon(s);
			MessageBox::Show("Salon Incluido Correctamente");
	}		
	if (!ValidacionCapacidad(intcapacidad)) MessageBox::Show("Dato de Capacidad Incorrecto");
	if (!ValidacionPiso(intpiso)) MessageBox::Show("Dato de Piso Incorrecto");
}
private: System::Void SalonForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void btnQueryAll_Click(System::Object^  sender, System::EventArgs^  e) {
	RefreshDGVPSalones();
}
};
}
