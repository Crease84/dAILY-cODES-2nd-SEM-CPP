#include <iostream>
using namespace std;


int main() {
    int bar[10];
    int numb = 0;

    cin >> bar[0];
    cin >> bar[1];
    cin >> bar[2];
    cin >> bar[3];
    cin >> bar[4];
    cin >> bar[5];
    cin >> bar[6];
    cin >> bar[7];
    cin >> bar[8];
    cin >> bar[9];

    for (int i = 0; i < 10; i++)
        if (bar[i] > numb)
            numb = bar[i];


    cout << "the Largest number is: " << numb << endl;
