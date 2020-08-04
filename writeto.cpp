#include<cassert>
#include<iostream>
#include<fstream>
using namespace std;

int main() {
	double x[3] = { 0.0, 1.0, 0.0 };
	double y[3] = { 0.0, 0.0, 1.0 };
	ofstream write_output("Output.dat");
	assert(write_output.is_open());
	for (int i = 0; i < 3; i++)
	{
		write_output << x[i] << " " << y[i] << "\n";
	}
	write_output.close();
	return 0;
}