#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double a;
    while(cin >> a){
        cout << fixed << setprecision(1) << (a*a)+0.01 << endl;
    }
    return 0;
}