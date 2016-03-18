
#include "obras.h"
#include <string>
#include <sstream>
using std::stringstream;
Obras::Obras(string name, string autor, string fechaIngreso):name(name),autor(autor),fechaIngreso(fechaIngreso){
}

string Obras::toString()const{
	stringstream ss;
	ss<<"Obra: "<<name<<" , "<<autor<<" , "<<fechaIngreso;
	return ss.str();
}