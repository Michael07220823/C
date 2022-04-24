#include <iostream>
#include <string>

using namespace std;

int main(void){
    int i = 0;
    float x = 1.0;

    std::string s1 = std::to_string(i);
    std::string s2 = std::to_string(x);

    cout << s1 << endl;
    cout << s2 << endl;

    return 0;
}