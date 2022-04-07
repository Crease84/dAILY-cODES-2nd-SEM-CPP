#include<iostream>
//#include<Windows.h>
using namespace std;

class Goomba {
private:
	int xPosition;
	int yPosition;
	string direction;
public:
	Goomba(int x, int y);
	void walk();
	void print();

};

int main() {

	//Goomba g1;
	//Goomba g2;
	//g1.setPostion(300, 200);
	
	Goomba Bob(300, 200); //instantiate with constructor
	Goomba Derek(10, 200);
	Goomba Mo(790, 200);
 //LOOP------------
	while (1) {//game loop
		//physics engine!
		Bob.walk(); 
		Derek.walk();
		Mo.walk();
		//"render" section
		Bob.print();
		Derek.print();
		Mo.print();
		//"render" section
		system("timeout /t 2 >nul");
		system("CLS");
	}

}

Goomba::Goomba(int x, int y) {
	xPosition = x;
	yPosition = y;
	direction = "left";

}

void Goomba::walk() {
	if (direction == "left")
		xPosition -= 10;
	if (xPosition <= 0)
		direction = "right";

	if (direction == "right")
		xPosition += 10;
	if(xPosition >= 800)
		direction = "left";
}

void Goomba::print(){ 

	cout << "Hi, I'm a goomba and I'm at " << "x =" << xPosition << " and y=" << yPosition << " And im moving " << direction << endl;

	if (direction == "left") {
		cout << char(60);
	}
	else {
		cout << char(62);
	}
	cout << endl;
}
