#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>
using namespace std;

// function pointer
bool check(string &test) {
    return test.size() == 3;
}

// functor
class Check {
public:
    bool operator()(string &test) {
        return test.size() == 5;
    }
} check1;

// will allow to call anything that accepts a string and returns a bool
// return type is bool(params) and name
void run(function<bool(string&)> check) {
    string test = "stars";
    cout << check(test) << endl;
}

int main() {
    int size = 5;

    vector<string> vec {"One", "Two", "Three"};

    auto lambda = [size](string test){ return test.size() == size;};

    int count1 = count_if(vec.begin(), vec.end(), lambda);
    cout << count1 << endl;

    int count2 = count_if(vec.begin(), vec.end(), check);
    cout << count2 << endl;

    int count3 = count_if(vec.begin(), vec.end(), check1);
    cout << count3 << endl;


    // function types
    cout << "FUNCTION TYPE" << endl;
    run(lambda);
    run(check1);
    run(check);

    // define local variables
    function<int(int, int)> add = [](int one, int two){return one + two;};

    cout << add(7,3) << endl;


    /*
     * Mutable Lambdas
     * */
    int cats = 5;
    [cats]() mutable {
        cats = 8;
        cout << cats << endl; // 8
    }();
    cout << cats << endl; // 5

    
    
    return 0;
}