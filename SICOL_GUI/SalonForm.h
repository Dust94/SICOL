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


	private: System::Windows::Forms::Button^  btnAdd;
	private: System::Windows::Forms::Button^  btnUpdate;
	private: System::Windows::Forms::Button^  btnDelete;
	private: System::Windows::Forms::CheckBox^  cbProyector;
	private: System::Windows::Forms::CheckBox^  cbWifi;
	private: System::Windows::Forms::DataGridView^  dgvSalon;








	private: System::Windows::Forms::Button^  btnQueryAll;









	private: System::Windows::Forms::Button^  btnQuerySalonCapacidad;
	private: System::Windows::Forms::CheckBox^  cbEstado;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  capacidad;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  tipo_salon;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  tipo_pizarra;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  piso;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  estado;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  proyector;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  wifi;
	private: System::Windows::Forms::Button^  btnQuerySalonByName;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  txtQueryName;
	private: System::Windows::Forms::Label^  label10;




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
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->cbProyector = (gcnew System::Windows::Forms::CheckBox());
			this->cbWifi = (gcnew System::Windows::Forms::CheckBox());
			this->dgvSalon = (gcnew System::Windows::Forms::DataGridView());
			this->btnQueryAll = (gcnew System::Windows::Forms::Button());
			this->btnQuerySalonCapacidad = (gcnew System::Windows::Forms::Button());
			this->cbEstado = (gcnew System::Windows::Forms::CheckBox());
			this->id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->capacidad = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tipo_salon = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tipo_pizarra = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->piso = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->estado = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->proyector = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->wifi = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnQuerySalonByName = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtQueryName = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
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
			this->label2->Location = System::Drawing::Point(50, 63);
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
			this->label4->Location = System::Drawing::Point(402, 63);
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
			this->label7->Location = System::Drawing::Point(402, 118);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(55, 13);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Tiene Wifi";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(402, 92);
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
			this->txtCapacidad->Location = System::Drawing::Point(223, 60);
			this->txtCapacidad->Name = L"txtCapacidad";
			this->txtCapacidad->Size = System::Drawing::Size(100, 20);
			this->txtCapacidad->TabIndex = 13;
			// 
			// txtPiso
			// 
			this->txtPiso->Location = System::Drawing::Point(596, 32);
			this->txtPiso->Name = L"txtPiso";
			this->txtPiso->Size = System::Drawing::Size(100, 20);
			this->txtPiso->TabIndex = 14;
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(279, 184);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(75, 23);
			this->btnAdd->TabIndex = 16;
			this->btnAdd->Text = L"Agregar";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &SalonForm::btnAdd_Click);
			// 
			// btnUpdate
			// 
			this->btnUpdate->Location = System::Drawing::Point(382, 184);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(75, 23);
			this->btnUpdate->TabIndex = 17;
			this->btnUpdate->Text = L"Actualizar";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &SalonForm::btnUpdate_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(484, 184);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(75, 23);
			this->btnDelete->TabIndex = 18;
			this->btnDelete->Text = L"Eliminar";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &SalonForm::btnDelete_Click);
			// 
			// cbProyector
			// 
			this->cbProyector->AutoSize = true;
			this->cbProyector->Location = System::Drawing::Point(597, 92);
			this->cbProyector->Name = L"cbProyector";
			this->cbProyector->Size = System::Drawing::Size(15, 14);
			this->cbProyector->TabIndex = 19;
			this->cbProyector->UseVisualStyleBackColor = true;
			// 
			// cbWifi
			// 
			this->cbWifi->AutoSize = true;
			this->cbWifi->Location = System::Drawing::Point(597, 118);
			this->cbWifi->Name = L"cbWifi";
			this->cbWifi->Size = System::Drawing::Size(15, 14);
			this->cbWifi->TabIndex = 20;
			this->cbWifi->UseVisualStyleBackColor = true;
			// 
			// dgvSalon
			// 
			this->dgvSalon->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvSalon->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->id, this->nombre,
					this->capacidad, this->tipo_salon, this->tipo_pizarra, this->piso, this->estado, this->proyector, this->wifi
			});
			this->dgvSalon->Location = System::Drawing::Point(92, 275);
			this->dgvSalon->Name = L"dgvSalon";
			this->dgvSalon->Size = System::Drawing::Size(589, 253);
			this->dgvSalon->TabIndex = 21;
			this->dgvSalon->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &SalonForm::dgvSalon_CellContentClick);
			// 
			// btnQueryAll
			// 
			this->btnQueryAll->Location = System::Drawing::Point(92, 230);
			this->btnQueryAll->Name = L"btnQueryAll";
			this->btnQueryAll->Size = System::Drawing::Size(103, 39);
			this->btnQueryAll->TabIndex = 22;
			this->btnQueryAll->Text = L"Mostrar Todos los Salones";
			this->btnQueryAll->UseVisualStyleBackColor = true;
			this->btnQueryAll->Click += gcnew System::EventHandler(this, &SalonForm::btnQueryAll_Click);
			// 
			// btnQuerySalonCapacidad
			// 
			this->btnQuerySalonCapacidad->Location = System::Drawing::Point(201, 246);
			this->btnQuerySalonCapacidad->Name = L"btnQuerySalonCapacidad";
			this->btnQuerySalonCapacidad->Size = System::Drawing::Size(99, 23);
			this->btnQuerySalonCapacidad->TabIndex = 23;
			this->btnQuerySalonCapacidad->Text = L"Buscar Salones";
			this->btnQuerySalonCapacidad->UseVisualStyleBackColor = true;
			this->btnQuerySalonCapacidad->Click += gcnew System::EventHandler(this, &SalonForm::btnQuerySalonCapacidad_Click);
			// 
			// cbEstado
			// 
			this->cbEstado->AutoSize = true;
			this->cbEstado->Location = System::Drawing::Point(596, 63);
			this->cbEstado->Name = L"cbEstado";
			this->cbEstado->Size = System::Drawing::Size(15, 14);
			this->cbEstado->TabIndex = 24;
			this->cbEstado->UseVisualStyleBackColor = true;
			// 
			// id
			// 
			this->id->HeaderText = L"Id";
			this->id->Name = L"id";
			this->id->Width = 40;
			// 
			// nombre
			// 
			this->nombre->HeaderText = L"Nombre del Salon";
			this->nombre->Name = L"nombre";
			this->nombre->Width = 90;
			// 
			// capacidad
			// 
			this->capacidad->HeaderText = L"Capacidad Minima del Salon";
			this->capacidad->Name = L"capacidad";
			this->capacidad->Width = 50;
			// 
			// tipo_salon
			// 
			this->tipo_salon->HeaderText = L"Tipo de Salon";
			this->tipo_salon->Name = L"tipo_salon";
			this->tipo_salon->Width = 80;
			// 
			// tipo_pizarra
			// 
			this->tipo_pizarra->HeaderText = L"Tipo de Pizarra";
			this->tipo_pizarra->Name = L"tipo_pizarra";
			this->tipo_pizarra->Width = 80;
			// 
			// piso
			// 
			this->piso->HeaderText = L"Piso en el que se encuentra";
			this->piso->Name = L"piso";
			this->piso->Width = 50;
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
			this->proyector->Width = 50;
			// 
			// wifi
			// 
			this->wifi->HeaderText = L"Tiene Wifi";
			this->wifi->Name = L"wifi";
			this->wifi->Width = 50;
			// 
			// btnQuerySalonByName
			// 
			this->btnQuerySalonByName->Location = System::Drawing::Point(649, 224);
			this->btnQuerySalonByName->Name = L"btnQuerySalonByName";
			this->btnQuerySalonByName->Size = System::Drawing::Size(87, 23);
			this->btnQuerySalonByName->TabIndex = 25;
			this->btnQuerySalonByName->Text = L"Buscar Salon";
			this->btnQuerySalonByName->UseVisualStyleBackColor = true;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(405, 147);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(35, 13);
			this->label9->TabIndex = 26;
			this->label9->Text = L"label9";
			// 
			// txtQueryName
			// 
			this->txtQueryName->Location = System::Drawing::Point(539, 227);
			this->txtQueryName->Name = L"txtQueryName";
			this->txtQueryName->Size = System::Drawing::Size(100, 20);
			this->txtQueryName->TabIndex = 27;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(408, 230);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(128, 13);
			this->label10->TabIndex = 28;
			this->label10->Text = L"Buscar Salon por Nombre";
			// 
			// SalonForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(795, 540);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->txtQueryName);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->btnQuerySalonByName);
			this->Controls->Add(this->cbEstado);
			this->Controls->Add(this->btnQuerySalonCapacidad);
			this->Controls->Add(this->btnQueryAll);
			this->Controls->Add(this->dgvSalon);
			this->Controls->Add(this->cbWifi);
			this->Controls->Add(this->cbProyector);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->btnAdd);
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
			String^ estado_StringI = gcnew String(salones[i]->estado, 1);
			String^ proyector_StringI = gcnew String(salones[i]->proyector, 1);
			String^ wifi_StringI = gcnew String(salones[i]->wifi, 1);
			dgvSalon->Rows->Add(gcnew array < String^ > {
				"" + salones[i]->id,
					salones[i]->nombre,
					"" + salones[i]->capacidad,
					salones[i]->tipo_Aula,
					salones[i]->tipo_Pizarra,
					"" + salones[i]->piso,
					estado_StringI,
					proyector_StringI,
					wifi_StringI});
		} //fin del For
	}// Fin de Metodo RefreshDGVPSalones
	public:	int idSalon;
			Salon^ s = gcnew Salon();

	public: bool ValidacionCapacidad(){
		int capacidad = Int32::Parse(txtCapacidad->Text);
		if (capacidad <= 0) return false;
		if (capacidad%10 !=0 ) return false;
		return true;
	}
	public: bool ValidacionPiso(){
		int piso = Int32::Parse(txtPiso->Text);
		if (piso <= 0) return false;
		if (piso > 4) return false;
		return true;
	}
	public: bool ValidacionAdd(){
		bool nombre = String::Equals(txtNombre->Text, ""); //Vacio = true. //Llenado = false
		bool capacidad = String::Equals(txtCapacidad->Text, ""); //Vacio = true. //Llenado = false
		bool tipo_Salon = String::Equals(combTipoSalon->Text, ""); //Vacio = true. //Llenado = false
		bool tipo_pizarra = String::Equals(combTipoPizarra->Text, ""); //Vacio = true. //Llenado = false
		bool piso = String::Equals(txtPiso->Text, ""); //Vacio = true. //Llenado = false
		if (nombre){ //Si el Campo de nombre esta vacio
			MessageBox::Show("Por favor ingrese el Campo de Nombre");
			return false;
		}
		if (capacidad){ //Si el Campo de capacidad esta vacio
			MessageBox::Show("Por favor ingrese el Campo de Capacidad");
			return false;
		}
		else if (!ValidacionCapacidad()){
			MessageBox::Show("Por favor ingrese un numero positivo entermo multiplo de 10");
			return false;
		}
		if (tipo_Salon){ //Si el Campo de tipo_Salon esta vacio
			MessageBox::Show("Por favor seleccione algun tipo de Salon");
			return false;
		}
		if (tipo_pizarra){ //Si el Campo de tipo_pizarra esta vacio
			MessageBox::Show("Por favor seleccione alguna clase de Pizarra");
			return false;
		}
		if (piso){ //Si el Campo de piso esta vacio
			MessageBox::Show("Por favor ingrese el Campo de Piso");
			return false;
		}
		else if (!ValidacionPiso()){
			MessageBox::Show("Por favor ingrese un numero positivo que no exceda a 4");
			return false;
		}
		return true;
	} //Fin de ValidacionAdd

	private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void btnAdd_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ nombre = txtNombre->Text;
	int capacidad = Int32::Parse(txtCapacidad->Text);
	String^ tipo_Salon = combTipoSalon->Text;
	String^ tipo_pizarra = combTipoPizarra->Text;
	int piso = Int32::Parse(txtPiso->Text);

	if (ValidacionAdd()){
		Salon^ s = gcnew Salon();
		s->nombre = nombre;
		s->capacidad = capacidad;
		s->tipo_Aula = tipo_Salon;
		s->tipo_Pizarra = tipo_pizarra;
		s->piso = piso;
		if (cbEstado->Checked) s->estado = 'A';
		else s->proyector = 'I';
		if (cbProyector->Checked) s->proyector = 'Y';
		else s->proyector = 'N';
		if (cbWifi->Checked) s->wifi = 'Y';
		else s->wifi = 'N';
		SICOLManager::AddSalon(s);
		MessageBox::Show("Salon Incluido Correctamente");
		RefreshDGVPSalones();
	}//Fin del IF	
}//Fin del Metodo Add
private: System::Void btnUpdate_Click(System::Object^  sender, System::EventArgs^  e) { // Update
	String^ nombre = txtNombre->Text;
	int capacidad = Int32::Parse(txtCapacidad->Text);
	String^ tipo_Salon = combTipoSalon->Text;
	String^ tipo_pizarra = combTipoPizarra->Text;
	int piso = Int32::Parse(txtPiso->Text);

	if (ValidacionAdd()){
		Salon^ s = gcnew Salon();
		s = SICOLManager::QuerySalonById(idSalon);

		s->nombre = nombre;
		s->capacidad = capacidad;
		s->tipo_Aula = tipo_Salon;
		s->tipo_Pizarra = tipo_pizarra;
		s->piso = piso;
		if (cbEstado->Checked) s->estado = 'A';
		else s->proyector = 'I';
		if (cbProyector->Checked) s->proyector = 'Y';
		else s->proyector = 'N';
		if (cbWifi->Checked) s->wifi = 'Y';
		else s->wifi = 'N';
		SICOLManager::UpdateSalon(s);
		MessageBox::Show("Salon Actualizado Correctamente");
		RefreshDGVPSalones();
	}//Fin del IF	
}// Fin del Metodo Update

