// Archivo DLL principal.

#include "stdafx.h"
#include "SICOL_Controller.h"

using namespace SICOL_Controller;
using namespace System::IO;
using namespace System::Runtime::Serialization;
using namespace System::Runtime::Serialization::Formatters::Binary;
using namespace System::Data::SqlClient;

void AlumnoDB::Add(Alumno ^ a){
	//Paso 1: Obtener la conexi�n
	SqlConnection^ conn;
	conn = gcnew SqlConnection();
	conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
		"Database=inf237;User ID=inf237;Password=inf237db;";
	conn->Open();
	//Paso 2: Preparamos la sentencia
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;
	comm->CommandText = "INSERT INTO STUDENT_2015_1 " +
		"(dni, name, lastName, secondLastName, birthday, gender, telephoneNumber, address, admissionDate, schoolId, attorneyId) VALUES (@p1,@p2,@p3,@p4,@p5,@p6,@p7,@p8, @p9, @p10, @p11)";
	SqlParameter^ p1 = gcnew SqlParameter("@p1",
		System::Data::SqlDbType::Char);
	SqlParameter^ p2 = gcnew SqlParameter("@p2",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p3 = gcnew SqlParameter("@p3",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p4 = gcnew SqlParameter("@p4",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p5 = gcnew SqlParameter("@p5",
		System::Data::SqlDbType::Date);
	SqlParameter^ p6 = gcnew SqlParameter("@p6",
		System::Data::SqlDbType::Char);
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
	p6->Value = a->sexo;
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

	//Paso 3: Ejecuci�n de la sentencia
	comm->ExecuteNonQuery();
	//Paso 4: Cerramos la conexi�n con la BD
	conn->Close();
}//Fin Metodo Add() de AlumnoDB

void AlumnoDB::Update(Alumno^ a){
	//Paso 1: Obtener la conexi�n
	SqlConnection^ conn;
	conn = gcnew SqlConnection();
	conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
		"Database=inf237;User ID=inf237;Password=inf237db;";
	conn->Open();
	//Paso 2: Preparamos la sentencia
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;
	comm->CommandText = "INSERT INTO STUDENT_2015_1 " +
		"(dni, name, lastName, secondLastName, birthday, gender, telephoneNumber, address, admissionDate, schoolId, attorneyId) VALUES (@p1,@p2,@p3,@p4,@p5,@p6,@p7,@p8, @p9, @p10, @p11)";
	SqlParameter^ p1 = gcnew SqlParameter("@p1",
		System::Data::SqlDbType::Char);
	SqlParameter^ p2 = gcnew SqlParameter("@p2",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p3 = gcnew SqlParameter("@p3",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p4 = gcnew SqlParameter("@p4",
		System::Data::SqlDbType::VarChar);
	SqlParameter^ p5 = gcnew SqlParameter("@p5",
		System::Data::SqlDbType::Date);
	SqlParameter^ p6 = gcnew SqlParameter("@p6",
		System::Data::SqlDbType::Char);
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
	p6->Value = a->sexo;
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

	//Paso 3: Ejecuci�n de la sentencia
	comm->ExecuteNonQuery();
	//Paso 4: Cerramos la conexi�n con la BD
	conn->Close();
}//Fin Metodo Update() de AlumnoDB

void AlumnoDB::Delete(String^ name){
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
	p1->Value = name;
	//A�ado el parametro
	comm->Parameters->Add(p1);
	//Paso 3: Ejecuci�n de la sentencia
	comm->ExecuteNonQuery();
	//Paso 4: Cerramos la conexi�n con la BD
	conn->Close();
}//Fin Metodo Delete() de AlumnoDB

Alumno^ AlumnoDB::QueryByCodigo(int codigo){
	//Paso 1: Obtener la conexi�n
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
		System::Data::SqlDbType::VarChar);
	p1->Value = codigo;
	comm->Parameters->Add(p1);

	//Paso 3: Ejecuci�n de la sentencia
	SqlDataReader^ dr = comm->ExecuteReader();

	//Paso 3.1: Procesamos los resultados	
	Alumno ^a = nullptr;
	if (dr->Read()){
		a = gcnew Alumno();
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
			a->sexo = safe_cast<String ^>(dr["gender"]);
		if (dr["telephoneNumber"] != System::DBNull::Value)
			a->telefono = safe_cast<int>(dr["telephoneNumber"]);
		if (dr["address"] != System::DBNull::Value)
			a->direccion = safe_cast<String ^>(dr["address"]);
		if (dr["admissionDate"] != System::DBNull::Value)
			a->fechaIngreso = safe_cast<String ^>(dr["admissionDate"]);
		if (dr["schoolId"] != System::DBNull::Value)
			a->codigo = safe_cast<int>(dr["schoolId"]);
		if (dr["attorneyId"] != System::DBNull::Value)
			a->apoderado->id = safe_cast<int>(dr["attorneyId"]);
	}
	//Paso 4: Cerramos el dataReader y la conexi�n con la BD
	dr->Close();
	conn->Close();
	return a;
}//Fin Metodo QueryByCodigo() de AlumnoDB

Alumno^ AlumnoDB::QueryByDni(int dni){
	//Paso 1: Obtener la conexi�n
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
		System::Data::SqlDbType::Char);
	p1->Value = dni;
	comm->Parameters->Add(p1);

	//Paso 3: Ejecuci�n de la sentencia
	SqlDataReader^ dr = comm->ExecuteReader();

	//Paso 3.1: Procesamos los resultados	
	Alumno ^a = nullptr;
	if (dr->Read()){
		a = gcnew Alumno();
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
			a->sexo = safe_cast<String ^>(dr["gender"]);
		if (dr["telephoneNumber"] != System::DBNull::Value)
			a->telefono = safe_cast<int>(dr["telephoneNumber"]);
		if (dr["address"] != System::DBNull::Value)
			a->direccion = safe_cast<String ^>(dr["address"]);
		if (dr["admissionDate"] != System::DBNull::Value)
			a->fechaIngreso = safe_cast<String ^>(dr["admissionDate"]);
		if (dr["schoolId"] != System::DBNull::Value)
			a->codigo = safe_cast<int>(dr["schoolId"]);
		if (dr["attorneyId"] != System::DBNull::Value)
			a->apoderado->id = safe_cast<int>(dr["attorneyId"]);
	}
	//Paso 4: Cerramos el dataReader y la conexi�n con la BD
	dr->Close();
	conn->Close();
	return a;
}
List<Alumno^>^ AlumnoDB::QueryAllAlumnos(){
	//Paso 1: Obtener la conexi�n
	SqlConnection^ conn;
	conn = gcnew SqlConnection();
	conn->ConnectionString = "Server=inti.lab.inf.pucp.edu.pe;" +
		"Database=inf237;User ID=inf237;Password=inf237db;";
	conn->Open();
	//Paso 2: Preparamos la sentencia
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;
	comm->CommandText = "SELECT * FROM STUDENT_2015_1";

	//Paso 3: Ejecuci�n de la sentencia
	SqlDataReader^ dr = comm->ExecuteReader();

	//Paso 3.1: Procesamos los resultados
	List<Alumno^> ^listAlumnos = gcnew List<Alumno^>();
	while (dr->Read()){
		Alumno ^a = gcnew Alumno();
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
			a->sexo = safe_cast<String ^>(dr["gender"]);
		if (dr["telephoneNumber"] != System::DBNull::Value)
			a->telefono = safe_cast<int>(dr["telephoneNumber"]);
		if (dr["address"] != System::DBNull::Value)
			a->direccion = safe_cast<String ^>(dr["address"]);
		if (dr["admissionDate"] != System::DBNull::Value)
			a->fechaIngreso = safe_cast<String ^>(dr["admissionDate"]);
		if (dr["schoolId"] != System::DBNull::Value)
			a->codigo = safe_cast<int>(dr["schoolId"]);
		if (dr["attorneyId"] != System::DBNull::Value)
			a->apoderado->id = safe_cast<int>(dr["attorneyId"]);
		listAlumnos->Add(a);
	}
	//Paso 4: Cerramos el dataReader y la conexi�n con la BD
	dr->Close();
	conn->Close();
	//Devuelvo la lista de Alumnos
	return listAlumnos;
}
//Fin de Metodos de la Clase AlumnoDB


void SalonDB::Add(Salon^ s){
	//Paso 1: Obtener la conexi�n
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
		System::Data::SqlDbType::Char);
	SqlParameter^ p7 = gcnew SqlParameter("@p7",
		System::Data::SqlDbType::Char);
	SqlParameter^ p8 = gcnew SqlParameter("@p8",
		System::Data::SqlDbType::Char);

	//Le paso los valores del objeto Salon a los parametros pi
	p1->Value = s->nombre;
	p2->Value = s->capacidad;
	p3->Value = s->tipo_Aula;
	p4->Value = s->tipo_Pizarra;
	p5->Value = s->piso;
	p6->Value = s->estado;
	p7->Value = safe_cast<char>(s->proyector);
	p8->Value = safe_cast<char>(s->wifi);

	//Paso los Valores a la Base de Datos
	comm->Parameters->Add(p1);
	comm->Parameters->Add(p2);
	comm->Parameters->Add(p3);
	comm->Parameters->Add(p4);
	comm->Parameters->Add(p5);
	comm->Parameters->Add(p6);
	comm->Parameters->Add(p7);
	comm->Parameters->Add(p8);

	//Paso 3: Ejecuci�n de la sentencia
	comm->ExecuteNonQuery();
	//Paso 4: Cerramos la conexi�n con la BD
	conn->Close();
}
void SalonDB::Update(Salon^ s){
	//Paso 1: Obtener la conexi�n
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
		System::Data::SqlDbType::Char);
	SqlParameter^ p7 = gcnew SqlParameter("@p7",
		System::Data::SqlDbType::Char);
	SqlParameter^ p8 = gcnew SqlParameter("@p8",
		System::Data::SqlDbType::Char);
	SqlParameter^ p9 = gcnew SqlParameter("@p9",
		System::Data::SqlDbType::Char);

	//Le paso los valores del objeto Salon a los parametros pi
	p1->Value = s->nombre;
	p2->Value = s->capacidad;
	p3->Value = s->tipo_Aula;
	p4->Value = s->tipo_Pizarra;
	p5->Value = s->piso;
	p6->Value = s->estado;
	p7->Value = safe_cast<char>(s->proyector);
	p8->Value = safe_cast<char>(s->wifi);
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

	//Paso 3: Ejecuci�n de la sentencia
	comm->ExecuteNonQuery();
	//Paso 4: Cerramos la conexi�n con la BD
	conn->Close();
}
void SalonDB::Delete(String^ name){
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
		System::Data::SqlDbType::VarChar);

	p1->Value = name;
	comm->Parameters->Add(p1);

	//Paso 3: Ejecuci�n de la sentencia
	comm->ExecuteNonQuery();
	//Paso 4: Cerramos la conexi�n con la BD
	conn->Close();
}
Salon^ SalonDB::QueryByCodigo(int codigo){
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
	p1->Value = codigo;
	comm->Parameters->Add(p1);

	//Paso 3: Ejecuci�n de la sentencia
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
			s->estado = safe_cast<String^>(dr["state"]);
		if (dr["hasMultimediaProjector"] != System::DBNull::Value)
			s->proyector = safe_cast<char>(dr["hasMultimediaProjector"]);
		if (dr["hasWifi"] != System::DBNull::Value)
			s->wifi = safe_cast<char>(dr["hasWifi"]);
	}
	//Paso 4: Cerramos el dataReader y la conexi�n con la BD
	dr->Close();
	conn->Close();
	return s;
}
Salon^ SalonDB::QueryByNombre(String^ name){
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
		System::Data::SqlDbType::VarChar);
	p1->Value = name;
	comm->Parameters->Add(p1);

	//Paso 3: Ejecuci�n de la sentencia
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
			s->estado = safe_cast<String^>(dr["state"]);
		if (dr["hasMultimediaProjector"] != System::DBNull::Value)
			s->proyector = safe_cast<char>(dr["hasMultimediaProjector"]);
		if (dr["hasWifi"] != System::DBNull::Value)
			s->wifi = safe_cast<char>(dr["hasWifi"]);
	}
	//Paso 4: Cerramos el dataReader y la conexi�n con la BD
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

	//Paso 3: Ejecuci�n de la sentencia
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
			s->estado = safe_cast<String^>(dr["state"]);
		if (dr["hasMultimediaProjector"] != System::DBNull::Value)
			s->proyector = (char)dr["hasMultimediaProjector"];
		if (dr["hasWifi"] != System::DBNull::Value)
			s->wifi = (char)dr["hasWifi"];
		SalonesList->Add(s);
	}
	//Paso 4: Cerramos el dataReader y la conexi�n con la BD
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
	
	//Paso 3: Ejecuci�n de la sentencia
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
			s->estado = safe_cast<String^>(dr["state"]);
		if (dr["hasMultimediaProjector"] != System::DBNull::Value)
			s->proyector = safe_cast<char>(dr["hasMultimediaProjector"]);
		if (dr["hasWifi"] != System::DBNull::Value)
			s->wifi = safe_cast<char>(dr["hasWifi"]);
		SalonesList->Add(s);
	}
	//Paso 4: Cerramos el dataReader y la conexi�n con la BD
	dr->Close();
	conn->Close();
	return SalonesList;
}
void SalonDB::AddAlumnoBySeccion(Alumno^ a, Grado^grado, Seccion^ seccion){ // seccion = A,B,C
	//Paso 1: Obtener la conexi�n
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
	p2->Value = grado->a�o_academico;
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

	//Paso 3: Ejecuci�n de la sentencia
	comm->ExecuteNonQuery();
	//Paso 4: Cerramos la conexi�n con la BD
	conn->Close();

}
//Fin de Metodos de la Clase SalonDB



