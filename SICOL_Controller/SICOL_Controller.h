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

	public ref class SICOLManager {
	private:
		static AlumnoDB^ Alumnos = gcnew AlumnoDB();
		//static GradoDB^ Grados = gcnew GradoDB();
	public:
		void static AddAlumno(Alumno^ a);
		void static UpdateAlumno(Alumno^ a);
		void static DeleteAlumno(String^ name);
		static Alumno^ QueryAlumnoByCodigo(int codigo);
		static Alumno^ QueryAlumnoByDni(int dni);
		static List<Alumno^>^ QueryAll();
		static void PersistToXMLFileAlumnoDB();
		static void LoadFromXMLFileAlumnoDB();
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
