#include <iostream>
using namespace std;

int reverseNumber(int n, int rev)
{
    if (n == 0)
        return rev;

    return reverseNumber(n / 10, rev * 10 + n % 10);
}

int main()
{
    int n;
    cin >> n;

    cout << "Reverse = " << reverseNumber(n, 0);

    return 0;
}
