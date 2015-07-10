// Archivo DLL principal.
#include "stdafx.h"
#include "SICOL_Controller.h"
#include <vcclr.h>

using namespace SICOL_Controller;
using namespace System::IO;
using namespace System::Runtime::Serialization;
using namespace System::Runtime::Serialization::Formatters::Binary;
using namespace System::Data::SqlClient;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////// Metodos de la Clase AlumnoDB  /////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void AlumnoDB::Add(Alumno ^ a){
	//Paso 1: Obtener la conexión
	SqlConnection^ conn;
	conn = gcnew SqlConnection();
	conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
		"Database=inf237;User ID=inf237;Password=inf237db;";
	conn->Open();
	//Paso 2: Preparamos la sentencia
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;
	comm->CommandText = "INSERT INTO STUDENT_2015_1 " +
		"(dni, name, lastName, secondLastName, birthday, gender, telephoneNumber, address, admissionDate, schoolId, attorneyId)" +
		" VALUES (@p1,@p2,@p3,@p4,@p5,@p6,@p7,@p8, @p9, @p10, @p11)";
	SqlParameter^ p1 = gcnew SqlParameter("@p1",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p2 = gcnew SqlParameter("@p2",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p3 = gcnew SqlParameter("@p3",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p4 = gcnew SqlParameter("@p4",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p5 = gcnew SqlParameter("@p5",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p6 = gcnew SqlParameter("@p6",
		System::Data::SqlDbType::Char, 1);
	SqlParameter^ p7 = gcnew SqlParameter("@p7",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p8 = gcnew SqlParameter("@p8",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p9 = gcnew SqlParameter("@p9",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p10 = gcnew SqlParameter("@p10",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p11 = gcnew SqlParameter("@p11",
		System::Data::SqlDbType::Int);

	//Le paso los valores del objeto Alumno a los parametros pi
	p1->Value = a->dni;
	p2->Value = a->nombre;
	p3->Value = a->apellido_Pa;
	p4->Value = a->apellido_Ma;
	p5->Value = a->fechaNacimiento;
	p6->Value = gcnew String(a->sexo, 1); 
	p7->Value = a->telefono;
	p8->Value = a->direccion;
	p9->Value = a->fechaIngreso;
	p10->Value = a->codigo;
	p11->Value = a->apoderado->id;

	//Paso los Valores a la Base de Datos
	comm->Parameters->Add(p1);
	comm->Parameters->Add(p2);
	comm->Parameters->Add(p3);
	comm->Parameters->Add(p4);
	comm->Parameters->Add(p5);
	comm->Parameters->Add(p6);
	comm->Parameters->Add(p7);
	comm->Parameters->Add(p8);
	comm->Parameters->Add(p9);
	comm->Parameters->Add(p10);
	comm->Parameters->Add(p11);

	//Paso 3: Ejecución de la sentencia
	comm->ExecuteNonQuery();
	//Paso 4: Cerramos la conexión con la BD
	conn->Close();
}//Fin Metodo Add() de AlumnoDB
void AlumnoDB::Update(Alumno^ a){
	//Paso 1: Obtener la conexión
	SqlConnection^ conn;
	conn = gcnew SqlConnection();
	conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
		"Database=inf237;User ID=inf237;Password=inf237db;";
	conn->Open();
	//Paso 2: Preparamos la sentencia
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;
	comm->CommandText = "UPDATE STUDENT_2015_1 " +
		"SET dni=@p1, name=@p2, lastName=@p3, secondLastName=@p4, birthday=@p5, gender=@p6, telephoneNumber=@p7, "+
		"address=@p8, admissionDate=@p9, schoolId=@p10, attorneyId=@p11 " +
		"WHERE id=@p12";
	SqlParameter^ p1 = gcnew SqlParameter("@p1",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p2 = gcnew SqlParameter("@p2",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p3 = gcnew SqlParameter("@p3",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p4 = gcnew SqlParameter("@p4",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p5 = gcnew SqlParameter("@p5",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p6 = gcnew SqlParameter("@p6",
		System::Data::SqlDbType::Char, 1);
	SqlParameter^ p7 = gcnew SqlParameter("@p7",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p8 = gcnew SqlParameter("@p8",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p9 = gcnew SqlParameter("@p9",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p10 = gcnew SqlParameter("@p10",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p11 = gcnew SqlParameter("@p11",
		System::Data::SqlDbType::Int);
	SqlParameter^ p12 = gcnew SqlParameter("@p12",
		System::Data::SqlDbType::Int);

	//Le paso los valores del objeto Alumno a los parametros pi
	p1->Value = a->dni;
	p2->Value = a->nombre;
	p3->Value = a->apellido_Pa;
	p4->Value = a->apellido_Ma;
	p5->Value = a->fechaNacimiento;
	p6->Value = gcnew String(a->sexo, 1);
	p7->Value = a->telefono;
	p8->Value = a->direccion;
	p9->Value = a->fechaIngreso;
	p10->Value = a->codigo;
	p11->Value = a->apoderado->id;
	p12->Value = a->id;

	//Paso los Valores a la Base de Datos
	comm->Parameters->Add(p1);
	comm->Parameters->Add(p2);
	comm->Parameters->Add(p3);
	comm->Parameters->Add(p4);
	comm->Parameters->Add(p5);
	comm->Parameters->Add(p6);
	comm->Parameters->Add(p7);
	comm->Parameters->Add(p8);
	comm->Parameters->Add(p9);
	comm->Parameters->Add(p10);
	comm->Parameters->Add(p11);
	comm->Parameters->Add(p12);

	//Paso 3: Ejecución de la sentencia
	comm->ExecuteNonQuery();
	//Paso 4: Cerramos la conexión con la BD
	conn->Close();
}//Fin Metodo Update() de AlumnoDB
void AlumnoDB::Delete(int id){
	SqlConnection^ conn;
	conn = gcnew SqlConnection();
	conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
		"Database=inf237;User ID=inf237;Password=inf237db;";
	conn->Open();

	//Paso 2: Preparamos la sentencia
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;
	comm->CommandText = "DELETE FROM STUDENT_2015_1 " +
		"WHERE id=@p1";
	SqlParameter^ p1 = gcnew SqlParameter("@p1",
		System::Data::SqlDbType::VarChar);
	//Le paso el parametro nombre de mi funcion al parametro p1 = nombre de la base de datos
	p1->Value = id;
	//Añado el parametro
	comm->Parameters->Add(p1);
	//Paso 3: Ejecución de la sentencia
	comm->ExecuteNonQuery();
	//Paso 4: Cerramos la conexión con la BD
	conn->Close();
}//Fin Metodo Delete() de AlumnoDB
Alumno^ AlumnoDB::QueryById(int id){
	//Paso 1: Obtener la conexión
	SqlConnection^ conn;
	conn = gcnew SqlConnection();
	conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
		"Database=inf237;User ID=inf237;Password=inf237db;";
	conn->Open();
	//Paso 2: Preparamos la sentencia
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;
	comm->CommandText = "SELECT * FROM STUDENT_2015_1 " +
		"WHERE id=@p1";
	SqlParameter^ p1 = gcnew SqlParameter("@p1",
		System::Data::SqlDbType::Int);
	p1->Value = id;
	comm->Parameters->Add(p1);

	//Paso 3: Ejecución de la sentencia
	SqlDataReader^ dr = comm->ExecuteReader();
	//Paso 3.1: Procesamos los resultados	
	Alumno ^a = nullptr;
	if (dr->Read()){
		a = gcnew Alumno();
		a->apoderado = gcnew Apoderado();
		a->id = (int)dr["id"];
		if (dr["dni"] != System::DBNull::Value)
			a->dni = safe_cast<String ^>(dr["dni"]);
		if (dr["name"] != System::DBNull::Value)
			a->nombre = safe_cast<String ^>(dr["name"]);
		if (dr["lastName"] != System::DBNull::Value)
			a->apellido_Pa = safe_cast<String ^>(dr["lastName"]);
		if (dr["secondLastName"] != System::DBNull::Value)
			a->apellido_Ma = safe_cast<String ^>(dr["secondLastName"]);
		if (dr["birthday"] != System::DBNull::Value)
			a->fechaNacimiento = safe_cast<String ^>(dr["birthday"]);
		if (dr["gender"] != System::DBNull::Value)
			a->sexo = safe_cast<String ^>(dr["gender"])[0];
		if (dr["telephoneNumber"] != System::DBNull::Value)
			a->telefono = safe_cast<String ^>(dr["telephoneNumber"]);
		if (dr["address"] != System::DBNull::Value)
			a->direccion = safe_cast<String ^>(dr["address"]);
		if (dr["admissionDate"] != System::DBNull::Value)
			a->fechaIngreso = safe_cast<String ^>(dr["admissionDate"]);
		if (dr["schoolId"] != System::DBNull::Value)
			a->codigo = safe_cast<String ^>(dr["schoolId"]);
		if (dr["attorneyId"] != System::DBNull::Value)
			a->apoderado->id = (int)dr["attorneyId"];
	}
	//Paso 4: Cerramos el dataReader y la conexión con la BD
	dr->Close();
	conn->Close();
	return a;
}
Alumno^ AlumnoDB::QueryByCodigo(String^ codigoAlumno){
	//Paso 1: Obtener la conexión
	SqlConnection^ conn;
	conn = gcnew SqlConnection();
	conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
		"Database=inf237;User ID=inf237;Password=inf237db;";
	conn->Open();
	//Paso 2: Preparamos la sentencia
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;
	comm->CommandText = "SELECT * FROM STUDENT_2015_1 " +
		"WHERE schoolId=@p1";
	SqlParameter^ p1 = gcnew SqlParameter("@p1",
		System::Data::SqlDbType::VarChar);
	p1->Value = codigoAlumno;
	comm->Parameters->Add(p1);

	//Paso 3: Ejecución de la sentencia
	SqlDataReader^ dr = comm->ExecuteReader();

	//Paso 3.1: Procesamos los resultados	
	Alumno ^a = nullptr;
	if (dr->Read()){
		a = gcnew Alumno();
		a->apoderado = gcnew Apoderado();
		a->id = (int)dr["id"];
		if (dr["dni"] != System::DBNull::Value)
			a->dni = safe_cast<String ^>(dr["dni"]);
		if (dr["name"] != System::DBNull::Value)
			a->nombre = safe_cast<String ^>(dr["name"]);
		if (dr["lastName"] != System::DBNull::Value)
			a->apellido_Pa = safe_cast<String ^>(dr["lastName"]);
		if (dr["secondLastName"] != System::DBNull::Value)
			a->apellido_Ma = safe_cast<String ^>(dr["secondLastName"]);
		if (dr["birthday"] != System::DBNull::Value)
			a->fechaNacimiento = safe_cast<String ^>(dr["birthday"]);
		if (dr["gender"] != System::DBNull::Value)
			a->sexo = safe_cast<String ^>(dr["gender"])[0];
		if (dr["telephoneNumber"] != System::DBNull::Value)
			a->telefono = safe_cast<String ^>(dr["telephoneNumber"]);
		if (dr["address"] != System::DBNull::Value)
			a->direccion = safe_cast<String ^>(dr["address"]);
		if (dr["admissionDate"] != System::DBNull::Value)
			a->fechaIngreso = safe_cast<String ^>(dr["admissionDate"]);
		if (dr["schoolId"] != System::DBNull::Value)
			a->codigo = safe_cast<String ^>(dr["schoolId"]);
		if (dr["attorneyId"] != System::DBNull::Value)
			a->apoderado->id = (int)dr["attorneyId"];
	}
	//Paso 4: Cerramos el dataReader y la conexión con la BD
	dr->Close();
	conn->Close();
	return a;
}//Fin Metodo QueryByCodigo() de AlumnoDB
Alumno^ AlumnoDB::QueryByDni(String^ dni){
	//Paso 1: Obtener la conexión
	SqlConnection^ conn;
	conn = gcnew SqlConnection();
	conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
		"Database=inf237;User ID=inf237;Password=inf237db;";
	conn->Open();
	//Paso 2: Preparamos la sentencia
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;
	comm->CommandText = "SELECT * FROM STUDENT_2015_1 " +
		"WHERE dni=@p1";
	SqlParameter^ p1 = gcnew SqlParameter("@p1",
		System::Data::SqlDbType::VarChar);
	p1->Value = dni;
	comm->Parameters->Add(p1);

	//Paso 3: Ejecución de la sentencia
	SqlDataReader^ dr = comm->ExecuteReader();
	//Paso 3.1: Procesamos los resultados	
	Alumno ^a = nullptr;
	if (dr->Read()){
		a = gcnew Alumno();
		a->apoderado = gcnew Apoderado();
		a->id = (int)dr["id"];
		if (dr["dni"] != System::DBNull::Value)
			a->dni = safe_cast<String ^>(dr["dni"]);
		if (dr["name"] != System::DBNull::Value)
			a->nombre = safe_cast<String ^>(dr["name"]);
		if (dr["lastName"] != System::DBNull::Value)
			a->apellido_Pa = safe_cast<String ^>(dr["lastName"]);
		if (dr["secondLastName"] != System::DBNull::Value)
			a->apellido_Ma = safe_cast<String ^>(dr["secondLastName"]);
		if (dr["birthday"] != System::DBNull::Value)
			a->fechaNacimiento = safe_cast<String ^>(dr["birthday"]);
		if (dr["gender"] != System::DBNull::Value)
			a->sexo = safe_cast<String ^>(dr["gender"])[0];
		if (dr["telephoneNumber"] != System::DBNull::Value)
			a->telefono = safe_cast<String ^>(dr["telephoneNumber"]);
		if (dr["address"] != System::DBNull::Value)
			a->direccion = safe_cast<String ^>(dr["address"]);
		if (dr["admissionDate"] != System::DBNull::Value)
			a->fechaIngreso = safe_cast<String ^>(dr["admissionDate"]);
		if (dr["schoolId"] != System::DBNull::Value)
			a->codigo = safe_cast<String ^>(dr["schoolId"]);
		if (dr["attorneyId"] != System::DBNull::Value)
			a->apoderado->id = (int)dr["attorneyId"];
	}
	//Paso 4: Cerramos el dataReader y la conexión con la BD
	dr->Close();
	conn->Close();
	return a;
}
List<Alumno^>^ AlumnoDB::QueryAllAlumnos(){
	//Paso 1: Obtener la conexión
	SqlConnection^ conn;
	conn = gcnew SqlConnection();
	conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
		"Database=inf237;User ID=inf237;Password=inf237db;";
	conn->Open();
	//Paso 2: Preparamos la sentencia
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;
	comm->CommandText = "SELECT * FROM STUDENT_2015_1";

	//Paso 3: Ejecución de la sentencia
	SqlDataReader^ dr = comm->ExecuteReader();
	//Paso 3.1: Procesamos los resultados
	List<Alumno^> ^listAlumnos = gcnew List<Alumno^>();
	while (dr->Read()){
		Alumno ^a = gcnew Alumno();
		a->apoderado = gcnew Apoderado();
		a->id = (int)dr["id"];
		if (dr["dni"] != System::DBNull::Value)
			a->dni = safe_cast<String ^>(dr["dni"]);
		if (dr["name"] != System::DBNull::Value)
			a->nombre = safe_cast<String ^>(dr["name"]);
		if (dr["lastName"] != System::DBNull::Value)
			a->apellido_Pa = safe_cast<String ^>(dr["lastName"]);
		if (dr["secondLastName"] != System::DBNull::Value)
			a->apellido_Ma = safe_cast<String ^>(dr["secondLastName"]);
		if (dr["birthday"] != System::DBNull::Value)
			a->fechaNacimiento = safe_cast<String ^>(dr["birthday"]);
		if (dr["gender"] != System::DBNull::Value)
			a->sexo = safe_cast<String ^>(dr["gender"])[0];
		if (dr["telephoneNumber"] != System::DBNull::Value)
			a->telefono = safe_cast<String ^>(dr["telephoneNumber"]);
		if (dr["address"] != System::DBNull::Value)
			a->direccion = safe_cast<String ^>(dr["address"]);
		if (dr["admissionDate"] != System::DBNull::Value)
			a->fechaIngreso = safe_cast<String ^>(dr["admissionDate"]);
		if (dr["schoolId"] != System::DBNull::Value)
			a->codigo = safe_cast<String ^>(dr["schoolId"]);
		if (dr["attorneyId"] != System::DBNull::Value)
			a->apoderado->id = (int)dr["attorneyId"];
		listAlumnos->Add(a);
	}
	//Paso 4: Cerramos el dataReader y la conexión con la BD
	dr->Close();
	conn->Close();
	//Devuelvo la lista de Alumnos
	return listAlumnos;
}
//////////////////////////////// Fin Metodos de la Clase AlumnoDB  /////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////// Metodos de la Clase SalonDB  //////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void SalonDB::Add(Salon^ s){
	//Paso 1: Obtener la conexión
	SqlConnection^ conn;
	conn = gcnew SqlConnection();
	conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
		"Database=inf237;User ID=inf237;Password=inf237db;";
	conn->Open();
	//Paso 2: Preparamos la sentencia
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;
	comm->CommandText = "INSERT INTO ROOM_2015_1 " +
		"(name, capacity, type, blackboardType, level, state, hasMultimediaProjector, hasWifi) VALUES (@p1,@p2,@p3,@p4,@p5,@p6,@p7,@p8)";
	SqlParameter^ p1 = gcnew SqlParameter("@p1",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p2 = gcnew SqlParameter("@p2",
		System::Data::SqlDbType::Int);
	SqlParameter^ p3 = gcnew SqlParameter("@p3",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p4 = gcnew SqlParameter("@p4",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p5 = gcnew SqlParameter("@p5",
		System::Data::SqlDbType::Int);
	SqlParameter^ p6 = gcnew SqlParameter("@p6",
		System::Data::SqlDbType::Char, 1);
	SqlParameter^ p7 = gcnew SqlParameter("@p7",
		System::Data::SqlDbType::Char, 1);
	SqlParameter^ p8 = gcnew SqlParameter("@p8",
		System::Data::SqlDbType::Char, 1);

	//Le paso los valores del objeto Salon a los parametros pi
	p1->Value = s->nombre;
	p2->Value = s->capacidad;
	p3->Value = s->tipo_Aula;
	p4->Value = s->tipo_Pizarra;
	p5->Value = s->piso;
	p6->Value = gcnew String(s->estado, 1);
	p7->Value = gcnew String(s->proyector, 1);
	p8->Value = gcnew String(s->wifi, 1);

	//Paso los Valores a la Base de Datos
	comm->Parameters->Add(p1);
	comm->Parameters->Add(p2);
	comm->Parameters->Add(p3);
	comm->Parameters->Add(p4);
	comm->Parameters->Add(p5);
	comm->Parameters->Add(p6);
	comm->Parameters->Add(p7);
	comm->Parameters->Add(p8);

	//Paso 3: Ejecución de la sentencia
	comm->ExecuteNonQuery();
	//Paso 4: Cerramos la conexión con la BD
	conn->Close();
}
void SalonDB::Update(Salon^ s){
	//Paso 1: Obtener la conexión
	SqlConnection^ conn;
	conn = gcnew SqlConnection();
	conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
		"Database=inf237;User ID=inf237;Password=inf237db;";
	conn->Open();
	//Paso 2: Preparamos la sentencia
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;

	comm->CommandText = "UPDATE ROOM_2015_1 " +
		"SET name=@p1, capacity=@p2, type=@p3, blackboardType=@p4, level=@p5, state=@p6, hasMultimediaProjector=@p7, hasWifi=@p8 " +
		"WHERE id=@p9";
	SqlParameter^ p1 = gcnew SqlParameter("@p1",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p2 = gcnew SqlParameter("@p2",
		System::Data::SqlDbType::Int);
	SqlParameter^ p3 = gcnew SqlParameter("@p3",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p4 = gcnew SqlParameter("@p4",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p5 = gcnew SqlParameter("@p5",
		System::Data::SqlDbType::Int);
	SqlParameter^ p6 = gcnew SqlParameter("@p6",
		System::Data::SqlDbType::Char, 1);
	SqlParameter^ p7 = gcnew SqlParameter("@p7",
		System::Data::SqlDbType::Char, 1);
	SqlParameter^ p8 = gcnew SqlParameter("@p8",
		System::Data::SqlDbType::Char, 1);
	SqlParameter^ p9 = gcnew SqlParameter("@p9",
		System::Data::SqlDbType::Int);

	//Le paso los valores del objeto Salon a los parametros pi
	p1->Value = s->nombre;
	p2->Value = s->capacidad;
	p3->Value = s->tipo_Aula;
	p4->Value = s->tipo_Pizarra;
	p5->Value = s->piso;
	p6->Value = gcnew String(s->estado, 1);
	p7->Value = gcnew String(s->proyector, 1);
	p8->Value = gcnew String(s->wifi, 1);
	p9->Value = s->id;

	//Paso los Valores a la Base de Datos
	comm->Parameters->Add(p1);
	comm->Parameters->Add(p2);
	comm->Parameters->Add(p3);
	comm->Parameters->Add(p4);
	comm->Parameters->Add(p5);
	comm->Parameters->Add(p6);
	comm->Parameters->Add(p7);
	comm->Parameters->Add(p8);
	comm->Parameters->Add(p9);

	//Paso 3: Ejecución de la sentencia
	comm->ExecuteNonQuery();
	//Paso 4: Cerramos la conexión con la BD
	conn->Close();
}
void SalonDB::Delete(int id){
	SqlConnection^ conn;
	conn = gcnew SqlConnection();
	conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
		"Database=inf237;User ID=inf237;Password=inf237db;";
	conn->Open();
	//Paso 2: Preparamos la sentencia
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;
	comm->CommandText = "DELETE FROM ROOM_2015_1 " +
		"WHERE id=@p1";
	SqlParameter^ p1 = gcnew SqlParameter("@p1",
		System::Data::SqlDbType::Int);

	p1->Value = id;
	comm->Parameters->Add(p1);

	//Paso 3: Ejecución de la sentencia
	comm->ExecuteNonQuery();
	//Paso 4: Cerramos la conexión con la BD
	conn->Close();
}
Salon^ SalonDB::QueryById(int id){
	SqlConnection^ conn;
	conn = gcnew SqlConnection();
	conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
		"Database=inf237;User ID=inf237;Password=inf237db;";
	conn->Open();
	//Paso 2: Preparamos la sentencia
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;
	comm->CommandText = "SELECT * FROM ROOM_2015_1 " +
		"WHERE id=@p1";
	SqlParameter^ p1 = gcnew SqlParameter("@p1",
		System::Data::SqlDbType::Int);
	p1->Value = id;
	comm->Parameters->Add(p1);

	//Paso 3: Ejecución de la sentencia
	SqlDataReader^ dr = comm->ExecuteReader();
	//Paso 3.1: Procesamos los resultados	
	Salon ^s = nullptr;
	if (dr->Read()){
		s = gcnew Salon();
		s->id = (int)dr["id"];
		if (dr["name"] != System::DBNull::Value)
			s->nombre = safe_cast<String^>(dr["name"]);
		if (dr["capacity"] != System::DBNull::Value)
			s->capacidad = (int)dr["capacity"];
		if (dr["type"] != System::DBNull::Value)
			s->tipo_Aula = safe_cast<String^>(dr["type"]);
		if (dr["blackboardType"] != System::DBNull::Value)
			s->tipo_Pizarra = safe_cast<String^>(dr["blackboardType"]);
		if (dr["level"] != System::DBNull::Value)
			s->piso = (int)dr["level"];
		if (dr["state"] != System::DBNull::Value)
			s->estado = safe_cast<String ^>(dr["state"])[0];
		if (dr["hasMultimediaProjector"] != System::DBNull::Value)
			s->proyector = safe_cast<String ^>(dr["hasMultimediaProjector"])[0];
		if (dr["hasWifi"] != System::DBNull::Value)
			s->wifi = safe_cast<String ^>(dr["hasWifi"])[0];
	}
	//Paso 4: Cerramos el dataReader y la conexión con la BD
	dr->Close();
	conn->Close();
	return s;
}
Salon^ SalonDB::QueryLikeNombre(String^ name){
	SqlConnection^ conn;
	conn = gcnew SqlConnection();
	conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
		"Database=inf237;User ID=inf237;Password=inf237db;";
	conn->Open();
	//Paso 2: Preparamos la sentencia
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;
	comm->CommandText = "SELECT * FROM ROOM_2015_1 " +
		"WHERE name LIKE @p1";
	SqlParameter^ p1 = gcnew SqlParameter("@p1",
		System::Data::SqlDbType::VarChar);
	p1->Value = "%" + name + "%";
	comm->Parameters->Add(p1);

	//Paso 3: Ejecución de la sentencia
	SqlDataReader^ dr = comm->ExecuteReader();
	//Paso 3.1: Procesamos los resultados	
	Salon ^s = nullptr;
	if (dr->Read()){
		s = gcnew Salon();
		s->id = (int)dr["id"];
		if (dr["name"] != System::DBNull::Value)
			s->nombre = safe_cast<String^>(dr["name"]);
		if (dr["capacity"] != System::DBNull::Value)
			s->capacidad = (int)dr["capacity"];
		if (dr["type"] != System::DBNull::Value)
			s->tipo_Aula = safe_cast<String^>(dr["type"]);
		if (dr["blackboardType"] != System::DBNull::Value)
			s->tipo_Pizarra = safe_cast<String^>(dr["blackboardType"]);
		if (dr["level"] != System::DBNull::Value)
			s->piso = (int)dr["level"];
		if (dr["state"] != System::DBNull::Value)
			s->estado = safe_cast<String ^>(dr["state"])[0];
		if (dr["hasMultimediaProjector"] != System::DBNull::Value)
			s->proyector = safe_cast<String ^>(dr["hasMultimediaProjector"])[0];
		if (dr["hasWifi"] != System::DBNull::Value)
			s->wifi = safe_cast<String ^>(dr["hasWifi"])[0];
	}
	//Paso 4: Cerramos el dataReader y la conexión con la BD
	dr->Close();
	conn->Close();
	return s;
}
List<Salon^>^ SalonDB::QueryAll(){
	SqlConnection^ conn;
	conn = gcnew SqlConnection();
	conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
		"Database=inf237;User ID=inf237;Password=inf237db;";
	conn->Open();
	//Paso 2: Preparamos la sentencia
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;
	comm->CommandText = "SELECT * FROM ROOM_2015_1";

	//Paso 3: Ejecución de la sentencia
	SqlDataReader^ dr = comm->ExecuteReader();
	//Paso 3.1: Procesamos los resultados
	List<Salon^> ^SalonesList = gcnew List<Salon^>();
	while (dr->Read()){
		Salon^s = gcnew Salon();
		s->id = (int)dr["id"];
		if (dr["name"] != System::DBNull::Value)
			s->nombre = safe_cast<String^>(dr["name"]);
		if (dr["capacity"] != System::DBNull::Value)
			s->capacidad = (int)dr["capacity"];
		if (dr["type"] != System::DBNull::Value)
			s->tipo_Aula = safe_cast<String^>(dr["type"]);
		if (dr["blackboardType"] != System::DBNull::Value)
			s->tipo_Pizarra = safe_cast<String^>(dr["blackboardType"]);
		if (dr["level"] != System::DBNull::Value)
			s->piso = (int)dr["level"];
		if (dr["state"] != System::DBNull::Value)
			s->estado = safe_cast<String ^>(dr["state"])[0];
		if (dr["hasMultimediaProjector"] != System::DBNull::Value)
			s->proyector = safe_cast<String ^>(dr["hasMultimediaProjector"])[0];
		if (dr["hasWifi"] != System::DBNull::Value)
			s->wifi = safe_cast<String ^>(dr["hasWifi"])[0];
		SalonesList->Add(s);
	}
	//Paso 4: Cerramos el dataReader y la conexión con la BD
	dr->Close();
	conn->Close();
	return SalonesList;
}
List<Salon^>^ SalonDB::QueryAllByCapicidad(int capacidad){
	SqlConnection^ conn;
	conn = gcnew SqlConnection();
	conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
		"Database=inf237;User ID=inf237;Password=inf237db;";
	conn->Open();
	//Paso 2: Preparamos la sentencia
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;
	comm->CommandText = "SELECT * FROM ROOM_2015_1 " +
		"WHERE capacity>=@p1";
	SqlParameter^ p1 = gcnew SqlParameter("@p1",
		System::Data::SqlDbType::Int);
	p1->Value = capacidad;
	comm->Parameters->Add(p1);
	
	//Paso 3: Ejecución de la sentencia
	SqlDataReader^ dr = comm->ExecuteReader();
	//Paso 3.1: Procesamos los resultados
	List<Salon^> ^SalonesList = gcnew List<Salon^>();
	while (dr->Read()){
		Salon^s = gcnew Salon();
		s->id = (int)dr["id"];
		if (dr["name"] != System::DBNull::Value)
			s->nombre = safe_cast<String^>(dr["name"]);
		if (dr["capacity"] != System::DBNull::Value)
			s->capacidad = (int)dr["capacity"];
		if (dr["type"] != System::DBNull::Value)
			s->tipo_Aula = safe_cast<String^>(dr["type"]);
		if (dr["blackboardType"] != System::DBNull::Value)
			s->tipo_Pizarra = safe_cast<String^>(dr["blackboardType"]);
		if (dr["level"] != System::DBNull::Value)
			s->piso = (int)dr["level"];
		if (dr["state"] != System::DBNull::Value)
			s->estado = safe_cast<String ^>(dr["state"])[0];
		if (dr["hasMultimediaProjector"] != System::DBNull::Value)
			s->proyector = safe_cast<String ^>(dr["hasMultimediaProjector"])[0];
		if (dr["hasWifi"] != System::DBNull::Value)
			s->wifi = safe_cast<String ^>(dr["hasWifi"])[0];
		SalonesList->Add(s);
	}
	//Paso 4: Cerramos el dataReader y la conexión con la BD
	dr->Close();
	conn->Close();
	return SalonesList;
}
void SalonDB::AddAlumnoBySeccion(Alumno^ a, Grado^grado, Seccion^ seccion){ // seccion = A,B,C
	//Paso 1: Obtener la conexión
	SqlConnection^ conn;
	conn = gcnew SqlConnection();
	conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
		"Database=inf237;User ID=inf237;Password=inf237db;";
	conn->Open();
	//Paso 2: Preparamos la sentencia
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;
	comm->CommandText = "INSERT INTO STUDENTS_BY_SECTION " +
		"(idGrade, year, level, idSection, idStudent, status) VALUES (@p1,@p2,@p3,@p4,@p5,@p6); " +  
		"SELECT  SCOPE_IDENTITY()";
	SqlParameter^ p1 = gcnew SqlParameter("@p1",
		System::Data::SqlDbType::Int);
	SqlParameter^ p2 = gcnew SqlParameter("@p2",
		System::Data::SqlDbType::Int);
	SqlParameter^ p3 = gcnew SqlParameter("@p3",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p4 = gcnew SqlParameter("@p4",
		System::Data::SqlDbType::Char);
	SqlParameter^ p5 = gcnew SqlParameter("@p5",
		System::Data::SqlDbType::Int);
	SqlParameter^ p6 = gcnew SqlParameter("@p6",
		System::Data::SqlDbType::VarChar);

	//Le paso los valores del objeto Alumno a los parametros pi
	p1->Value = grado->id;
	p2->Value = grado->año_academico;
	p3->Value = grado->nivel;
	p4->Value = seccion->nombre; // A,B,C nombre de Seccion =idSection
	p5->Value = a->codigo; // codigo= idAlumno
	p6->Value = "MATRICULADO";

	//Paso los Valores a la Base de Datos
	comm->Parameters->Add(p1);
	comm->Parameters->Add(p2);
	comm->Parameters->Add(p3);
	comm->Parameters->Add(p4);
	comm->Parameters->Add(p5);
	comm->Parameters->Add(p6);

	//Paso 3: Ejecución de la sentencia
	comm->ExecuteNonQuery();
	//Paso 4: Cerramos la conexión con la BD
	conn->Close();

}
//////////////////////////////// Fin Metodos de la Clase SalonDB  /////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////// Metodos de la Clase GradoDB  //////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void GradoDB::Add(Grado^ g){
	//Paso 1: Obtener la conexión
	SqlConnection^ conn;
	conn = gcnew SqlConnection();
	conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
		"Database=inf237;User ID=inf237;Password=inf237db;";
	conn->Open();
	//Paso 2: Preparamos la sentencia
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;
	comm->CommandText = "INSERT INTO GRADE " +
		"(year, level) VALUES (@p1,@p2)";
	SqlParameter^ p1 = gcnew SqlParameter("@p1",
		System::Data::SqlDbType::Int);
	SqlParameter^ p2 = gcnew SqlParameter("@p2",
		System::Data::SqlDbType::VarChar);

	//Le paso los valores del objeto Salon a los parametros pi
	p1->Value = g->año_academico;
	p2->Value = g->nivel;

	//Paso los Valores a la Base de Datos
	comm->Parameters->Add(p1);
	comm->Parameters->Add(p2);

	//Paso 3: Ejecución de la sentencia
	comm->ExecuteNonQuery();
	//Paso 4: Cerramos la conexión con la BD
	conn->Close();
}
void GradoDB::Update(Grado^ g){
	//Paso 1: Obtener la conexión
	SqlConnection^ conn;
	conn = gcnew SqlConnection();
	conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
		"Database=inf237;User ID=inf237;Password=inf237db;";
	conn->Open();
	//Paso 2: Preparamos la sentencia
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;
	comm->CommandText = "UPDATE GRADE " +
		"SET year=@p1, level=@p2 " +
		"WHERE id=@p3";
	SqlParameter^ p1 = gcnew SqlParameter("@p1",
		System::Data::SqlDbType::Int);
	SqlParameter^ p2 = gcnew SqlParameter("@p2",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p3 = gcnew SqlParameter("@p3",
		System::Data::SqlDbType::Int);

	//Le paso los valores del objeto Salon a los parametros pi
	p1->Value = g->año_academico;
	p2->Value = g->nivel;
	p3->Value = g->id;

	//Paso los Valores a la Base de Datos
	comm->Parameters->Add(p1);
	comm->Parameters->Add(p2);
	comm->Parameters->Add(p3);

	//Paso 3: Ejecución de la sentencia
	comm->ExecuteNonQuery();
	//Paso 4: Cerramos la conexión con la BD
	conn->Close();
}
void GradoDB::Delete(int id){
	SqlConnection^ conn;
	conn = gcnew SqlConnection();
	conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
		"Database=inf237;User ID=inf237;Password=inf237db;";
	conn->Open();
	//Paso 2: Preparamos la sentencia
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;
	comm->CommandText = "DELETE FROM GRADE " +
		"WHERE id=@p1";
	SqlParameter^ p1 = gcnew SqlParameter("@p1",
		System::Data::SqlDbType::Int);

	p1->Value = id;
	comm->Parameters->Add(p1);

	//Paso 3: Ejecución de la sentencia
	comm->ExecuteNonQuery();
	//Paso 4: Cerramos la conexión con la BD
	conn->Close();
}
Grado^ GradoDB::QueryById(int id){
	SqlConnection^ conn;
	conn = gcnew SqlConnection();
	conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
		"Database=inf237;User ID=inf237;Password=inf237db;";
	conn->Open();
	//Paso 2: Preparamos la sentencia
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;
	comm->CommandText = "SELECT * FROM GRADE " +
		"WHERE id=@p1";
	SqlParameter^ p1 = gcnew SqlParameter("@p1",
		System::Data::SqlDbType::Int);
	p1->Value = id;
	comm->Parameters->Add(p1);

	//Paso 3: Ejecución de la sentencia
	SqlDataReader^ dr = comm->ExecuteReader();
	//Paso 3.1: Procesamos los resultados	
	Grado ^g = nullptr;
	if (dr->Read()){
		g = gcnew Grado();
		g->id = (int)dr["id"];
		if (dr["year"] != System::DBNull::Value)
			g->año_academico = (int)dr["year"];
		if (dr["level"] != System::DBNull::Value)
			g->nivel = safe_cast<String ^>(dr["level"]);
	}
	//Paso 4: Cerramos el dataReader y la conexión con la BD
	dr->Close();
	conn->Close();
	return g;
}
List<Grado^>^ GradoDB::QueryAll(){
	SqlConnection^ conn;
	conn = gcnew SqlConnection();
	conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
		"Database=inf237;User ID=inf237;Password=inf237db;";
	conn->Open();
	//Paso 2: Preparamos la sentencia
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;
	comm->CommandText = "SELECT * FROM GRADE";

	//Paso 3: Ejecución de la sentencia
	SqlDataReader^ dr = comm->ExecuteReader();
	//Paso 3.1: Procesamos los resultados
	List<Grado^>^ GradoList = gcnew List<Grado^>();
	while (dr->Read()){
		Grado^g = gcnew Grado();
		g->id = (int)dr["id"];
		if (dr["year"] != System::DBNull::Value)
			g->año_academico = (int)dr["year"];
		if (dr["level"] != System::DBNull::Value)
			g->nivel = safe_cast<String ^>(dr["level"]);

		GradoList->Add(g);
	}
	//Paso 4: Cerramos el dataReader y la conexión con la BD
	dr->Close();
	conn->Close();
	return GradoList;
}
//////////////////////////////// Fin Metodos de la Clase GradoDB  /////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////// Metodos de la Clase SeccionDB  //////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void SeccionDB::Add(Grado^ g, Seccion^ s){
	//Paso 1: Obtener la conexión
	SqlConnection^ conn;
	conn = gcnew SqlConnection();
	conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
		"Database=inf237;User ID=inf237;Password=inf237db;";
	conn->Open();
	//Paso 2: Preparamos la sentencia
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;
	comm->CommandText = "INSERT INTO SECTION " +
		"(idGrade, year, level, idSection, idClassroom) VALUES (@p1,@p2,@p3,@p4,@p5)";
	SqlParameter^ p1= gcnew SqlParameter("@p1",
		System::Data::SqlDbType::Int);
	SqlParameter^ p2 = gcnew SqlParameter("@p2",
		System::Data::SqlDbType::Int);
	SqlParameter^ p3 = gcnew SqlParameter("@p3",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p4 = gcnew SqlParameter("@p4",
		System::Data::SqlDbType::Char, 1);
	SqlParameter^ p5 = gcnew SqlParameter("@p5",
		System::Data::SqlDbType::Int);

	//Le paso los valores del objeto Salon a los parametros pi
	p1->Value = g->id;
	p2->Value = g->año_academico;
	p3->Value = g->nivel;
	p4->Value = gcnew String(s->nombre, 1); //A,B
	p5->Value = s->salon->id;

	//Paso los Valores a la Base de Datos
	comm->Parameters->Add(p1);
	comm->Parameters->Add(p2);
	comm->Parameters->Add(p3);
	comm->Parameters->Add(p4);
	comm->Parameters->Add(p5);
	//Paso 3: Ejecución de la sentencia
	comm->ExecuteNonQuery();
	//Paso 4: Cerramos la conexión con la BD
	conn->Close();
}
void SeccionDB::Update(Grado^ g, Seccion^ s){
	//Paso 1: Obtener la conexión
	SqlConnection^ conn;
	conn = gcnew SqlConnection();
	conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
		"Database=inf237;User ID=inf237;Password=inf237db;";
	conn->Open();
	//Paso 2: Preparamos la sentencia
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;
	comm->CommandText = "UPDATE SECTION " + 
		"SET idGrade=@p1, year=@p2, level=@p3, idClassroom=@p4 " +
		"WHERE idSection=@p5";
	SqlParameter^ p1 = gcnew SqlParameter("@p1",
		System::Data::SqlDbType::Int);
	SqlParameter^ p2 = gcnew SqlParameter("@p2",
		System::Data::SqlDbType::Int);
	SqlParameter^ p3 = gcnew SqlParameter("@p3",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p4 = gcnew SqlParameter("@p4",
		System::Data::SqlDbType::Int);
	SqlParameter^ p5 = gcnew SqlParameter("@p5",
		System::Data::SqlDbType::Char, 1);

	//Le paso los valores del objeto Salon a los parametros pi
	p1->Value = g->id;
	p2->Value = g->año_academico;
	p3->Value = g->nivel;
	p4->Value = s->salon->id;
	p5->Value = gcnew String(s->nombre, 1); //A,B

	//Paso los Valores a la Base de Datos
	comm->Parameters->Add(p1);
	comm->Parameters->Add(p2);
	comm->Parameters->Add(p3);
	comm->Parameters->Add(p4);
	comm->Parameters->Add(p5);
	//Paso 3: Ejecución de la sentencia
	comm->ExecuteNonQuery();
	//Paso 4: Cerramos la conexión con la BD
	conn->Close();
}
void SeccionDB::Delete(char idSection){
	SqlConnection^ conn;
	conn = gcnew SqlConnection();
	conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
		"Database=inf237;User ID=inf237;Password=inf237db;";
	conn->Open();
	//Paso 2: Preparamos la sentencia
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;
	comm->CommandText = "DELETE FROM SECTION " +
		"WHERE idSection=@p1";
	SqlParameter^ p1 = gcnew SqlParameter("@p1",
		System::Data::SqlDbType::Char, 1);

	p1->Value = gcnew String(idSection, 1); //A,B
	comm->Parameters->Add(p1);

	//Paso 3: Ejecución de la sentencia
	comm->ExecuteNonQuery();
	//Paso 4: Cerramos la conexión con la BD
	conn->Close();
}
Seccion^ SeccionDB::QueryById(char idSection){
	SqlConnection^ conn;
	conn = gcnew SqlConnection();
	conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
		"Database=inf237;User ID=inf237;Password=inf237db;";
	conn->Open();
	//Paso 2: Preparamos la sentencia
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;
	comm->CommandText = "SELECT * FROM SECTION " +
		"WHERE idSection=@p1";
	SqlParameter^ p1 = gcnew SqlParameter("@p1",
		System::Data::SqlDbType::Char, 1);
	p1->Value = gcnew String(idSection, 1); //A,B
	comm->Parameters->Add(p1);

	//Paso 3: Ejecución de la sentencia
	SqlDataReader^ dr = comm->ExecuteReader();
	//Paso 3.1: Procesamos los resultados	
	Seccion ^s = nullptr;
	if (dr->Read()){
		s = gcnew Seccion();
		s->salon = gcnew Salon();
		if (dr["idSection"] != System::DBNull::Value)
			s->nombre = safe_cast<String ^>(dr["idSection"])[0];
		if (dr["idClassroom"] != System::DBNull::Value)
			s->salon->id = (int)dr["idClassroom"];
	}
	//Paso 4: Cerramos el dataReader y la conexión con la BD
	dr->Close();
	conn->Close();
	return s;
}
List<Seccion^>^ SeccionDB::QueryAllByGrado(Grado^ g){
	SqlConnection^ conn;
	conn = gcnew SqlConnection();
	conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
		"Database=inf237;User ID=inf237;Password=inf237db;";
	conn->Open();
	//Paso 2: Preparamos la sentencia
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;
	comm->CommandText = "SELECT * FROM SECTION " + 
		"WHERE idGrade=@p1 AND year=@p2 AND level=@p3";
	SqlParameter^ p1 = gcnew SqlParameter("@p1",
		System::Data::SqlDbType::Int);
	SqlParameter^ p2 = gcnew SqlParameter("@p2",
		System::Data::SqlDbType::Int);
	SqlParameter^ p3 = gcnew SqlParameter("@p3",
		System::Data::SqlDbType::VarChar);
	p1->Value = g->id;
	p2->Value = g->año_academico;
	p3->Value = g->nivel;
	comm->Parameters->Add(p1);
	comm->Parameters->Add(p2);
	comm->Parameters->Add(p3);

	//Paso 3: Ejecución de la sentencia
	SqlDataReader^ dr = comm->ExecuteReader();
	//Paso 3.1: Procesamos los resultados
	List<Seccion^>^ SeccionesList = gcnew List<Seccion^>();
	while (dr->Read()){
		Seccion^s = gcnew Seccion();
		s->salon = gcnew Salon();
		if (dr["idSection"] != System::DBNull::Value)
			s->nombre = safe_cast<String ^>(dr["idSection"])[0];
		if (dr["idClassroom"] != System::DBNull::Value)
			s->salon->id = (int)dr["idClassroom"];
		SeccionesList->Add(s);
	}
	//Paso 4: Cerramos el dataReader y la conexión con la BD
	dr->Close();
	conn->Close();
	return SeccionesList;
}
List<Seccion^>^ SeccionDB::QueryAll(){
	SqlConnection^ conn;
	conn = gcnew SqlConnection();
	conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
		"Database=inf237;User ID=inf237;Password=inf237db;";
	conn->Open();
	//Paso 2: Preparamos la sentencia
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;
	comm->CommandText = "SELECT * FROM SECTION";

	//Paso 3: Ejecución de la sentencia
	SqlDataReader^ dr = comm->ExecuteReader();
	//Paso 3.1: Procesamos los resultados
	List<Seccion^>^ SeccionesList = gcnew List<Seccion^>();
	while (dr->Read()){
		Seccion^s = gcnew Seccion();
		s->salon = gcnew Salon();
		if (dr["idSection"] != System::DBNull::Value)
			s->nombre = safe_cast<String ^>(dr["idSection"])[0];
		if (dr["idClassroom"] != System::DBNull::Value)
			s->salon->id = (int)dr["idClassroom"];
		SeccionesList->Add(s);
	}
	//Paso 4: Cerramos el dataReader y la conexión con la BD
	dr->Close();
	conn->Close();
	return SeccionesList;
}
//////////////////////////////// Fin Metodos de la Clase SeccionDB  /////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////// Metodos Estaticos de la Clase SICOLManager  ///////////////////////////////////////////////
//////////////// Metodos Estaticos para la Clase AlumnoDB dentro de la Clase SICOLManager //////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void SICOLManager::AddAlumno(Alumno^ a){
	Alumnos->Add(a);
	PersistToXMLFileAlumnoDB();
}
void SICOLManager::UpdateAlumno(Alumno^ a){
	Alumnos->Update(a);
	PersistToXMLFileAlumnoDB();
}
void SICOLManager::DeleteAlumno(int id){
	Alumnos->Delete(id);
}
Alumno^ SICOLManager::QueryAlumnoById(int id){
	return Alumnos->QueryById(id);
}
Alumno^ SICOLManager::QueryAlumnoByCodigo(String^ codigoAlumno){
	return Alumnos->QueryByCodigo(codigoAlumno);
}
Alumno^ SICOLManager::QueryAlumnoByDni(String^ dni){
	return Alumnos->QueryByDni(dni);
}
List<Alumno^>^ SICOLManager::QueryAllAlumnos(){
	LoadFromXMLFileAlumnoDB();
	return Alumnos->QueryAllAlumnos();
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////// Metodos Estaticos para la Clase SalonDB dentro de la Clase SICOLManager //////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void SICOLManager::AddSalon(Salon^ s){
	salones->Add(s);
}
void SICOLManager::UpdateSalon(Salon^ s){
	salones->Update(s);
}
void SICOLManager::DeleteSalon(int id){
	salones->Delete(id);
}
Salon^ SICOLManager::QuerySalonById(int id){ 
	return salones->QueryById(id);
}
Salon^ SICOLManager::QuerySalonLikeNombre(String^ name){
	return salones->QueryLikeNombre(name);
}
List<Salon^>^ SICOLManager::QueryAllSalones(){ 
	return salones->QueryAll();
}
List<Salon^>^ SICOLManager::QueryAllSalonesByCapicidad(int capacidad){
	return salones->QueryAllByCapicidad(capacidad);
}
void SICOLManager::AddAlumnoBySeccion(Alumno^ a, Grado^grado, Seccion^ seccion){
	salones->AddAlumnoBySeccion(a, grado, seccion);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////// Metodos Estaticos para la Clase GradoDB dentro de la Clase SICOLManager //////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void SICOLManager::AddGrado(Grado^ g){
	grados->Add(g);
}
void SICOLManager::UpdateGrado(Grado^ g){
	grados->Update(g);
}
void SICOLManager::DeleteGrado(int id){
	grados->Delete(id);
}
Grado^ SICOLManager::QueryGradoById(int id){
	return grados->QueryById(id);
}
List<Grado^>^ SICOLManager::QueryAllGrados(){
	return grados->QueryAll();
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////// Metodos Estaticos para la Clase GradoDB dentro de la Clase SICOLManager //////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void SICOLManager::AddSeccion(Grado^ g, Seccion^ s){
	secciones->Add(g, s);
}
void SICOLManager::UpdateSeccion(Grado^ g, Seccion^ s){
	secciones->Update(g, s);
}
void SICOLManager::DeleteSeccion(char idSection){
	secciones->Delete(idSection);
}
Seccion^ SICOLManager::QuerySeccionById(char idSection){
	return  secciones->QueryById(idSection);
}
List<Seccion^>^ SICOLManager::QueryAllSeccionByGrado(Grado^ g){
	return  secciones->QueryAllByGrado(g);
}
List<Seccion^>^ SICOLManager::QueryAllSeccion(){
	return  secciones->QueryAll();
}






void SICOLManager::PersistToXMLFileAlumnoDB(){
	System::Xml::Serialization::XmlSerializer ^writer =
		gcnew System::Xml::Serialization::XmlSerializer(
		AlumnoDB::typeid);

	System::IO::StreamWriter ^file = gcnew System::IO::StreamWriter(
		"Alumnos.xml");
	writer->Serialize(file, Alumnos);
	file->Close();
}
void SICOLManager::LoadFromXMLFileAlumnoDB() {
	System::Xml::Serialization::XmlSerializer^ reader =
		gcnew System::Xml::Serialization::XmlSerializer(
		AlumnoDB::typeid);
	System::IO::StreamReader ^file = nullptr;
	try{
		file = gcnew System::IO::StreamReader(
			"Alumnos.xml");
		Alumnos = (AlumnoDB^)reader->Deserialize(file);
	}
	catch (...){
		//Guardar el error en un archivo de log
	}
	finally{
		if (file != nullptr) file->Close();
	}
}
//Fin de Metodos de la Clase SICOLManager



















void GradoManager::Add(Seccion^ s, int numero){ //numero de grado
	for (int i = 0; i < listGrados->Count; i++){
		if (listGrados[i]->numero == numero){//Identifico a Cual grado pertence
			for (int f = 0; f < listGrados[i]->Secciones->Count; f++){ //Busco por todas sus secciones
				listGrados[i]->Secciones[f] = s; //Agrego una Secion al grado[i]
			}
		}
	}
}
void GradoManager::Update(Seccion^ s, int numero){ //numero de grado
	for (int i = 0; i < listGrados->Count; i++){
		if (listGrados[i]->numero == numero){//Identifico a Cual grado pertence
			for (int f = 0; f < listGrados[i]->Secciones->Count; f++){ //Busco por todas sus secciones
				if (listGrados[i]->Secciones[f] == s){ //Identifico la Seccion
					listGrados[i]->Secciones[f]->nombre = s->nombre;
					listGrados[i]->Secciones[f]->salon = s->salon;
				}
			}
		}
	}
}
List<Seccion^>^ GradoManager::QueryAllSeccionesByGrado(int año, String^ nivel){
	for (int i = 0; i < listGrados->Count; i++){
		if ((listGrados[i]->año_academico == año) && (listGrados[i]->nivel == nivel)){//Identifico a Cual grado pertence
			return listGrados[i]->Secciones;
		}
	}
}
List<Alumno^>^ GradoManager::QueryAllAlumnosBySeccion(Seccion^ s, int numero){
	for (int i = 0; i < listGrados->Count; i++){
		if (listGrados[i]->numero == numero) {//Identifico a Cual grado pertence
			for (int f = 0; f < listGrados[i]->Secciones->Count; f++){ //Busco por todas sus secciones
				if (listGrados[i]->Secciones[f] == s){ //Identifico la Seccion
					return listGrados[i]->Secciones[f]->Alumnos;
				}
			}

		}
	}
}

