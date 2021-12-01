#include <iostream>
#include "lib.h"

int main(){
    char c;
    cin >> c;
    if (isChar(c)) {
        cout << convert(c);
    }
    else
        cout << "errore";
}
