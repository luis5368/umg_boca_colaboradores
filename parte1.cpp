<<<<<<< HEAD
// Ejemplo Clases en C++ con (setter and getter)

#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>
using namespace std;




//clase persona
class Persona{
	//ofstream archivo_salida("file.txt");
	private:   //Atributos
	    string nombres;
	    string apellidos;
	    string direccion;
	    int telefono;
    	int dia, mes, anio;
	    
	    //aca tengo que colocar los nuevos datos
	public: // metodos//setters
	    Persona(string, string,string, int, int, int, int); // Constructor
	    void crear();
		void leer();
		void actualizar();
		void borrar();
};
=======
// Ejemplo Clases en C++ con (setter and getter)

#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>
using namespace std;




//clase persona
class Persona{
	//ofstream archivo_salida("file.txt");
	private:   //Atributos
	    string nombres;
	    string apellidos;
	    string direccion;
	    int telefono;
    	int dia, mes, anio;
	    
	    //aca tengo que colocar los nuevos datos
	public: // metodos//setters
	    Persona(string, string,string, int, int, int, int); // Constructor
	    void crear();
		void leer();
		void actualizar();
		void borrar();
};
>>>>>>> 598b883d8a536164d81f2024ad5d19691a8f5091
