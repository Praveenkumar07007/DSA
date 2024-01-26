#include <iostream>
using namespace std;
int main()
{
    float arr[5] = {2.3, -6.2, 3.1, -7.1, 2.4}; 
    int count = 0; 
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] < 0)
        {
            count++;
        }
        else
        {
            arr[i - count] = arr[i];
        }
    }

    for (int i = 0; i < 5 - count; i++)
    {
        cout << arr[i] << " ";
    }
}