#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
int lonelyinteger(vector < int > a) {
int ans=0,i;
    vector<int> ::iterator it;
    int g = a.size();
    sort(a.begin(),a.end());
    for(i = 0;i < g;++i)
        cout<<a[i]<<endl;
    for(i = 0;i < (g);++i)
        {
            if(a[i] == a[i+1])
                ++i;
            else
                {ans = a[i];
                break;}
    }
    return ans;

}
int main() {
    int res;

    int _a_size;
    cin >> _a_size;
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');
    vector<int> _a;
    int _a_item;
    for(int _a_i=0; _a_i<_a_size; _a_i++) {
        cin >> _a_item;
        _a.push_back(_a_item);
    }

    res = lonelyinteger(_a);
    cout << res;

    return 0;
}
