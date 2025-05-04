// Check if a number is Palindrome
#include <iostream>
using namespace std;

int reversedigit(int n)
{
    int rev = 0;
    while (n > 0)
    {
        int k = n % 10;
        rev = rev * 10 + k;
        n = n / 10;
    }
    return rev;
}

int main()
{
    int n;
    cin >> n;
    int original = n;
    int ans = reversedigit(original);
    if (original == ans)
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}
