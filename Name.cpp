#include<iostream>
#include <algorithm>
#include<vector>
#include<random>
#include<Windows.h>

using namespace std;

int main() {
	srand(time(NULL));
	int pair = 0;
	string input;
	vector<string> names;

	while (input != "q") {
		cout << "enter names, enter 'q' to stop" << endl;
		cin >> input;
		if (input != "q")
			names.push_back(input);
		system("cls");
	}

	sort(names.begin(), names.end());

	for (int i = 0; i < names.size(); i++)
		cout << names[i] << " ";

	cout << endl;
	random_shuffle(names.begin(), names.end());
	random_shuffle(names.begin(), names.end());
	cout << "Shuffling";
	cout << endl;
	for (int i = 0; i < names.size()-1; i++) {
		
		pair += 1;
		cout << "Pair " << pair << " : ";
		cout << names[i]<<" ";
		if (i > names.size()-1) {

			cout << names[i];
			cout << names[i + 1] << endl;

		}
		else
			i += 1;
			cout << names[i] << endl;
	
	}

}
