
#pragma once
using namespace System;
using namespace System::Runtime::Serialization;
using namespace System::Collections::Generic;

namespace SICOL_Library {
	public ref class Persona
	{
	public:
		int id;
		String^ dni;
		String^ nombre;
		String^ apellido_Pa;
		String^ apellido_Ma;
		String^ fechaNacimiento; //DateTime^ nacimiento;
		char sexo; // (M) Masculino o (F)Femenino
		String^ telefono; //Numero Telefonico
		String^ direccion;
	}; // Fin Clase Persona

	public ref class Apoderado :Persona
	{
	public:
		String^ email;
		String^ parentesco; //Pap�, Mam� o Tutor
	}; // Fin Clase Apoderado

	[Serializable]
	public ref class Alumno :Persona
	{
	public:
		String^ fechaIngreso;  //DateTime^ ingreso;
		String^ codigo; //Codigo del Alumno  ejem:20111550
		Apoderado^ apoderado;
	}; // Fin Clase Alumno

	public ref class Profesor :Persona
	{
		public:
			String^ especialidad; //Matematica, Comunicacion,etc
			String^ UniversidadOrig;
	}; // Fin Clase Profesor

	public ref class Seccion //A, B, C, D
	{
		public:
			int id;
			String^ nombre; //A, B, C, D
			String^ salon; //Nombre del Salon 1 a 1
			List<Alumno^>^ Alumnos; //Alumnos que estudiaran en una Seccion
	}; // Fin Clase Seccion

	public ref class Grado // 1�, 2�, etc
	{
		public:
			int id;	//identificador de Grado
			int numero; //n�mero de grado 1�, 2�, etc
			String^ nivel; //Primaria o Secundaria  "level" en el DB
			int a�o_academico; //Solo me interesan numeros enteros(a�os)
			List<Seccion^>^ Secciones; //Todas las secciones de un Grado. Ejem: 1A, 1B, 1C, 1D
	}; // Fin Clase Grado

	public ref class Salon // A106, A108, etc Para el Curso es igual a la Seccion.
	{
	public:
		int id;
		String^ nombre; // A106, A108, etc 
		int capacidad; //Cuantas alumnos caben en un salon
		String^ tipo_Aula; //Aula o Laboratorio
		String^ tipo_Pizarra; //Acrilica o Para Tiza
		int piso; //1 piso , 2 piso	
		String^ estado; //activo o inactivo
		char proyector; //Y,N
		char wifi; //Y,N
	}; // Fin Clase Salon
}
