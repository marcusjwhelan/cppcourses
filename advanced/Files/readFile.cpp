#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string inFileName = "test.txt";
    ifstream inFile; // or fstream

    inFile.open(inFileName); // inFile.open(inFileName, ios:in);

    if (inFile.is_open()) {
        string line;
        /*
         *
        inFile >> line;
        cout << line << endl;
         * */
        while(inFile) { // or while not End Of File > eof      !inFile.eof()
            getline(inFile, line);
            cout << line << endl;
        }

        inFile.close();
    } else {
        cout << "Cannot open file: " << inFileName << endl;
    }

    return 0;
}
