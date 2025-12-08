#include <iostream>
using namespace std;

void passByReference(int& x) {
    x = 200;   // modifies the original variable
}

int main() {
    int a = 10;
    passByReference(a);
    cout << "After passByReference, a = " << a << endl; // becomes 200
    return 0;
}
