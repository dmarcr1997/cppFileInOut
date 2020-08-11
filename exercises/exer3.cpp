#include <iostream>
#include <fstream>
#include<cassert>


using namespace std;

void euler(double n){
	double h = (1 / n);
	double startX = 0;
	double y = 1;
	double prevY = 0;
	ofstream write_file("xy.dat", ios::app);
	assert(write_file.is_open());
	write_file.precision(5);
	write_file << "|X" << "\t" << "Y|\n";
	while (startX < 1){
		write_file << startX << "\t" << y << endl;
		startX += h;
		y +=prevY + (h * -y);
		prevY = y;
	}
	write_file.close();
}

int main()
{
	double n = 0;
	cout << "Enter the number of steps(n>1): ";
	cin >> n;
	assert(n>1);
	euler(n);
	return 0;
}