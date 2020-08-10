#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char* argv[])
{
	ifstream read_file("x_and_y.dat");
	if (!read_file.is_open())
	{
		return 1;
	}
	int number_of_rows = 0;
	while(true)
	{
		double dummy1, dummy2, dummy3, dummy4;
		read_file >> dummy1 >> dummy2;
		read_file >> dummy3 >> dummy4;
		if (!read_file.eof()) {
			number_of_rows++;
		}
		else {
			break;
		}
	}
	cout << "Number of rows = "<< number_of_rows << endl;
	read_file.close();
	return 0;
}
