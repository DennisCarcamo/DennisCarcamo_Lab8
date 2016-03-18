#pragma once
#include <string>
using std::string;

class Obras{
	string name, autor,fechaIngreso;
 public:
 	Obras(string,string,string);
 	string toString()const;
  
};