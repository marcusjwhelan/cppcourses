#include <iostream>
#include <vector>
using namespace std;

int main() {
    //                    3 rows, 4 columns, all equal to
    vector< vector<int> > grid(3, vector<int>(4, 0));

    grid[1].push_back(8); // don't have to have them all the same size like an array.

    for (int row = 0; row < grid.size(); row++) {
        for (int col = 0; col < grid[row].size(); col++) {
            cout << grid[row][col] << flush;
        }
        cout << endl;
    }


    return 0;
}