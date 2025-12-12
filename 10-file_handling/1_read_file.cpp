
#include <iostream>
#include <fstream>
using namespace std;

int main() {

    // 1️⃣ Create & Write to File
    ofstream writeFile("data.txt");   // create / open file for writing

    if (!writeFile) {
        cout << "Error opening file for writing!" << endl;
        return 1;
    }

    writeFile << "Hello, this is a test file!" << endl;
    writeFile << "C++ file handling is easy!" << endl;

    writeFile.close();
    cout << "Data written successfully.\n";

    // 2️⃣ Read from File
    ifstream readFile("data.txt");    // open file for reading

    if (!readFile) {
        cout << "Error opening file for reading!" << endl;
        return 1;
    }

    string line;
    cout << "\nReading file content:\n";

    while (getline(readFile, line)) {
        cout << line << endl;
    }

    readFile.close();

    return 0;
}
