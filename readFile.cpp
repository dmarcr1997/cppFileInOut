#include<cassert>
#include<iostream>
#include<fstream>

using namespace std;

int main() {
	double x[6], y[6];
	double w[100], z[100];

	ifstream read_file("Output.dat");
	assert(read_file.is_open());
	
	int i = 0;
	for (int i = 0; i < 6; i++) {
		read_file >> x[i] >> y[i];
		cout << "Read " << x[i] << " into x\n";
		cout << "Read " << y[i] << " into y\n";
	}
	read_file.close();
	ifstream read_file2("Output2.dat");
	assert(read_file2.is_open());

	while (!read_file2.eof())
	{
		read_file2 >> w[i] >> z[i];
		cout << "Read " << w[i] << " into w\n";
	
		cout << "Read " << z[i] << " into z\n";
		i++;
	}
	cout << "End of file\n";
	read_file2.close();
	return 0;
}