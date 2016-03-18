#include "obras.h"
#include "escultura.h"
#include <string>
#include <sstream>
using std::stringstream;

Escultura::Escultura(string name, string autor, string fechaIngreso, string material, int peso):Obras (name,autor,fechaIngreso),material(material), peso(peso){
}

string Escultura::toString()const{
	stringstream ss;
	ss<<"Escultura "<<material<<" , "<<peso; 
	return ss.str();
}
