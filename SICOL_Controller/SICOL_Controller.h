// SICOL_Controller.h
#pragma once
using namespace System;
using namespace SICOL_Library;
using namespace System::Collections::Generic;

namespace SICOL_Controller {
	[Serializable]
	public ref class AlumnoDB {
		public:
			List<Alumno^> ^ listAlumnos;
		public:
			void Add(Alumno ^ a);
			void Update(Alumno^ a);
			void Delete(int id); //Delete by identificador "id" del Alumno
			Alumno^ QueryById(int id); // Identificador "id" del Alumno
			Alumno^ QueryByCodigo(String^ codigoAlumno); // codigo del Alumno
			Alumno^ QueryByDni(String^ dni);
			List<Alumno^>^ QueryAllAlumnos();
	};

	public ref class SalonDB {
		public:
			List<Salon^>^ listSalones;
		public:
			void Add(Salon^ s);
			void Update(Salon^ s);
			void Delete(int id); // /Delete by identificador "id" del Salon
			Salon^ QueryById(int id); //Id = identificador = codigo del Salon
			Salon^ QueryByNombre(String^ name);
			List<Salon^>^ QueryAll();
			List<Salon^>^ QueryAllByCapicidad(int capacidad); //Busca los salones con capacidad mayor o igual a "capacidad"
			void AddAlumnoBySeccion(Alumno^ a, Grado^grado, Seccion^ seccion);  //seccion = A,B char DB
	};


	public ref class SICOLManager {
		private:
			static AlumnoDB^ Alumnos = gcnew AlumnoDB();
			static SalonDB^ salones = gcnew SalonDB();
		public:
			//Metodos Estaticos de para AlumnoDB 
			void static AddAlumno(Alumno^ a);
			void static UpdateAlumno(Alumno^ a);
			void static DeleteAlumno(int id);
			static Alumno^ QueryAlumnoById(int id); // Identificador "id" del Alumno
			static Alumno^ QueryAlumnoByCodigo(String^ codigoAlumno); // codigo del Alumno
			static Alumno^ QueryAlumnoByDni(String^ dni);
			static List<Alumno^>^ QueryAllAlumnos();
			static void PersistToXMLFileAlumnoDB();
			static void LoadFromXMLFileAlumnoDB();

			//Metodos Estaticos de para SalonDB 
			static void AddSalon(Salon^ s);
			static void UpdateSalon(Salon^ s);
			static void DeleteSalon(int id); 
			static Salon^ QuerySalonById(int id);
			static Salon^ QuerySalonByNombre(String^ name);
			static List<Salon^>^ QueryAllSalones();
			static List<Salon^>^ QueryAllSalonesByCapicidad(int capacidad); //Busca los salones con capacidad menor o igual a "capacidad"
			static void AddAlumnoBySeccion(Alumno^ a, Grado^grado, Seccion^ seccion);
	};

	public ref class GradoManager {
		public:
			static List<Grado^> ^ listGrados;
		public:
			static void Add(Seccion^ s, int numero); //Secciones[i]= s
			static void Update(Seccion^ s, int numero); //Secciones[i]->propiedad = s->propiedad_nueva(todos, menos grado, año, nivel)
			static List<Seccion^>^ QueryAllSeccionesByGrado(int año, String^ nivel); //if(grado[i]->año==año)
			static List<Alumno^>^ QueryAllAlumnosBySeccion(Seccion^ s, int numero);
	};
}
