#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool match(string test) {
    return test.size() == 3;
}

// own count if
// 2nd arg is a function pointer
int countStrings(vector<string> &texts, bool (*cb)(string test)) {
    int tally = 0;
    for (int i = 0; i < texts.size(); i++) {
        if(cb(texts[i])) {
            tally++;
        }
    }
    return tally;
}

int main() {
    vector<string> texts;
    texts.push_back("one");
    texts.push_back("two");
    texts.push_back("three");
    texts.push_back("two");
    texts.push_back("four");
    texts.push_back("two");
    texts.push_back("three");

    cout << match("one") << endl;

    // prints out the number of strings that have 3 characters in them
    cout << count_if(texts.begin(), texts.end(), match) << endl;

    cout << countStrings(texts, match) << endl;

    return 0;
}