#include <iostream>
using namespace std;
struct registroLibro
{
	char cod[10];
	char titulo[30];
	int stock;
	float precio;
};
void leerDatos(struct registroLibro lib[], int ncont);
void buscarLibro(struct registroLibro lib[], int ncont);
int main(int argc, char** argv) {
	struct registroLibro lib[100];
	int nlibros;
	cout<<"CUANTOS LIBROS DESEA REGISTRAR? ";
	cin>>nlibros;
	cout<<"\n\t*****INTRODUCIR INFORMACION DE LOS LIBROS*****\n";
	leerDatos(lib,nlibros);
	cout<<"\n\t******BUSQUEDAS******\n";
	char resp='S';
	while(resp=='S')
		{
		buscarLibro(lib,nlibros);
		cout<<"\n\n";
		cout<<"DESEA BUSCAR OTRO LIBRO?(S/N)";
		cin>>resp;
		cout<<endl;
	}
	return 0;
}
void leerDatos(struct registroLibro lib[], int ncont)
{
	int c;
	for(c=0;c<ncont;c++)
	{
		cout<<"\nLibro #"<<c+1<<endl;
		cout<<"Codigo: ";
		cin>>lib[c].cod;
		cout<<"Titulo: ";
		cin>>lib[c].titulo;
		cout<<"Precio: ";
		cin>>lib[c].precio;
		cout<<"stock:";
		cin>>lib[c].stock;
	}
}
void buscarLibro(struct registroLibro lib[], int ncont)
{
	int c;
	bool encontrado=false;
	string codbusqueda;
	cout<<"DIGITE EL CODIGO DEL LIBRO QUE DESEA MOSTRAR: ";
	cin>>codbusqueda;
	for(c=0;c<ncont;c++)
	{
		if(lib[c].cod==codbusqueda)
		{
		     cout<<"libro: "<<lib[c].titulo<<endl;
		     c=ncont;
		     encontrado=true;
		}
	}
	if(encontrado==false)
	{
		cout<<"Libro no encontrado."<<endl;
	}
}

