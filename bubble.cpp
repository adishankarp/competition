#include <iostream>
  2 #include <vector>
  3
  4 using namespace std;
  5
  6 void swap(int a, int b) {
  7     int temp = a;
  8     a = b;
  9     b = temp;
 10 }
 11
 12 void bubbleSort(vector<int> arr) {
 13     int n = arr.size();
 14     bool swapped;
 15
 16     for (int i = 0; i < n - 1; i++) {
 17         swapped = false;
 18
 19         for (int j = 0; j < n - i - 1; j++) {
 20             if (arr[j] > arr[j + 1]) {
 21                 swap(arr[j], arr[j + 1]);
 22                 swapped = true;
 23             }
 24         }
 25
 26         if (!swapped)
 27             break;
 28     }
 29 }
 30
 31 void printArray(const vector<int> arr) {
 32     for (int num : arr) {
 33         cout << num << " ";
 34     }
 35     cout << endl;
 36 }
 37
 38 int main() {
 39     vector<int> arr = {9, 5, 7, 3, 1, 8, 6, 2, 4};
 40
 41     cout << "Original array: ";
 42     printArray(arr);
 43
 44     bubbleSort(arr);
 45
 46     cout << "Sorted array: ";
 47     printArray(arr);
 48
 49     return 0;
 50 }