#include <iostream>
#include <string>

using namespace std;

bool is_num(string& s) {
	for (auto x : s)
		if (!isdigit(x))
			return false;
	return true;
}

void stoi(int& num, string& s) {
	s.erase(0, s.find_first_not_of(' '));
	if (is_num(s))
		num = stoi(s);
	if (!is_num(s) || num > 1000 || num < 1)
		num = -1;
}

string itos(int& num) {
	if (num == -1)
		return "?";
	else
		return to_string(num);
}

int main() {
	string sa, sb;
	cin >> sa;
	getline(cin, sb);

	int na = -1, nb = -1, sum = -1;
	stoi(na, sa);
	stoi(nb, sb);
	if (na != -1 && nb != -1)
		sum = na + nb;

	cout << itos(na) << " + " << itos(nb) << " = " << itos(sum) << endl;

	return 0;
}