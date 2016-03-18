#include "obras.h"
#include "literatura.h"
#include <string>
#include <sstream>
using std::stringstream;

Literatura::Literatura(string name, string autor, string fechaIngreso, string genero, string epoca):Obras(name,autor,fechaIngreso), genero(genero), epoca(epoca){
}

string Literatura::toString()const{
	stringstream ss;
	ss<<"Literatura"<<genero<<" , "<<epoca;
	return ss.str();
}
