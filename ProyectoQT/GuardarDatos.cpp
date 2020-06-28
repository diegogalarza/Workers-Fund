

#include <iostream>
#include <fstream>
#include "ClaseGuardar.h"

void guardar::GuardarDatos1(std::string v1,std::string  v2,std::string v3,std::string v4,
                std::string v5,std::string v6,std::string v7,std::string v8,int n1)
{
	ofstream outputfile;
	outputfile.open("InfoAsoc.txt")
	outputfile << v1 << endl;
	outputfile << v2 << endl;
	outputfile << v3 << endl;
	outputfile << v4 << endl;
	outputfile << v5 << endl;
	outputfile << v6 << endl;
	outputfile << v7 << endl;
	outputfile << v8 << endl;

	outputfile << n1 << endl;
	// ASI TODOS LOS DATOS
	outputfile << endl;
	outputfile.close()

}

