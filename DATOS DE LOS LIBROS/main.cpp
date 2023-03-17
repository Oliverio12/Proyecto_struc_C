#include <iostream>
using namespace std;
struct libro
{
	char titulo[100];
	char autor[50];
	char editorial[50];
	int anyo;
};

int main(int argc, char** argv) {
	struct libro libro1;
	cout<<"INGRESE LOS DATOS DE LOS LIBROS"<<endl;
	cout<<"TITULO: ";
	cin>>libro1.titulo;
	cout<<"AUTOR: ";
	cin>>libro1.autor;
	cout<<"EDITORIAL: ";
	cin>>libro1.editorial;
	cout<<"ANYO: ";
	cin>>libro1.anyo;
	cout<<"TITULO DEL LIBRO: "<<libro1.titulo<<endl;
	cout<<"AUTOR DEL LIBRO: "<<libro1.autor<<endl;
	cout<<"EL LIBRO FUE EDITADO POR: "<<libro1.editorial<<endl;
	cout<<"ANYO DE LA EDICION: "<<libro1.anyo<<endl;

	return 0;
}
