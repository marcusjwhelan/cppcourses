#include <iostream>
#include <fstream>
using namespace std;

int main() {

    string filename = "stats.txt";
    ifstream input;

    input.open(filename);

    if (!input.is_open()) {
        return 1;
    }

    while(input) {
        string line;

        getline(input, line, ':');

        int population;
        input >> population;

        // check if error
        if (!input) { // overloaded to tell us if error or not
            break; // don't get empty line
        }

        // discard \n
        // input.get();
        input >> ws; // c++ 11 White space. discard white space

        cout << "'" << line << "'" << " -- " << "'" << population << "'" << endl;

    }

    input.close();


    return 0;
}
