//clases heredadas(hijos)

//clase hijo cliente
class Cliente : public Persona{
	private://atributos
		int nit;
	public:
		Cliente(string, string, string , int , int , int , int , int );
		void mostrar();
};

//contructor getter
Cliente::Cliente(string _nombres, string _apellidos, string _direccion, int _telefono, int _dia, int _mes, int _anio, int _nit ): Persona(_nombres,_apellidos,_direccion, _telefono, _dia, _mes,_anio ){
	nit = _nit;
};


//metodo de la clase Cliente (hija)
void Cliente::mostrar(){
	leer();
	cout<<"nit"<<nit<<endl;
}




//clase hijo empleado
class Empleado: public Persona{
	private://atributos
		int codigo_empleado;
		string puesto;
	public:
		Empleado(string _nombres, string _apellidos, string _direccion, int _telefono, int _dia, int _mes, int _anio, int codigo_empleado, string puesto);
		void mostrar();
};