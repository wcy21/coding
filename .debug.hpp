#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <map>
#include <unordered_map>
#include <queue>
#include <set>
#include <unordered_set>
#include <stack>
#include <string>
#include <vector>

using namespace std;

template <typename T>
void printArray(T a[], int l, int r, string name = "array") {
    cout << "- " << name << endl;
    while (l <= r)
        cout << a[l++] << ' ';
    cout << endl;
}

template <typename T> void printLoop(T loop) { cout << "-- " << loop << endl; }

template <typename T> void printVar(T var, string name) {
    cout << "- " << name << endl << var << endl;
}

template <typename T> void printResult(T res) {
    cout << "--- output" << endl << res << endl;
}

template<typename T>
void printSTL(T& x, string name = "") {
    if (!name.empty())
        cout << name << ":" << endl;

    for (auto obj: x)
        cout << obj << ' ';
    cout << endl;
}