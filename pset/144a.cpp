#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <string>
#include <sstream>
#include <iterator>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <climits>
#include <bitset>
#include <functional>

#ifdef __APPLE__
FILE *__fp = fopen("__sample.in", "r");
#define scanf(...) fscanf(__fp, __VA_ARGS__)
#define cin fin
std::ifstream cin("__sample.in");
#endif

using namespace std;

typedef pair<int, int> ii;
typedef long long ll;
const int INT_INF = 0x3f3f3f3f, INT_NINF = 0xc0c0c0c0;
const int d4r[] = {0, 1, 0, -1}, d4c[] = {1, 0, -1, 0};


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, x, tot = 0;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        cin >> x;
        v.push_back(x);
    }
    int mx = *max_element(v.begin(), v.end());
    for (int i = 0; i < n; i++) {
        if (v[i] == mx) {
            tot += i;
            v.erase(v.begin() + i);
            break;
        }
    }
    int mn = *min_element(v.begin(), v.end());
    for (int i = n - 2; i >= 0; i--) {
        if (v[i] == mn) {
            tot += n - 2 - i;
            break;
        }
    }
    cout << tot << endl;


    return 0;
}
