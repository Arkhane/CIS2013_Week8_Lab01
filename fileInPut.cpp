#include <fstream>
#include <iostream>
using namespace std;

int main() {
	int number;
	int one, two, three, four;
	char five;
	
	ifstream in_a;

	in_a.open("numbers.dat");
	if (in_a.fail()) {
		cout << "Something really aweful happened here with numbers.dat";
		exit(1);
	}

	in_a >> one >> two >> three;
	in_a >> four;
	in_a >> five;

	cout << "Our previous number are " << one << "to "<< five << endl;
	cout << "Numbers total to: " << (one + two + three + four);
	cout << "And our character is: " << five << endl;

	in_a.close();
	return 0;
}