#include <iostream>
using namespace std;

int sumArray(int a[], int n)
{
    if (n == 0)
        return 0;

    return a[n - 1] + sumArray(a, n - 1);
}

int main()
{
    int n;
    int a[100];

    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Sum = " << sumArray(a, n);

    return 0;
}
