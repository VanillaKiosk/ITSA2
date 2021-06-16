#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    if(a<0 && b<0)
        cout << a << "+" << b << "=" << a+b << endl << a << "-" << b << "=" << a-b << endl << a << "*" << b << "=" << a*b << endl << a << "/" << b << "=" << a/b << "..." << a%b << endl;
    else if(a<0)
        cout << a << "+" << b << "=" << a+b << endl << a << "-" << b << "=" << a-b << endl << a << "*" << b << "=" << a*b << endl << a << "/" << b << "=" << (a/b)-1 << "..." << b+(a%b) << endl;
    else
        cout << a << "+" << b << "=" << a+b << endl << a << "-" << b << "=" << a-b << endl << a << "*" << b << "=" << a*b << endl << a << "/" << b << "=" << a/b << "..." << a%b << endl;
    return 0;
}