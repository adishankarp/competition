  1 #include <iostream>
  2 #include <vector>
  3
  4 using namespace std;
  5
  6 void countingSort(vector<int>& arr) {
  7     if (arr.empty()) return;
  8
  9     int max_element = arr[0];
 10     for (int num : arr) {
 11         if (num > max_element) {
 12             max_element = num;
 13         }
 14     }
 15
 16     vector<int> count(max_element + 1, 0);
 17
 18     for (int num : arr) {
 19         count[num]++;
 20     }
 21
 22     for (int i = 1; i <= max_element; i++) {
 23         count[i] += count[i - 1];
 24     }
 25
 26     vector<int> output(arr.size());
 27
 28     for (int i = arr.size() - 1; i >= 0; i--) {
 29         output[count[arr[i]] - 1] = arr[i];
 30         count[arr[i]]--;
 31     }
 32
 33     for (int i = 0; i < arr.size(); i++) {
 34         arr[i] = output[i];
 35     }
 36 }
 37
 38 void printArray(const vector<int>& arr) {
 39     for (int num : arr) {
 40         cout << num << " ";
 41     }
 42     cout << endl;
 43 }
 44
 45 int main() {
 46     vector<int> arr = {9, 5, 7, 3, 1, 8, 6, 2, 4};
 47
 48     cout << "Original array: ";
 49     printArray(arr);
 50
 51     countingSort(arr);
 52
 53     cout << "Sorted array: ";
 54     printArray(arr);
 55
 56     return 0;
 57 }