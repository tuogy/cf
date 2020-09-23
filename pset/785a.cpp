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

    int n, tot = 0;
    string x;
    for (cin >> n; n; n--) {
        cin >> x;
        switch (x[0])
        {
        case 'T': tot += 4;
            break;
        case 'C': tot += 6;
            break;
        case 'O': tot += 8;
        break;
        case 'D': tot += 12;
        break;
        case 'I': tot += 20;
        break;
        
        default:
            break;
        }
    }
    cout << tot << endl;
    return 0;
}
