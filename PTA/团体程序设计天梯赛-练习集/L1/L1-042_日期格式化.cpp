#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int yyyy, mm, dd;
    char c;
    cin >> mm >> c >> dd >> c >> yyyy;
    
    cout << setfill('0') << setw(4)  << yyyy << '-' << setw(2)<< mm << '-'
         << setw(2) << dd << endl;
    
    return 0;
}