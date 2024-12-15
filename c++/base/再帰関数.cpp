// https://atcoder.jp/contests/apg4b/tasks/APG4b_v
「ある関数の中で同じ関数を呼び出す」ことを再帰呼び出しという
再帰を行うような関数を再帰関数という

#include <bits/stdc++.h>
using namespace std;

int sum(int n) {
  if (n == 0) {
    return 0;
  }

  // sum関数の中でsum関数を呼び出している
  int s = sum(n - 1);
  return s + n;
}

int main() {
  cout << sum(2) << endl;    // 0 + 1 + 2 = 3
  cout << sum(3) << endl;    // 0 + 1 + 2 + 3 = 6
  cout << sum(10) << endl;   // 0 + 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10 = 55
}


上の例でsum(3)を呼び出したときの動作を書き出してみます。

sum(3)ではsum(2)を呼び出してその結果に3を足して返します。
sum(2)ではsum(1)を呼び出してその結果に2を足して返します。
sum(1)ではsum(0)を呼び出してその結果に1を足して返します。
sum(0)は0を返します。


呼び出されるsum(3), sum(2), sum(1), sum(0)をそれぞれ別々の関数に切り出す
#include <bits/stdc++.h>
using namespace std;

// 0~0の総和を求める
int sum0() {
  return 0;
}
// 0~1の総和を求める
int sum1() {
  int s = sum0();
  return s + 1;  // (0~0の総和) + 1 = 1
}
// 0~2の総和を求める
int sum2() {
  int s = sum1();
  return s + 2;  // (0~1の総和) + 2 = 3
}
// 0~3の総和を求める
int sum3() {
  int s = sum2();
  return s + 3;  // (0~2の総和) + 3 = 6
}

int main() {
  cout << sum3() << endl;  // 6
}



それぞれ呼び方がある
// n を受け取って、0~n の総和を計算して返す関数
int sum(int n) {
  // ベースケース(再帰呼び出しを行わずに完了できる処理をベースケースという)
  if (n == 0) {
    return 0;
  }

  // 再帰ステップ(再帰呼出しを行い、その結果を用いて行う処理のことを再帰ステップという)
  int s = sum(n - 1);
  return s + n;
}



再帰関数の実装方法3ステップ
1.「引数」「返り値」「処理内容」を決める
2.再帰ステップの実装
3.ベースケースの実装


例）sum関数での例
1.
引数	int n (0以上の整数)
返り値	0∼nの総和
処理内容	0∼nの総和を計算する

2.


