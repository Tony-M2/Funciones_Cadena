#include <iostream>  // Para entrada/salida estándar
#include <string>// Para el uso de strings
using namespace std;

int main() {
	// Solicitar el nombre completo al usuario
	cout << "Ingrese el nombre completo: ";
	string nombre_compl;
	getline(cin, nombre_compl);
	
	// Encontrar los índices de los espacios en blanco
	size_t Primer_esp = nombre_compl.find(' ');
	size_t segundo_esp = nombre_compl.find(' ', Primer_esp + 1);
	
	// Extraer apellidos y nombre
	string name = nombre_compl.substr(0, Primer_esp);
	string apellido_p = nombre_compl.substr(Primer_esp + 1, segundo_esp - Primer_esp - 1);
	string apellido_m = nombre_compl.substr(segundo_esp + 1);
	
	// Convertir la primera letra de cada palabra a mayúscula
	name[0] = toupper(name[0]);
	apellido_p[0] = toupper(apellido_p[0]);
	apellido_m[0] = toupper(apellido_m[0]);
	
	// Mostrar el resultado con el cambio en el orden de las palabras
	cout << apellido_p << " " << apellido_m << " " << name << endl;
	return 0;
}

