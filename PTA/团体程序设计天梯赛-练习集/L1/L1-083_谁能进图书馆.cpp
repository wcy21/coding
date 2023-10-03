#include <iostream>

using namespace std;

int main() {
    int l1, l2, a[3], x = 2, y = 1;
    cin >> l1 >> l2 >> a[1] >> a[2];
	if (a[1] > a[2])
		swap(y, x);

    if (a[y] < l1 && a[x] >= l2) {
        cout << a[1] << "-Y " << a[2] << "-Y" << endl; 
        cout << "qing "<< x << " zhao gu hao " << y << endl;
    }
    else if (a[y] >= l1 && a[x] >= l1) {
        cout << a[1] << "-Y " << a[2] << "-Y" << endl; 
        cout << "huan ying ru guan" << endl;
    }
    else if (a[y] < l1 && a[x] < l1) {
        cout << a[1] << "-N " << a[2] << "-N" << endl; 
        cout << "zhang da zai lai ba" << endl;
    }
    else {
		if (y == 1)
			cout << a[1] << "-N " << a[2] << "-Y" << endl;
		else
			cout << a[1] << "-Y " << a[2] << "-N" << endl;
        cout << x << ": huan ying ru guan" << endl;
    }

    return 0;
}