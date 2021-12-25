#include <Windows.h>

int main(int argc, char const *argv[])
{
    /* code */
    int time_length = 3000;

    while(time_length > 1000){
        Beep(1046, time_length);
        time_length -= 500;
    }

    while(time_length > 0){
        Beep(1046, time_length);
        time_length -= 10;
    }

    return 0;
}
