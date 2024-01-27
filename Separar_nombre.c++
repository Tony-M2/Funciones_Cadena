#include <iostream>
#include <string>
using namespace std;

// Función para solicitar el nombre completo al usuario
string solicitarNombreCompleto() {
	cout << "Ingrese el nombre completo: ";
	string nombre_compl;
	getline(cin, nombre_compl);
	return nombre_compl;
}

// Función para extraer apellidos y nombre
void extraerNombres(const string& nombre_compl, string& name, string& apellido_p, string& apellido_m) {
	size_t Primer_esp = nombre_compl.find(' ');
	size_t segundo_esp = nombre_compl.find(' ', Primer_esp + 1);
	
	name = nombre_compl.substr(0, Primer_esp);
	apellido_p = nombre_compl.substr(Primer_esp + 1, segundo_esp - Primer_esp - 1);
	apellido_m = nombre_compl.substr(segundo_esp + 1);
}

// Función para convertir la primera letra de cada palabra a mayúscula
void capitalizarNombres(string& name, string& apellido_p, string& apellido_m) {
	name[0] = toupper(name[0]);
	apellido_p[0] = toupper(apellido_p[0]);
	apellido_m[0] = toupper(apellido_m[0]);
}

// Función principal
int main() {
	string nombreCompleto = solicitarNombreCompleto();
	
	string nombre, apellidoPaterno, apellidoMaterno;
	extraerNombres(nombreCompleto, nombre, apellidoPaterno, apellidoMaterno);
	
	capitalizarNombres(nombre, apellidoPaterno, apellidoMaterno);
	
	cout << apellidoPaterno << " " << apellidoMaterno << " " << nombre << endl;
	return 0;
}
