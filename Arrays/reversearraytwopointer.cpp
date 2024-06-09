#include <iostream>
using namespace std;

void swap(int &x, int &y) {
  int temp = x;
  x = y;
  y = temp;
}

int main() {
  int arr[5] = {0, 1, 2, 3, 4};
  for (int i = 0; i < 5 / 2; i++) { // Iterate only up to the middle element
    int temp = arr[5 - i - 1];
    swap(arr[i], temp);
  }
  for (int i = 0; i < 5; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}
