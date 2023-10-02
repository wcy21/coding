#include <iostream>
#include <string>

using namespace std;

int main() {
	int na, nb;
	cin >> na >> nb;

	string sa, sb, sret;
    
	sa = to_string(na);

	if (nb < 0)
		sb = "(" + to_string(nb) + ")";
	else
		sb = to_string(nb);

	if (nb == 0)
		sret = "Error";
	else {
		double ret = (double)na / nb;
		sret = to_string(ret);
		sret.erase(sret.length() - 5, 4);
	}

	cout << sa << '/' << sb << '=' << sret << endl;

	return 0;
}