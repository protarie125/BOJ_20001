#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

string s;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  ll p = 0;
  ll d = 0;
  while (true) {
    getline(cin, s);

    if (s == "문제") {
      ++p;
    } else if (s == "고무오리") {
      if (p > 0)
        --p;
      else
        p += 2;
    } else if (s == "고무오리 디버깅 끝") {
      break;
    }
  }

  if (p != 0) {
    cout << "힝구";
  } else {
    cout << "고무오리야 사랑해";
  }

  return 0;
}