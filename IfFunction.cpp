#include<iostream>

using namespace std;

void teacher(int grade);

int main() {

	int input;

	cout << "Whats your grade?" << endl;
	cout << endl;
	cin >> input;

	teacher(input);
	
}

void teacher(int grade) {
	
	if (grade >= 90)
		cout << "You have an A!" << endl;
	else if (grade >= 80)
		cout << "You have a B" << endl;
	else if (grade >= 70)
		cout << "you got...a C" << endl;
	else if (grade >= 60)
		cout << "you barely passed...with a D" << endl;
	else
		cout << "F" << endl;

}
