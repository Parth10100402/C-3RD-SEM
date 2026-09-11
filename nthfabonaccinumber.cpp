#include <iostream>
using namespace std;

void fibonacci(int n, int a, int b, int count)
{
    if (count == n)
    {
        cout << b;
        return;
    }

    fibonacci(n, b, a + b, count + 1);
}

int main()
{
    int n;
    cin >> n;

    if (n == 0)
        cout << 0;
    else if (n == 1)
        cout << 1;
    else
        fibonacci(n, 0, 1, 1);

    return 0;
}

