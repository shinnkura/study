// https://atcoder.jp/contests/apg4b/tasks/APG4b_cf
#include <iostream>
#include <vector>
using namespace std;
 
int main() {
  int N, S;
  cin >> N >> S;
  vector<int> A(N), P(N);
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
  }
  for (int i = 0; i < N; i++) {
    cin >> P.at(i);
  }
 
  // リンゴ・パイナップルをそれぞれ1つずつ購入するとき合計S円になるような買い方が何通りあるか
  // ここにプログラムを追記
  int count = 0;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
        if (A.at(i) + P.at(j) == S) {
            count++;
        }
    }
  }

  cout << count << endl;
}