//constructor
Empleado::Empleado(string _nombres, string _apellidos, string _direccion, int _telefono, int _dia, int _mes, int _anio, int _codigo_empleado, string _puesto ): Persona(_nombres,_apellidos,_direccion, _telefono, _dia, _mes,_anio ){
	codigo_empleado = _codigo_empleado;
	puesto = _puesto;
};

void Empleado::mostrar(){
	leer();
	cout<<"codig empleado: "<<codigo_empleado;
	cout<<"piuesto: "<<puesto;
}



//llamamos las clases (padre y hijos)
int main(){

	//Persona p1 = Persona("nombres","apellidos","direccion",12345678,1,1,1);
	//Persona p2("nombres","apellidos","direccion",12345678,1,1,1);
	//Persona p3(25,"Maria");
	Cliente cliente1("nombres","apellidos","direccion",12345678,1,1,1, 4565);
	cliente1.mostrar();
	
	
	Empleado empleado1("nombres","apellidos","direccion",12345678,1,1,1, 4565, "administrador");
	empleado1.mostrar();
	//p1.leer();
	//p2.actualizar();
	//p3.borrar();
	//p4.crear();
	
	return 0;
}