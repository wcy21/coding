#include <iostream>
#include <iomanip>

using namespace std;

int sum_digit(int num) {
	return num ? (num % 10 + sum_digit(num / 10)) : 0;
}

int main()
{
	int n, number;
	cin >> n;
	while (n--) {
		cin >> number;

		if (sum_digit(number / 1000) == sum_digit(number % 1000))
			cout << "You are lucky!" << endl;
		else
			cout << "Wish you good luck." << endl;
	}

	return 0;
}