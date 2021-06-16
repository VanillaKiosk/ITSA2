#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int a;
    while(cin >> a) {
        if(a <= 800)
            cout << fixed << setprecision(1) << a*(double)0.9 << endl;
        else if(a < 1500)
            cout << fixed << setprecision(1) << a*(double)0.81 << endl;
        else
            cout << fixed << setprecision(1) << a*(double)0.711 << endl;
    }
    return 0;
}