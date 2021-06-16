#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double a;
    while(cin >> a){
            cout << fixed << setprecision(1) << a*9/5+32 << endl;
    }
    return 0;
}