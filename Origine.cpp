#include <iostream>
using namespace std;
// sei bellissimo mio programma 


int main() {
	float n, m; 
	int Operation;
	char Continue;
	bool Y = true;
	cout << "Choose a starting number: ";
	cin >> n;
	while (Y) { 
		cout << "Select an operation: press 1 for sum, 2 for subtract, 3 for multiply, 4 for divide " << endl;
		cin >> Operation;
		cout << "Choose the other number ";
		cin >> m;
		switch (Operation) {
			case 1:
				cout << "You have chosen to SUM " << endl;
				n += m;
				break;
			case 2: 
				cout << "You have chosen to SUBTRACT" << endl;
				n -= m;
				break;
			case 3:
				cout << "You have chosen to MULTIPLY" << endl;
				n *= m;
				break;
			case 4:
				cout << "You have chosen to DIVIDE" << endl;
				n /= m; 
				break;
			default:
				cout << "You haven't chosen a valid option" << endl;
				goto exit;
		} 
		cout << "The result is: " << n << endl;
		exit:
		cout << "Do you want to continue? Press 'Y' if yes,'N' if no" << endl;
		cin >> Continue;
		if (Continue == 'N') { Y = false; }
		else if (Continue == 'Y') { Y = true; }
		else { cout << "You haven't chosen a valid option" << endl; goto exit; }
	}
	return 0;
}