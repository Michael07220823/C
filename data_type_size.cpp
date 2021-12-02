#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    cout << "--------------------------------------" << endl;
    cout << "short       : " << sizeof(short)        << " bytes" << endl;
    cout << "int         : " << sizeof(int)          << " bytes" << endl;
    cout << "long        : " << sizeof(long)         << " bytes" << endl;
    cout << "long long   : " << sizeof(long long)    << " bytes" << endl;
    cout << "long int    : " << sizeof(long int)     << " bytes" << endl;
    cout << "float       : " << sizeof(float)        << " bytes" << endl;
    cout << "double      : " << sizeof(double)       << " bytes" << endl;
    cout << "long double : " << sizeof(long double)  << " bytes" << endl;
    cout << "char        : " << sizeof(char)         << " bytes" << endl;
    cout << "--------------------------------------" << endl;

    return 0;
}
