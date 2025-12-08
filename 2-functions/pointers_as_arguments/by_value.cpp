#include <iostream>
using namespace std;

void passByValue(int x) {
    x = 100;   // modifies only the copy
}

int main() {
    int a = 10;
    passByValue(a);
    cout << "After passByValue, a = " << a << endl; // still 10
    return 0;
}
