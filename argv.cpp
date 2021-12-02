#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    if(argc > 0){
        for(int i = 0; i < argc; i++){
            cout << argv[i] << " ";
        }
    }else{
        cout << "argc: " << argc << endl;
    }

}