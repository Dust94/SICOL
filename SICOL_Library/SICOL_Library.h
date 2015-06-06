
#pragma once
using namespace System;
//using namespace System::Runtime::Serialization;
using namespace System::Collections::Generic;

namespace SICOL_Library {
	public ref class Persona
	{
	public:
		int dni;
		String^ nombre;
		String^ apellido_Pa;
		String^ apellido_Ma;
		String^ fechaNacimiento; //DateTime^ nacimiento;
		String^ sexo;
		int telefono;
		String^ direccion;
	}; // Fin Clase Persona

	public ref class Apoderado :Persona
	{
		public:
			int id;
			String^ email;
			String^ parentesco; //Papá, Mamá o Tutor
	}; // Fin Clase Apoderado

	public ref class Profesor :Persona
	{
		public:
			String^ especialidad; //Matematica, Comunicacion,etc
			String^ UniversidadOrig;
	}; // Fin Clase Profesor

	[Serializable]
	public ref class Alumno :Persona
	{
		public:
			String^ fechaIngreso;  //DateTime^ ingreso;
			int codigo;
			Apoderado^ apoderado;
	}; // Fin Clase Alumno

	public ref class Seccion //A, B, C, D
	{
		public:
			int id;
			String^ nombre; //A, B, C, D
			String^ salon;
			List<Alumno^>^ Alumnos; //Alumnos que estudiaran en una Seccion
	}; // Fin Clase Seccion

	public ref class Grado // 1°, 2°, etc
	{
		public:
			int id;
			int numero; //número de grado 1°, 2°, etc
			String^ nivel; //Primaria o Secundaria
			int año_academico; //Solo me interesan numeros enteros(años)
			List<Seccion^>^ Secciones;
	}; // Fin Clase Grado

	public ref class Salon // A106, A108, etc 
	{
	public:
		int id;
		String^ nombre; // A106, A108, etc 
		int capacidad;
		String^ tipo_Aula;
		String^ tipo_Pizarra;
		int piso; //1 piso , 2 piso	
		String^ estado; //activo o inactivo
		bool proyector; 
		bool wifi;
	}; // Fin Clase Salon
}
