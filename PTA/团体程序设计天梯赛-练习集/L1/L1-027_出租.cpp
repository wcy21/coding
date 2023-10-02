#include <iostream>
#include <vector>

const int TELN = 11;

using namespace std;

int main() {
	string s;
	cin >> s;

    int a[10] = {0};
    for (int i = 0; i < TELN; ++i)
        ++a[s[i] - '0'];

    vector<int> vec, index;
    for (int i = 9; i >= 0; --i)
        if (a[i] != 0)
            vec.push_back(i);

	for (int i = 0; i < TELN; ++i)
        for (int j = 0; j < vec.size(); ++j)
            if ((s[i] - '0') == vec[j])
                index.push_back(j);

	cout << "int[] arr = new int[]{" << vec[0];
	for (int i = 1; i < vec.size(); ++i)
		cout << ',' << vec[i];
	cout << "};" << endl << "int[] index = new int[]{" << index[0];
	for (int i = 1; i < index.size(); ++i) {
		cout << ',' << index[i];
	}
	cout << "};" << endl;

	return 0;
}