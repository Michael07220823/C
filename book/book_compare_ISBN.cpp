#include <iostream>
#include "Sales_item.h"

using namespace std;

int main(){
    Sales_item book1, book2;

    cin >> book1 >> book2;

    if (book1.isbn() == book2.isbn()){
        cout << "Book1 and Book2 ISBN ID same." << endl;
    
        return 0;
    }else{
        cerr << "Book1 and Book2 ISBN ID not same." << endl;
        return -1;
    }


}