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
		void Delete(String^ name);
		Alumno^ QueryByCodigo(int codigo);
		Alumno^ QueryByDni(int dni);
		List<Alumno^>^ QueryAllAlumnos();
	};

	public ref class SalonDB {
	public:
		List<Salon^>^ listSalones;
	public:
		void Add(Salon^ s);
		void Update(Salon^ s);
		void Delete(String^ name); // name =nombre salon
		Salon^ QueryByCodigo(int codigo);
		Salon^ QueryByNombre(String^ name);
		List<Salon^>^ QueryAll();
		List<Salon^>^ QueryAllByCapicidad(int capacidad);
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
		void static DeleteAlumno(String^ name);
		static Alumno^ QueryAlumnoByCodigo(int codigo);
		static Alumno^ QueryAlumnoByDni(int dni);
		static List<Alumno^>^ QueryAllAlumnos();
		static void PersistToXMLFileAlumnoDB();
		static void LoadFromXMLFileAlumnoDB();

		//Metodos Estaticos de para SalonDB 
		static void AddSalon(Salon^ s);
		static void UpdateSalon(Salon^ s);
		static void DeleteSalon(String^ name); // name =nombre salon
		static Salon^ QuerySalonByCodigo(int codigo);
		static Salon^ QuerySalonByNombre(String^ name);
		static List<Salon^>^ QueryAllSalones();
		static List<Salon^>^ QueryAllSalonesByCapicidad(int capacidad);
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
