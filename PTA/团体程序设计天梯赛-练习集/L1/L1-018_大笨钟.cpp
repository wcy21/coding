#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int hh, mm, cnt = 0;
    char ch;
	cin >> hh >> ch >> mm;
    
	if (hh < 12 || hh == 12 && mm == 0)
		cout << "Only " << setfill('0') << setw(2) << hh << ':' << setw(2) << mm << ".  Too early to Dang.";
	else {
		cnt = hh - 12 + (mm != 0);
		while (cnt--) 
            cout << "Dang";
	}
    
	return 0;
}