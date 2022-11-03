#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

void print(string message) { cout << message; }

vector<string> split(string s, string delim) {
  vector<string> parts {};
  int p = 0;
  string token;
  while ((p = s.find(delim)) != string::npos) {
    token = s.substr(0, p);
    parts.push_back(token);
    cout << token << endl;
    s.erase(0, p + delim.length());
  }
  cout << s << endl;
  parts.push_back(s);
  return parts;
}

int main() {
  print("Hello World!\n");
  string x = "one,two,three";
  vector<string> y = split(x, ",");
  cout << "[ ";
  for (const auto& i : y) {
    cout << i << ", ";
  }
  cout << "]";
  return 0;
}