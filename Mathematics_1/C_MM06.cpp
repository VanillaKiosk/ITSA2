#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int a;
    while(cin >> a){
        cout << fixed << setprecision(1) << a*(double)1.6 << endl;
    }
    return 0;
}