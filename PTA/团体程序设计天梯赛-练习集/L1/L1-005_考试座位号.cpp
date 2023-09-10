#include <iostream>
#include <map>

using namespace std;

struct node {
    string ticketn;
    string examn;
};

int main() {
    map<string, node> m;
    int N, M;

    cin >> N;
    for (int i = 0; i < N; i++) {
        string passn, testn, examn;
        cin >> passn >> testn >> examn;
        m.insert({testn, {passn, examn}});
    }

    cin >> M;
    for (int i = 0; i < M; i++) {
        string testn;
        cin >> testn;
        if (m.find(testn) != m.end())
            cout << m[testn].ticketn << ' ' << m[testn].examn << endl;
    }

    return 0;
}