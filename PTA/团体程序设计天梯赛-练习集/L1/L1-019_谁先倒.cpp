#include <iostream>

using namespace std;

struct node {
    int lmt, now, say, show;
} A, B;

int main() {
    int N, sum;
	cin >> A.lmt >> B.lmt >> N;
	while (N--) {
		cin >> A.say >> A.show >> B.say >> B.show;
        sum = A.say + B.say;
        if (A.show != B.show && A.show == sum) {
            ++A.now;
            if (A.now > A.lmt) {
                cout << 'A' << endl << B.now << endl;
                break;
            }
        }
        if (A.show != B.show && B.show == sum) {
            ++B.now;
            if (B.now > B.lmt) {
                cout << 'B' << endl << A.now << endl;
                break;
            }
        }
	}

	return 0;
}