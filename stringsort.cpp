#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  string str;

  cout << "Enter a string: ";
  cin >> str;

  // Sort the string using the std::sort function.
  std::sort(str.begin(), str.end());

  cout << "Sorted string: " << str << endl;

  return 0;
}
