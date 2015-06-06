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
	private: System::Windows::Forms::RadioButton^  rbtnProyector;
	private: System::Windows::Forms::RadioButton^  rbtnWifi;




	private: System::Windows::Forms::TextBox^  txtNombre;
	private: System::Windows::Forms::TextBox^  txtCapacidad;
	private: System::Windows::Forms::TextBox^  txtPiso;

	private: System::Windows::Forms::TextBox^  txtEstado;
	private: System::Windows::Forms::Button^  btnAdd;
	private: System::Windows::Forms::Button^  btnUpdate;
	private: System::Windows::Forms::Button^  btnDelete;




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
			this->rbtnProyector = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnWifi = (gcnew System::Windows::Forms::RadioButton());
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->txtCapacidad = (gcnew System::Windows::Forms::TextBox());
			this->txtPiso = (gcnew System::Windows::Forms::TextBox());
			this->txtEstado = (gcnew System::Windows::Forms::TextBox());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
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
			this->label4->Location = System::Drawing::Point(50, 212);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(81, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Estado del Aula";
			this->label4->Click += gcnew System::EventHandler(this, &SalonForm::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(50, 175);
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
			this->label7->Location = System::Drawing::Point(50, 287);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(55, 13);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Tiene Wifi";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(50, 249);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(135, 13);
			this->label8->TabIndex = 6;
			this->label8->Text = L"Tiene Proyector Multimedia";
			// 
			// combTipoSalon
			// 
			this->combTipoSalon->FormattingEnabled = true;
			this->combTipoSalon->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Aula", L"Laboratorio" });
			this->combTipoSalon->Location = System::Drawing::Point(265, 102);
			this->combTipoSalon->Name = L"combTipoSalon";
			this->combTipoSalon->Size = System::Drawing::Size(121, 21);
			this->combTipoSalon->TabIndex = 8;
			this->combTipoSalon->SelectedIndexChanged += gcnew System::EventHandler(this, &SalonForm::comboBox1_SelectedIndexChanged);
			// 
			// combTipoPizarra
			// 
			this->combTipoPizarra->FormattingEnabled = true;
			this->combTipoPizarra->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Acrilica", L"Para Tiza" });
			this->combTipoPizarra->Location = System::Drawing::Point(265, 137);
			this->combTipoPizarra->Name = L"combTipoPizarra";
			this->combTipoPizarra->Size = System::Drawing::Size(121, 21);
			this->combTipoPizarra->TabIndex = 9;
			// 
			// rbtnProyector
			// 
			this->rbtnProyector->AutoSize = true;
			this->rbtnProyector->Location = System::Drawing::Point(228, 249);
			this->rbtnProyector->Name = L"rbtnProyector";
			this->rbtnProyector->Size = System::Drawing::Size(14, 13);
			this->rbtnProyector->TabIndex = 10;
			this->rbtnProyector->TabStop = true;
			this->rbtnProyector->UseVisualStyleBackColor = true;
			// 
			// rbtnWifi
			// 
			this->rbtnWifi->AutoSize = true;
			this->rbtnWifi->Location = System::Drawing::Point(228, 285);
			this->rbtnWifi->Name = L"rbtnWifi";
			this->rbtnWifi->Size = System::Drawing::Size(14, 13);
			this->rbtnWifi->TabIndex = 11;
			this->rbtnWifi->TabStop = true;
			this->rbtnWifi->UseVisualStyleBackColor = true;
			// 
			// txtNombre
			// 
			this->txtNombre->Location = System::Drawing::Point(265, 24);
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(100, 20);
			this->txtNombre->TabIndex = 12;
			// 
			// txtCapacidad
			// 
			this->txtCapacidad->Location = System::Drawing::Point(265, 64);
			this->txtCapacidad->Name = L"txtCapacidad";
			this->txtCapacidad->Size = System::Drawing::Size(100, 20);
			this->txtCapacidad->TabIndex = 13;
			// 
			// txtPiso
			// 
			this->txtPiso->Location = System::Drawing::Point(265, 172);
			this->txtPiso->Name = L"txtPiso";
			this->txtPiso->Size = System::Drawing::Size(100, 20);
			this->txtPiso->TabIndex = 14;
			// 
			// txtEstado
			// 
			this->txtEstado->Location = System::Drawing::Point(265, 209);
			this->txtEstado->Name = L"txtEstado";
			this->txtEstado->Size = System::Drawing::Size(100, 20);
			this->txtEstado->TabIndex = 15;
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(465, 22);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(75, 23);
			this->btnAdd->TabIndex = 16;
			this->btnAdd->Text = L"Agregar";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &SalonForm::btnAdd_Click);
			// 
			// btnUpdate
			// 
			this->btnUpdate->Location = System::Drawing::Point(465, 78);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(75, 23);
			this->btnUpdate->TabIndex = 17;
			this->btnUpdate->Text = L"Actualizar";
			this->btnUpdate->UseVisualStyleBackColor = true;
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(48, 358);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(75, 23);
			this->btnDelete->TabIndex = 18;
			this->btnDelete->Text = L"Eliminar";
			this->btnDelete->UseVisualStyleBackColor = true;
			// 
			// SalonForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(720, 420);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->txtEstado);
			this->Controls->Add(this->txtPiso);
			this->Controls->Add(this->txtCapacidad);
			this->Controls->Add(this->txtNombre);
			this->Controls->Add(this->rbtnWifi);
			this->Controls->Add(this->rbtnProyector);
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
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		bool ValidacionCapacidad(int capacidad){
			if (capacidad <= 0) return false;
			if (capacidad%10 !=0 ) return false;
			return true;
		}
		bool ValidacionPiso(int piso){
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

	Salon^ s = gcnew Salon();
	s->nombre = nombre;
	s->tipo_Aula = tipo_Salon;
	s->tipo_Pizarra = tipo_pizarra;
		s->estado = estado;
	if (ValidacionCapacidad(Int32::Parse(capacidad)))
		s->capacidad = Int32::Parse(capacidad);
	else MessageBox::Show("Dato de Capacidad Incorrecto");
	if (ValidacionCapacidad(Int32::Parse(capacidad)))
		s->piso = Int32::Parse(piso);
	else MessageBox::Show("Dato de Piso Incorrecto");

	if (rbtnProyector->Checked) s->proyector = 'Y';
	else s->proyector = 'N';
	if (rbtnWifi->Checked) s->wifi = 'Y';
	else s->wifi = 'N';

	if (s != nullptr) {
		SICOLManager::AddSalon(s);
		MessageBox::Show("Salon Incluido Correctamente");
	}
}
};
}
