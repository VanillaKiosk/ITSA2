#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int a, b, c;
    while(cin >> a >> b >> c){
        cout << fixed << setprecision(1) << "Trapezoid area:"  << (a+b)*c/2.0 << endl;
    }
    return 0;
}