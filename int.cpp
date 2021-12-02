#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int a = 0;
    int b = 0;
    int c = 0;
    
    a = (a + 1) * 100;
    b = (b - 10000) / 10;
    c = a * b;

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;

    return 0;
}