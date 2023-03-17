#include <iostream>
using namespace std;
struct empleado
{
	char nombre[30];
	int Antiguedad;
	float Ventas [3];
};

void LeerDatos(struct empleado emp[], int ncont);
void calcularPromedio(struct empleado emp[], int ncont);
void mayorAntiguedad(struct empleado emp[], int ncont);
void mayorVenta(struct empleado emp[], int ncont);

int main(int argc, char** argv) {
	struct empleado emp[100];
	int npers;
	cout<<"Cuantos empleados desea registrar? ";
	cin>>npers;
	cout<<"\n\t************INTRODUCIR INFORMACION DE LOS EMPLEADOS************\n";
	LeerDatos(emp,npers);
	cout<<"\n\t********RESULTADOS********\n";
	calcularPromedio(emp,npers);
	cout<<"\n\n\n";
	mayorAntiguedad(emp,npers);
	cout<<"\n\n\n";
	mayorVenta(emp,npers);
	cout<<"\n\n\n";
	return 0;
}

void LeerDatos(struct empleado emp[],int ncontactos)
{
	int c;
	for(c=0;c<ncontactos;c++)
	{
		cout<<"\nEmpleado #"<<c+1<<endl;
		cout<<"Nombre: ";
		cin>>emp[c].nombre;
		cout<<"Antiguedad: ";
		cin>>emp[c].Antiguedad;
		cout<<"Ventas: "<<endl<<"Primeras: ";
		cin>>emp[c].Ventas[0];
		cout<<"Segundas: ";
		cin>>emp[c].Ventas[1];
		cout<<"tercera: ";
		cin>>emp[c].Ventas[2];
	}
}

void calcularPromedio(struct empleado emp[],int ncontactos)
{
	int c;
	for(c=0;c<ncontactos;c++)
	{
		cout<<"\nEmpleado #"<<c+1<<endl;
		cout<<"Nombre: ";
		cout<<emp[c].nombre<<endl;
		cout<<"PROMEDIO EMPLEADO: "<<(emp[c].Ventas[0]+emp[c].Ventas[1]+emp[c].Ventas[2])/3<<endl;
		
	}
}

void mayorAntiguedad(struct empleado emp[],int ncontactos)
{
	int c,mayor=0;
	for(c=0;c<ncontactos;c++)
	{
		if(emp[c].Antiguedad>emp[mayor].Antiguedad)
		    mayor=c;
	}
	cout<<"El empleado con mayor  monto de ventas es: "<<emp[mayor].nombre<<endl;
}

void mayorVenta(struct empleado emp[],int ncontactos)
{
	int c,mayor=0;
	for (c=0;c<ncontactos;c++)
	{
		if((emp[c].Ventas[0]+emp[c].Ventas[1]+emp[c].Ventas[2])>(emp[mayor].Ventas[0]+emp[mayor].Ventas[1]+emp[mayor].Ventas[2]))
		    mayor=c;
	}
	cout<<"EL EMPLEADO CON MAYOR MONTO DE VENTA ES: "<<emp[mayor].nombre<<endl;
}
