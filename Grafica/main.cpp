#include <iostream>
#include <cmath>
using namespace std;
double f(double x){
	return sin (x);
}
void dibuixa (double xmin, double xmax, double ymin, double ymax, 
int xres, int yres, char c) {
	double incx =(xmax - xmin)/(xres -1);
	double incy =(ymax - ymin)/(yres -1);
	for (int iy =0; iy <yres ;++ iy){
	for (int ix =0; ix <xres ;++ ix){
	double x=xmin+ix*incx;	
	double y=ymax -iy*incy;
	if((f(x)+ incy >y) and (y>f(x))) cout << c;
	else cout<<" ";
	}
	cout<<endl;	
	}
}
int main () {
	double pi=acos (0)*2;
	dibuixa (-pi, pi, -1,1, 40,20, 'x');
}


