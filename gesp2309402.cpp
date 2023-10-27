#include <iostream>
using namespace std;
void output_digit(int d) {
 if (d >= 10)
 cout << (char)('A' + d - 10);
 else
 cout << (char)('0' + d);
}
void output_code(int s) {
 output_digit(s >> 4);
 output_digit(s & 0x0f);
}
int main() {
 long long n = 0;
 cin >> n;
 int split[10];
 int l = 0;
 while (n > 0) {
 split[l] = (int)(n & 0x7f);
 n >>= 7;
 l++;
 }
 for (int i = 0; i < l - 1; i++)
 split[i] |= 0x80;
 output_code(split[0]);
 for (int i = 1; i < l; i++) {
 cout << " ";
 output_code(split[i]);
 }
 cout << endl;
return 0;
}
