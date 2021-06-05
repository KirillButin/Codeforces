#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <vector>
#include <set>
#include <map>
#include <sstream>
#include <cassert>
using namespace std;
#pragma comment(linker, "/STACK:20000000")

typedef vector<int> vi;
#define sz(a) int((a).size()) 
#define all(c) (c).begin(),(c).end() 


long long t[100005];
int mn[100005];
int n;
int res;
int mx;
// сумма, произведение, последнее число, сколько осталось поставить
void go(long long s, long long p, int l, int n) {
    if (n < 0) return;
    if (n == 0) {
        if (s == p) {
            res++;
            mx = max(mx, l);
        }
        return;
    }

    for (int i = l; i < 550; i++) {
        if (p * i - s - i <= n)
            go(s + i, p * i, i, n - 1);
        else break;
    }
}


int main() {


    cin >> n;

    res = 0;
    go(0, 1, 1, n);
    cout << res << endl;
}
