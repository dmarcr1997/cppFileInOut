#include<iostream>
#include<fstream>

using namespace std;

int main() {
	double x = 1.8364238;
	ofstream write_output("Output2.dat", ios::app);
	write_output.precision(3);
	write_output << x << "\n";

	write_output.precision(5);
	write_output << x << "\n";

	write_output.precision(10);
	write_output << x << "\n";

	write_output.close();

	return 0;
}