#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int a;
    while(cin >> a){
        cout << a/86400 << " days" << endl;
        a %= 86400;
        cout << a/3600 << " hours" << endl;
        a %= 3600;
        cout << a/60 << " minutes" << endl;
        a %= 60;
        cout << a << " seconds" << endl;
    }
    return 0;
}