  1 #include <bits/stdc++.h>
  2 using namespace std;
  3 int main() {
  4
  5     //integers
  6     int a = (1ul << 31) -1 ;
  7     cout << "sizeof a = " << sizeof(a) << ", a =" << a << std::endl;
  8
  9     int b = (1ul << 31) ;
 10     cout << "b = " << b << std::endl;
 11
 12     const int n = sizeof(long) * 8 -1;
 13     cout << "n = " << n << std::endl;
 14
 15     //long
 16     long la = (1ul << n) -1;
 17     cout << "sizeof la = " << sizeof(la) << ", la =" << la << std::endl;
 18
 19     long lb = (1ul << n);
 20     cout << "sizeof lb = " << sizeof(lb) << ", lb =" << lb << std::endl;
 21
 22     //mod
 23
 24     int n = 5; // Replace '5' with the desired value of n
 25
 26     long la = (1ul << n) - 1;
 27     std::cout << "sizeof la = " << sizeof(la) << ", la = " << la << std::endl;
 28
 29     long lb = (1ul << n);
 30     std::cout << "sizeof lb = " << sizeof(lb) << ", lb = " << lb << std::endl;
 31
 32     long modulus = lb % la;
 33     std::cout << "Modulus of lb by la = " << modulus << std::endl;
 34
 35     return 0;
 36
 37     //type names
 38     typedef long long ll;
 39     long long a = 123456789;
 40     long long b = 987654321;
 41     cout << a*b << "\n"
 42     ll a = 123456789;
 43     ll b = 987654321;
 44
 45     #define REP(i,a,b) for (int i = a; i <= b; i++)
 46
 47     REP(i, 1, n){
 48         search(i);
 49     }
 50
 51
 52
 53 }