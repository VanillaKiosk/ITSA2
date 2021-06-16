#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    unsigned long int a, b;
    while(cin >> a) {
        b = 1;
        for(int i = 2; i <= a; i++)
            b *= i;
        cout << b << endl;
    }
    return 0;
}