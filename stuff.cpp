#include<iostream>
using namespace std;
int main() {

    char map[20][20];

    for (int i = 0; i < 20; i++) {

        for (int x = 0; x < 20; x++) {
            if(rand()%3 == 0 || x == 0 || x == 19 || i == 0 || i == 19)
                map[i][x] = '#';
            else
                map[i][x] = ' ';
        }

    }


    for (int i = 0; i < 20; i++) {
        
        for (int x = 0; x < 20; x++) {
            cout << map[i][x];


        }
        cout << endl;
    }
         

}
