#include<iostream>
#include<fstream>
using namespace std;

int main(int argc, char* argv[])
{
	ofstream write_file("OutputFormatted.dat");

	write_file.setf(ios::scientific);
	write_file.setf(ios::showpos);
	write_file.precision(13);

	double x = 3.4, y = 0.000855, z = 984.424;
	write_file << x << " " << y << " " << z << "\n";

	write_file.close();
	return 0;
}