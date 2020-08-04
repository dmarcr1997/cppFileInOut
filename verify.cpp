#include<cassert>
#include<iostream>
#include<fstream>

using namespace std;

int main() {
	ofstream write_output("OutputVerified.dat", ios::app);
	assert(write_output.is_open());
	for (int i = 0; i < 100; i++)
	{
		write_output << i << "\n";
		assert(write_output.good());
	}
}	