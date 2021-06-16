#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int a, b, c, d;
    cin >> a;
    b = 60*a;
    cin >> a;
    b += a;
    cin >> a;
    c = 60*a;
    cin >> a;
    c += a;
    if(c<b)
        c += 1440;
    d = c - b;
    a = 0;
    if(d<=0)
        goto final;
    if(d>=120)
        a += 120;
    else
        a += 30*(d/30);
    d -= 120;
    if(d<=0)
        goto final;
    if(d>=120)
        a += 160;
    else
        a += 40*(d/30);
    d -= 120;
    if(d<=0)
        goto final;
    a += 60*(d/30);
final:
    cout << a << endl;
    return 0;
}