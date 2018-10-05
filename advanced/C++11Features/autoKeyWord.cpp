#include <iostream>

using namespace std;

// C++11 has trailing return types :D
/*auto test() -> int {
    return 100;
}*/
template <class T, class S>
auto test(T value1, S value2) -> decltype(value1 + value2) {
    return value1 + value2;
}

int get() {
    return 999;
}

auto test2() -> decltype(get()) {
    return get();
}


int main() {

    static int value = 7;
    // or C++ 98
    // auto int value2 = 7;
    // or C++11
    auto value3 = "Hello";

    cout << value << value3 << endl;

    cout << test(5, 6) << endl;

    cout << test2() << endl;

    return 0;
}