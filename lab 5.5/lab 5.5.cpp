#include <iostream>

#include <cmath>

#include <iomanip>

using namespace std;

int countRecursionDepth = 0;

int Q(int m, int n)
{
    countRecursionDepth++;
    if (m < 0 || n <= 0)
    {
        return 0;
    }
    if (m == 1 || n == 1)
    {
        return 1;
    }
    if (m == n)
    {
        return 1 + Q(m, n - 1);
    }

    if (m < n)
    {
        return Q(m, m);
    }

    return Q(m, n - 1) + Q(m - n, n);
}

int main()
{
    int m = 1;
    int n = 1;
    int result = Q(m, n);
    cout << "m="; cin >> m;
    cout << "n="; cin >> n;
    cout << "Q(" << m << ", " << n << ") = " << result << endl;
    cout << "Depth " << countRecursionDepth << endl;

    return 0;
}



