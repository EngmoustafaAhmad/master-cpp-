#include <iostream>
#include <fstream>
using namespace std;

int main() {

ofstream writeFile("data.txt");
writeFile << "text";
writeFile.close();

}
