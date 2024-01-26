#include <iostream>
using namespace std;

int binarySearch(int array[], int x, int low, int high) {

  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (array[mid] == x)
      return mid;

    if (array[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1;
}

int main(void) {
  int array[] = {5, 9, 17, 23, 25, 45, 59 ,63 ,71, 89};
  int x = 17;
  int n = sizeof(array) / sizeof(array[0]);
  int result = binarySearch(array, x, 0, n - 1);
  if (result == -1)
    cout << "elements not found" << endl;
  else
    cout<<"elements found :" <<result<< endl;
}