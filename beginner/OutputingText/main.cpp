#include <iostream>
/* can have -> using namespace std;
 *
 * instead of using std::cout and std::endl as seen below
 * */
int main() {
    std::cout << "starting program... " << std::flush;

    std::cout << "This is some text." << std::endl;

    std::cout << "banana. " << "Apple. " << "Orange." << std::endl;

    std::cout << "This is some more text." << std::endl;

    return 0;
}