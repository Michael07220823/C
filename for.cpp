#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

int main(int argc, char const *argv[])
{   
    int count = 10000;
    for (int i = 0; i < count; i++)
    {
        cout << i << endl;
        // 停頓一秒
        this_thread::sleep_for(chrono::seconds(1));
    }
    
    return 0;
}

/*
Reference
    * https://shengyu7697.github.io/std-this_thread-sleep_for/
*/