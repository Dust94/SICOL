#pragma once
#include "SalonForm.h"
#include "AlumnoForm.h"
#include "MatriculaForm.h"
#include "BuscarAlumnoForm.h"

namespace SICOL_GUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SICOLForm
	/// </summary>
	public ref class SICOLForm : public System::Windows::Forms::Form
	{
	public:
		SICOLForm(void)
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
		~SICOLForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  mantenimientoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  alumnosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  salonesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  operacionesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  matriculaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  buscarAlumnoToolStripMenuItem;

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->mantenimientoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->alumnosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salonesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->operacionesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->matriculaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->buscarAlumnoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->mantenimientoToolStripMenuItem,
					this->operacionesToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(712, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// mantenimientoToolStripMenuItem
			// 
			this->mantenimientoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->alumnosToolStripMenuItem,
					this->salonesToolStripMenuItem
			});
			this->mantenimientoToolStripMenuItem->Name = L"mantenimientoToolStripMenuItem";
			this->mantenimientoToolStripMenuItem->Size = System::Drawing::Size(101, 20);
			this->mantenimientoToolStripMenuItem->Text = L"Mantenimiento";
			// 
			// alumnosToolStripMenuItem
			// 
			this->alumnosToolStripMenuItem->Name = L"alumnosToolStripMenuItem";
			this->alumnosToolStripMenuItem->Size = System::Drawing::Size(122, 22);
			this->alumnosToolStripMenuItem->Text = L"Alumnos";
			this->alumnosToolStripMenuItem->Click += gcnew System::EventHandler(this, &SICOLForm::alumnosToolStripMenuItem_Click);
			// 
			// salonesToolStripMenuItem
			// 
			this->salonesToolStripMenuItem->Name = L"salonesToolStripMenuItem";
			this->salonesToolStripMenuItem->Size = System::Drawing::Size(122, 22);
			this->salonesToolStripMenuItem->Text = L"Salones";
			this->salonesToolStripMenuItem->Click += gcnew System::EventHandler(this, &SICOLForm::salonesToolStripMenuItem_Click);
			// 
			// operacionesToolStripMenuItem
			// 
			this->operacionesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->matriculaToolStripMenuItem,
					this->buscarAlumnoToolStripMenuItem
			});
			this->operacionesToolStripMenuItem->Name = L"operacionesToolStripMenuItem";
			this->operacionesToolStripMenuItem->Size = System::Drawing::Size(85, 20);
			this->operacionesToolStripMenuItem->Text = L"Operaciones";
			// 
			// matriculaToolStripMenuItem
			// 
			this->matriculaToolStripMenuItem->Name = L"matriculaToolStripMenuItem";
			this->matriculaToolStripMenuItem->Size = System::Drawing::Size(155, 22);
			this->matriculaToolStripMenuItem->Text = L"Matricula";
			this->matriculaToolStripMenuItem->Click += gcnew System::EventHandler(this, &SICOLForm::matriculaToolStripMenuItem_Click);
			// 
			// buscarAlumnoToolStripMenuItem
			// 
			this->buscarAlumnoToolStripMenuItem->Name = L"buscarAlumnoToolStripMenuItem";
			this->buscarAlumnoToolStripMenuItem->Size = System::Drawing::Size(155, 22);
			this->buscarAlumnoToolStripMenuItem->Text = L"Buscar Alumno";
			this->buscarAlumnoToolStripMenuItem->Click += gcnew System::EventHandler(this, &SICOLForm::buscarAlumnoToolStripMenuItem_Click);
			// 
			// SICOLForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(712, 377);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"SICOLForm";
			this->Text = L"SICOLForm";
			this->Load += gcnew System::EventHandler(this, &SICOLForm::SICOLForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void SICOLForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void alumnosToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		AlumnoForm^ sForm = gcnew AlumnoForm();
		sForm->MdiParent = this;
		sForm->Show();
	}
	private: System::Void salonesToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		SalonForm^ sForm = gcnew SalonForm();
		sForm->MdiParent = this;
		sForm->Show();
	}
private: System::Void matriculaToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		 MatriculaForm^ sForm = gcnew MatriculaForm();
		 sForm->MdiParent = this;
		 sForm->Show();
}
private: System::Void buscarAlumnoToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		 BuscarAlumnoForm^ sForm = gcnew BuscarAlumnoForm();
		 sForm->MdiParent = this;
		 sForm->Show();
}
};
}