private: System::Void SalonForm_Load(System::Object^  sender, System::EventArgs^  e) {
	RefreshDGVPSalones();
}
private: System::Void btnQueryAll_Click(System::Object^  sender, System::EventArgs^  e) {
	RefreshDGVPSalones();
}
private: System::Void dgvSalon_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e);
	
private: System::Void btnDelete_Click(System::Object^  sender, System::EventArgs^  e) {
	SICOLManager::DeleteSalon(idSalon);
	RefreshDGVPSalones();
}
private: System::Void btnQuerySalonCapacidad_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ capacidad = txtCapacidad->Text;
	int intcapacidad = Int32::Parse(capacidad);
	List<Salon^>^ salones = SICOLManager::QueryAllSalonesByCapicidad(intcapacidad);
	dgvSalon->Rows->Clear();
	for (int i = 0; i < salones->Count; i++){
		String^ estado_StringI = gcnew String(salones[i]->estado, 1);
		String^ proyector_StringI = gcnew String(salones[i]->proyector, 1);
		String^ wifi_StringI = gcnew String(salones[i]->wifi, 1);
		dgvSalon->Rows->Add(gcnew array < String^ > {
			"" + salones[i]->id,
				salones[i]->nombre,
				"" + salones[i]->capacidad,
				salones[i]->tipo_Aula,
				salones[i]->tipo_Pizarra,
				"" + salones[i]->piso,
				estado_StringI,
				proyector_StringI,
				wifi_StringI});
	} //fin del For
} //Fin del Metodo Query Salon By Capacidad
};
}
