#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
    printf("Enter number in cents: ");
    int cents;
    cin >> cents;
    printf("\n");
    int changes[] {1, 5, 10, 25, 100};
    vector<int> dp(cents+1, INT_MAX);
    dp[0] = 1;
    vector<vector<int>> ch(cents + 1, vector<int>{});
    ch[0] = {};
    for(int cent = 0; cent <= cents; cent++) {
        for(int change: changes) {
            if(cent >= change) {
                int cur = dp[cent - change] + 1;
                if(cur < dp[cent]) {
                    dp[cent] = cur;
                    ch[cent].clear();
                    ch[cent].insert(ch[cent].end(), ch[cent-change].begin(), ch[cent-change].end());
                    ch[cent].push_back(change);
                }
            }
        }
    }
    cout << "Changes are" << endl;
    std::unordered_map<int, int> hm {};
    for(int c : ch[cents]) {
        hm[c]++;
    }
    for(auto m: hm) {
        cout<< m.first << " cents: " << m.second << endl;
    }
    return 0;
}