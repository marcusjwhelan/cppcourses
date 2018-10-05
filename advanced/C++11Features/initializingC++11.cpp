#include <iostream>
#include <vector>
using namespace std;

int main() {

    int value{5};
    cout << value << endl;

    string text{"Hello"};
    cout << text << endl;

    int numbers[]{1, 2, 3, 4};
    cout << numbers[1] << endl;

    int *pInts = new int[3]{1, 2, 3};
    cout << pInts[1] << endl;
    delete [] pInts;

    int value1{};
    cout << value1 << endl;

    int *pSomething{&value};
    int *pSomething2{}; // equivelent to int *pSomething2 = null pointer; 0x0
    cout << *pSomething << endl;

    int numbers2[5]{};
    cout << numbers2[1] << endl; // 0

    struct {
        int value;
        string text;
    } s1 = {5, "Hi"}; // old

    struct {
        int value;
        string text;
    } s2{5, "Hi"};
    // or
    struct {
        int value = 3;
        string text = "WOO";
    } s3;
    cout << s3.value << endl;

    vector<string> strings{"one", "tow", "three"};
    cout << strings[2] << endl;

    return 0;
}
