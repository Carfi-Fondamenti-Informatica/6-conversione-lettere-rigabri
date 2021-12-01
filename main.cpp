#include <iostream>
#include "lib.h"

using namespace std;

int main(){
    char c;
    cin >> c;
    if (isChar(c)) {
        cout << convert(c);
    }
    else
        cout << "errore";
}
