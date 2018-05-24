// http://www.cppblog.com/flyinghearts/archive/2010/09/01/125555.aspx

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

void print(vector<vector<int> >& dp) { 
    for(int i = 0 ; i < dp.size(); i++ ) {
        for(int j = 0 ; j < dp[i].size(); j++ ) {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

}

int main() {
    int a1[] = {5, 4, 7, 2, 6};
    int a2[] = {12, 3 , 10, 3 , 6};
    int a3[] = {1, 3, 2, 3, 1};
    vector<int> cost = vector<int>(a1, a1 + 5);
    vector<int> value = vector<int>(a2, a2 + 5);
    vector<int> nums = vector<int>(a3, a3 + 5);
    int total = 13;
    vector<vector<int> > dp(cost.size() + 1, vector<int>(total + 1, 0));
    // initalize
    for(int i = 1; i <= total; i++ ) {
        dp[0][i] = -1;
    }
    for(int i = 1 ; i <= cost.size(); i++ ) {
        for(int j = 0 ; j <= total; j++ ) {
            if( dp[i-1][j] >= 0 ) {
                dp[i][j] = nums[i];
            } else {
                dp[i][j] = -1;
            }
        }
        for(int j = 0; j <= total - cost[j]; j++ ) {
            if( dp[i][j] > 0 ) {
                dp[i][ j+cost[i] ] = max( dp[i][ j+cost[i] ], dp[i][j] - 1 );
            }
        }
        print(dp);
    }
    return 0;
}