#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int a;
    while(cin >> a){
        a *= 1000;
        a = a / 238 + 1;
        cout << a << endl;
    }
    return 0;
}