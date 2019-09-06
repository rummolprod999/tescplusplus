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
    auto &m = ci, *p = &ci;
    auto tt = &ci;
    const int d = 42;
    auto j = d;
    const auto &k = d;
    auto *v = &d;
    auto v1 = &d;
    const auto j2 = d, &k2 = d;
    cout << typeid(e).name() << endl;
    return 0;
}