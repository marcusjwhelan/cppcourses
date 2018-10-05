#include <iostream>
#include <fstream>
using namespace std;

int main() {

    // ofstream outFile; // conveniece class
    fstream outFile;
    
    string outFileName = "test.txt";

    // outFile.open(outFileName);
    outFile.open(outFileName, ios::out); // static variable of ios


    if (outFile.is_open()) {
        outFile << "Hello There" << endl;
        outFile << 123 << endl;
        outFile.close();
    } else {
        cout << "Coule not create file: " << outFileName << endl;
    }

    return 0;
}