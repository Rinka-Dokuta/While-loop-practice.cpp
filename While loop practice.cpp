#include<iostream>
#include<Windows.h>
using namespace std;

int main() {
	char choice = 'm'; //Dummy value
	while(choice != 'q') {
		Beep(rand() % 1000, rand() % 1000);
		cout << "press any key, q to quit" << endl;
		cin >> choice;
		if (choice == 'q') {
			cout << "No more beep :(" << endl;
			break;
		}
	}
	int num = 6;
	while (num <= 36) {
		cout << num << endl;
		num += 3;
	}

}
