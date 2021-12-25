#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int num = 50, sum = 0;
    
    while(num < 100){
        sum += num;
        ++num;
        cout << "Num: " << num << "Sum: " << sum << endl;
    }
    return 0;
}
