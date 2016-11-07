#include <bits/stdc++.h>
#define PI 3.141592654
using namespace std;
int main()
{

    double x, ret, val;

    x = 90.0;
    val = PI / 180;
    ret = sin(x*val);
    printf("The sine of %lf is %lf degrees", x, ret);
    return 0;
}
