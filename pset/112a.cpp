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

    string l, r;
    cin >> l >> r;
    int ret = 0;
    for (int i = 0; i < l.size() && ret == 0; i++) {
        if (l[i] >= 'A' && l[i] <= 'Z') l[i] += 'a' - 'A';
        if (r[i] >= 'A' && r[i] <= 'Z') r[i] += 'a' - 'A';
        if (l[i] < r[i]) ret = -1;
        else if (l[i] > r[i]) ret = 1;
    }
    cout << ret << endl;
    return 0;
}
