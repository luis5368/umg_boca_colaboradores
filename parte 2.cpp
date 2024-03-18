//getter   (clase padre)
Persona::Persona(string _nombres, string _apellidos, string _direccion, int _telefono, int _dia, int _mes, int _anio ){
	nombres = _nombres;
	apellidos = _apellidos;
	direccion = _direccion;
	telefono = _telefono;
    dia = _dia;
	mes = _mes;
	anio = _anio;

}


//creamos los metodos de PERSONA 
void Persona::crear() {
	
}
void Persona::leer(){
	cout<<"nombres:"<<nombres<<endl;
	cout<<"apellidos:"<<apellidos<<endl;
	cout<<"direccion:"<<direccion<<endl;
	cout<<"telefono:"<<telefono<<endl;
}
void Persona::actualizar(){
	
}
void Persona::borrar(){
	
}
