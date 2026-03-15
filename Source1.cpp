#include <iostream>
#include <string>

using namespace std;

int addFunc(int firstNum, int secondNum) {
	return firstNum + secondNum;
}

int subtFunc(int firstNum, int secondNum) {
	return firstNum - secondNum;
}

int multFunc(int firstNum, int secondNum) {
	return firstNum * secondNum;
}

string divFunc(int firstNum, int secondNum) {
	int div = 0;
	int mod = 0;

	div = firstNum / secondNum;
	mod = firstNum % secondNum;

	return to_string(div) + " remainder " + to_string(mod);
}

int main() {
	int num1 = 0;
	char oper = 'a';
	int num2 = 0;
	
	std::cout << "What is your first number? ";
	std::cin >> num1;

	std::cout << "What is your second number? ";
	std::cin >> num2;

	std::cout << "What is your operator? (a/s/m/d) ";
	std::cin >> oper;
	
	if (oper == 'a'){
		std::cout << addFunc(num1, num2);
	}
	else if (oper == 's') {
		std::cout << subtFunc(num1, num2);
	}
	else if (oper == 'm') {
		std::cout << multFunc(num1, num2);
	}
	else if (oper == 'd') {
		std::cout << divFunc(num1, num2);
	}
	else {
		std::cout << "Invalid operator.";
	}

}