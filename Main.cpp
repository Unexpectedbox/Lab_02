#include <iostream>

using std::cout;
using std::endl;
using std::cin;
int age;
int height;

int main()
{
	cout << "What is your age?" << endl;
	cin >> age;

	cout << "What is your height in centimeters?" << endl;
	cin >> height;

	if (age >= 14 && height >= 130) {
		cout << "You are allowed to ride the rollercoaster!" << endl;

	}
	else if (age < 14 && height < 130) {
		cout << "We are sorry you are not allowed to ride the rollercoaster." << endl;

	}
	else if (age < 14) {
		cout << "We are sorry you are not old enough to be allowed to ride the rollercoaster." << endl;

	}
	else if (height < 130) {
		cout << "We are sorry you are not tall enough to be allowed to ride the rollercoaster." << endl;

	}
		
	return 0;
}