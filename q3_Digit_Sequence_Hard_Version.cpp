/*
Question Link : https://codeforces.com/problemset/problem/1177/B
*/
#include <iostream>
using namespace std;
 
int findNthDigit(long long n)  {
        // step 1. calculate how many digits the number has.
    long long base = 9, digits = 1;
    while (n - base * digits > 0) {
        n -= base * digits;
        base *= 10;
        digits ++;
    }
    long long index = n % digits;
    if (index == 0)
        index = digits;
    long long num = 1;
    for (int i = 1; i < digits; i ++)
        num *= 10;
    num += (index == digits) ? n / digits - 1 : n / digits;;
    for (int i = index; i < digits; i ++)
        num /= 10;
    return num % 10;
}
 
int main() {
	// your code goes here
	long long n;
	cin >> n;
	cout << findNthDigit(n);
	
	return 0;
}