 #include <iostream>
  2 #include <algorithm>
  3 using namespace std;
  4
  5 //O(n^3)
  6 void algorithm1(int n, int array[]) {
  7     int best = 0;
  8     for (int a = 0; a < n; a++) {
  9         for (int b = a; b < n; b++) {
 10             int sum = 0;
 11             for (int k = a; k <= b; k++) {
 12                 sum += array[k];
 13             }
 14             best = max(best, sum);
 15         }
 16     }
 17     cout << "Algorithm 1: " << best << "\n";
 18 }
 19
 20 //O(n^2)
 21 void algorithm2(int n, int array[]) {
 22     int best = 0;
 23     for (int a = 0; a < n; a++) {
 24         int sum = 0;
 25         for (int b = a; b < n; b++) {
 26             sum += array[b];
 27             best = max(best, sum);
 28         }
 29     }
 30     cout << "Algorithm 2: " << best << "\n";
 31 }
 32
 33 //O(n)
 34 void algorithm3(int n, int array[]) {
 35     int best = 0, sum = 0;
 36     for (int k = 0; k < n; k++) {
 37         sum = max(array[k], sum + array[k]);
 38         best = max(best, sum);
 39     }
 40     cout << "Algorithm 3: " << best << "\n";
 41 }
 42
 43 int main() {
 44
 45     int n = 8;
 46     int array[] = {-1, 2, 4, -3, 5, 2, -5, 2};
 47
 48
 49     algorithm1(n, array);
 50     algorithm2(n, array);
 51     algorithm3(n, array);
 52
 53     cout << "Hello World!";
 54
 55     int inputSize = 100000;
 56
 57
 58     if (inputSize <= 10)
 59         cout << "Estimation: O(n!)\n";
 60     else if (inputSize <= 20)
 61         cout << "Estimation: O(2^n)\n";
 62     else if (inputSize <= 500)
 63         cout << "Estimation: O(n^3)\n";
 64     else if (inputSize <= 5000)
 65         cout << "Estimation: O(n^2)\n";
 66     else if (inputSize <= 1000000)
 67         cout << "Estimation: O(n log n) or O(n)\n";
 68     else
 69         cout << "Estimation: O(1) or O(log n)\n";
 70
 71     return 0;
 72 }