#include<iostream>
#include<vector>
using namespace std;

int findl(int arr[], int n, int l){
    for(int i = 0; i < n; i++){
        if(arr[i] == l)
            return i;
    }
    return -1; // Return -1 if not found
}

int findr(int arr[], int n, int r){
    for(int i = 0; i < n; i++){
        if(arr[i] == r)
            return i;
    }
    return -1; // Return -1 if not found
}

int main()
{
    int n;
    cin >> n;
    int l, r;
    cin >> l >> r;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int leftIndex = findl(arr, n, l);
    int rightIndex = findr(arr, n, r);

    if (leftIndex == -1 || rightIndex == -1 || rightIndex <= leftIndex) {
        cout << "Invalid input or range not found!" << endl;
    } else {
        int sum = 0;
        for(int i = leftIndex; i <= rightIndex; i++){
            sum += arr[i];
        }
        cout << "Our total sum between this range is " << sum << endl;
    }

    return 0;
}
