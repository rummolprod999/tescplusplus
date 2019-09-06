#include <iostream>
using namespace std;
typedef char CHAR, *PSTR;
struct A
{
    constexpr const static double x = 10.0;
};


int main()
{
    int i = 0, &r = i, t = 5;
    const int ci = i, &cr = ci;
    auto e = &ci;
    e = &t;
    int *const pp = &t;
    cout << typeid(e).name() << endl;
    return 0;
}