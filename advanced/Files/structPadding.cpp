#include <iostream>
#include <fstream>
using namespace std;

// turn off the struct padding so it can be written propertly
#pragma pack(push, 1) // 1 align this data and whatever follows with single byte boundaries
struct Person {
    // string name; can't use string. string objects store the reference so boo
    char name[50]; // 50 char max
    int age;
    double height;
};
#pragma pack(pop) // turn off packing

int main() {
    // cout << sizeof(Person) << endl; // 62 not 64 when packed :D

    Person someone = {"Frodo", 220, 0.8};

    string fileName = "test.bin"; // binary file

    // WRITE BINARY //////////////////////////////////////
    ofstream outputFile;
    outputFile.open(fileName, ios::binary); // set file format as binary, if fstream -> ios::binary|ios::out

    if (outputFile.is_open()) {

        // outputFile.write((char *)&someone, sizeof(Person)); // write wants a char * 
        // newer way
        outputFile.write(reinterpret_cast<char *>(&someone), sizeof(Person));

        outputFile.close();
    } else {
        cout << "Could not create file: " << fileName << endl;
    }

    // READ BINARY  //////////////////////////////////////
    Person someoneElse = {};

    ifstream inputFile;
    inputFile.open(fileName, ios::binary); // set file format as binary, if fstream -> ios::binary|ios::out

    if (inputFile.is_open()) {

        // inputFile.write((char *)&someone, sizeof(Person)); // write wants a char *
        // newer way
        inputFile.read(reinterpret_cast<char *>(&someoneElse), sizeof(Person));

        inputFile.close();
    } else {
        cout << "Could not open file: " << fileName << endl;
    }

    cout << someoneElse.name << ", " << someoneElse.age << ", " << someoneElse.height << endl;

    return 0;
}