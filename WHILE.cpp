#include<iostream>
using namespace std;

int num;

int main() {
	int i = 0;
	int DOOP = -20;
	int OP = 20;
	int GUSHY = 41;

	/*while (i != 22) {
		cout << i << endl;
		i+=2;
	}*/

	do {
		cout << i;
		i += 2;
	} while (i != 22);

	cout << endl;

	cout << "input ur number" << endl;
	cin >> num;

	while (DOOP != GUSHY) {
		
		if (DOOP % num == 0) {
			cout << DOOP << endl;
			DOOP++;
		}
		else
			DOOP++;
	}

}
