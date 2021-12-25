#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int min, max;
    cout << "Please input min value:";
    cin >> min;
    cout << "Please input max value:";
    cin >> max;

    while(min < max){
        cout << "Num: " << min << endl;
        ++min;
    }

    return 0;
}