void SICOLManager::AddAlumno(Alumno^ a){
	Alumnos->Add(a);
	PersistToXMLFileAlumnoDB();
}
void SICOLManager::UpdateAlumno(Alumno^ a){
	Alumnos->Update(a);
	PersistToXMLFileAlumnoDB();
}
void SICOLManager::DeleteAlumno(String^ name){
	Alumnos->Delete(name);
}
Alumno^ SICOLManager::QueryAlumnoByCodigo(int codigo){
	LoadFromXMLFileAlumnoDB();
	return Alumnos->QueryByCodigo(codigo);
}
Alumno^ SICOLManager::QueryAlumnoByDni(int dni){
	LoadFromXMLFileAlumnoDB();
	return Alumnos->QueryByDni(dni);
}
List<Alumno^>^ SICOLManager::QueryAllAlumnos(){
	LoadFromXMLFileAlumnoDB();
	return Alumnos->QueryAllAlumnos();
}

void SICOLManager::AddSalon(Salon^ s){
	salones->Add(s);
}
void SICOLManager::UpdateSalon(Salon^ s){
	salones->Update(s);
}
void SICOLManager::DeleteSalon(String^ name){
	salones->Delete(name);
}
Salon^ SICOLManager::QuerySalonByCodigo(int codigo){ 
	return salones->QueryByCodigo(codigo);
}
Salon^ SICOLManager::QuerySalonByNombre(String^ name){
	return salones->QueryByNombre(name);
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
List<Seccion^>^ GradoManager::QueryAllSeccionesByGrado(int a�o, String^ nivel){
	for (int i = 0; i < listGrados->Count; i++){
		if ((listGrados[i]->a�o_academico == a�o) && (listGrados[i]->nivel == nivel)){//Identifico a Cual grado pertence
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
