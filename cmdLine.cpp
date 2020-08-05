#include<iostream>
#include<cstdlib>

using namespace std;

/// <summary>
/// compile g++ -o cmdl cmdLine.cpp
// then ./cmdl 100 5.0
/// </summary>

int main(int argc, char *argv[])
{
	cout << "Number of command line arguments = " << argc << endl;
	for (int i = 0; i < argc; i++)
	{
		cout << "Argument " << i << " = " << argv[i];
		cout << endl;
	}

	string program_name = argv[0];
	int number_of_nodes = atoi(argv[1]);
	double conductivity = atof(argv[2]);
	cout << "Program name = " << program_name << endl;
	cout << "Number of nodes = " << number_of_nodes << endl;
	cout << "Conductivity = " << conductivity << endl;

	return 0;
}