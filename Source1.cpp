#include <iostream>
#include <string>

using namespace std;

double addFunc(double firstNum, double secondNum) {
	return firstNum + secondNum;
}

double subtFunc(double firstNum, double secondNum) {
	return firstNum - secondNum;
}

double multFunc(double firstNum, double secondNum) {
	return firstNum * secondNum;
}

double divFunc(double firstNum, double secondNum) {
	return firstNum / secondNum;
}

int main() {
	double num1 = 0;
	char oper = 'a';
	double num2 = 0;
	
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