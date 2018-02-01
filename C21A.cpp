#include <iostream>
using namespace std;
int s;
int f(int n)
{
    int i = 0, j = 1;
    while (n > 0)
    {
        i ++;
        n /= 10;
        j *= 10;
    }
    i --;
    j /= 100;
    return i * j;
}
int main()
{
    int n;
    cin >> n;
    cout << f(n);
}
