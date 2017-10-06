#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main() {
  int m, n;
  cout << "Enter n" << endl;
  cin >> n;
  cout << "Enter m:" << endl;
  cin >> m;
  int a[n][m];
  int b[n][m];
  int c[n][m];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> a[i][j];
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> b[i][j];
    }
  };
  cout << endl;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      c[i][j] = a[i][j] + b[i][j];
      cout << c[i][j] << " ";
    }
    cout << endl;
  }
}
