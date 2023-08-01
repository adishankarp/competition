  1 #include <iostream>
  2
  3 using namespace std;
  4
  5
  6 void swap(int& a, int& b) {
  7     int temp = a;
  8     a = b;
  9     b = temp;
 10 }
 11
 12 int partition(int arr[], int low, int high) {
 13     int pivot = arr[high];
 14     int i = low - 1;
 15
 16     for (int j = low; j < high; j++) {
 17         if (arr[j] <= pivot) {
 18             i++;
 19             swap(arr[i], arr[j]);
 20         }
 21     }
 22
 23     swap(arr[i + 1], arr[high]);
 24     return i + 1;
 25 }
 26
 27
 28 void quickSort(int arr[], int low, int high) {
 29     if (low < high) {
 30
 31         int pivotIndex = partition(arr, low, high);
 32
 33
 34         quickSort(arr, low, pivotIndex - 1);
 35         quickSort(arr, pivotIndex + 1, high);
 36     }
 37 }
 38
 39 void printArray(int arr[], int size) {
 40     for (int i = 0; i < size; i++) {
 41         cout << arr[i] << " ";
 42     }
 43     cout << endl;
 44 }
 45
 46 int main() {
 47     int arr[] = {9, 5, 7, 3, 1, 8, 6, 2, 4};
 48     int n = sizeof(arr) / sizeof(arr[0]);
 49
 50     cout << "Original array: ";
 51     printArray(arr, n);
 52
 53     quickSort(arr, 0, n - 1);
 54
 55     cout << "Sorted array: ";
 56     printArray(arr, n);
 57
 58     return 0;
 59 }