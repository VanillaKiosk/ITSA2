#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int a, filter = 1;
    while(cin >> a) {
        filter = 128;
        while(filter > 0) {
            if(a & filter)
                cout << "1";
            else
                cout << "0";
            filter >>= 1;
        }
        cout << endl;
    }
    return 0;
}