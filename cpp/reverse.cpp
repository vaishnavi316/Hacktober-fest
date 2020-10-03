#include <iostream>
using namespace std;

int main() {
  int n, rev_num = 0, remainder;
  cout << "Enter a number: ";
  cin >> n;
  while(n != 0){
    remainder = n%10;
    rev_num = rev_num*10 + remainder;
    n /= 10;
  }
  cout << "Reversed Number = " << rev_num;

  return 0;
}
